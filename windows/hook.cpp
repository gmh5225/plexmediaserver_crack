#include "hook.hpp"

#include <MinHook.h>
#include <format>
#include <vector>
#include <dbghelp.h>
#include <iostream>

uintptr_t _is_feature_available;

bool get_section_info(std::string_view name, uintptr_t& start, uintptr_t& end)
{
	char filename[MAX_PATH];
	GetModuleFileNameA(NULL, filename, sizeof(filename));

	auto cur_handle = GetModuleHandleA(filename);
	IMAGE_NT_HEADERS* nt_hdr = ImageNtHeader(cur_handle);
	IMAGE_SECTION_HEADER* section_hdr = reinterpret_cast<IMAGE_SECTION_HEADER*>(nt_hdr + 1);
	uintptr_t image_base = reinterpret_cast<uintptr_t>(cur_handle);

	for(int i = 0; i < nt_hdr->FileHeader.NumberOfSections; i++, section_hdr++)
	{
		auto section_header_name = reinterpret_cast<char*>(section_hdr->Name);

		if(name == section_header_name)
		{
			uintptr_t base_module = image_base + section_hdr->VirtualAddress;
			start = base_module;
			end = base_module + section_hdr->Misc.VirtualSize - 1;

			return true;
		}
	}

	return false;
}

uintptr_t sig_scan(const uintptr_t start, const uintptr_t end, std::string_view pattern)
{
	constexpr const uint16_t WILDCARD = 0xFFFF;
	std::vector<uint16_t> pattern_vec;
	
	for(uintptr_t i = 0; i < pattern.length(); i++)
	{
		if(pattern[i] == ' ')
		{
			continue;
		}

		if(pattern[i] == '?')
		{
			if(pattern[i + 1] == '?')
			{
				i++;
			}

			pattern_vec.push_back(WILDCARD);

			continue;
		}

		pattern_vec.push_back(static_cast<uint16_t>(std::strtol(&pattern[i], nullptr, 16)));
		i++;
	}

	const auto vec_length = pattern_vec.size();

	for(uintptr_t i = start; i < end; i++)
	{
		for(uintptr_t x = 0; x < vec_length; x++)
		{
			const auto mem = *reinterpret_cast<uint8_t*>(i + x);

			if(pattern_vec[x] != WILDCARD && mem != pattern_vec[x])
			{
				break;
			}

			else if(x == vec_length - 1)
			{
				return i;
			}
		}
	}

	return 0;
}

uint64_t hook_is_feature_available([[maybe_unused]] uintptr_t user, [[maybe_unused]] const char* feature)
{
	// `feature` is a GUID. You can use it to enable certain features rather than Godmode (everything); but there's no reason to limit ourselves.. is there?

	return true;
}

void hook()
{
	// TODO linux: 55 48 89 E5 41 57 41 56 53 50 49 89 F7 48 89 FB 4C 8D 77 08 4C 89 F7 E8 ? ? ? ? 48 8D 7B 30

	uintptr_t dottext_start;
	uintptr_t dottext_end;

	if(!get_section_info(".text", dottext_start, dottext_end))
	{
		std::cerr << "[ERR] [plexmediaserver_crack] .text section not found; aborting.\n";

		return;
	}

	_is_feature_available = sig_scan(dottext_start, dottext_end, "41 54 41 56 41 57 48 83 EC 20 4C 8B F9 4C 8B F2");
	
	MH_Initialize();
	MH_CreateHook(reinterpret_cast<void*>(_is_feature_available), &hook_is_feature_available, reinterpret_cast<void**>(&_is_feature_available));
	MH_EnableHook(MH_ALL_HOOKS);
}
