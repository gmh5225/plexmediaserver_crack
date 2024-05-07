#include "hook.hpp"

#include <vector>
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <sys/mman.h>

bool get_dottext_info(uintptr_t& start, uintptr_t& end)
{
	std::ifstream file("/proc/self/maps");
	std::string line;
	
	while(std::getline(file, line))
	{
		// I don't understand Linux :|
		// Only .text should have `r-xp`. This works I guess..
		if(line.find("Plex Media Server") != std::string::npos && line.find("r-xp") != std::string::npos)
		{
			auto range = line.substr(0, line.find(' '));
			start = std::stoull(line.substr(0, line.find('-')), nullptr, 16);
			end = std::stoull(line.substr(line.find('-') + 1), nullptr, 16);

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
	uintptr_t dottext_start;
	uintptr_t dottext_end;
	
	if(!get_dottext_info(dottext_start, dottext_end))
	{
		return;
	}

	const auto _is_feature_available = sig_scan(dottext_start, dottext_end, "55 48 89 E5 41 57 41 56 53 50 49 89 F7 48 89 FB 4C 8D 77 08 4C 89 F7 E8 ? ? ? ? 48 8D 7B 30");

	if(_is_feature_available == 0)
	{
		return;
	}

	// Jumps to specified address
	uint8_t shellcode[] =
	{
		0x48, 0xB8, // movq rax, ?
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

		0x50, // push rax
		0xC3  // ret
	};

	*reinterpret_cast<decltype(&hook_is_feature_available)*>(&shellcode[2]) = &hook_is_feature_available;

	mprotect(reinterpret_cast<void*>(_is_feature_available), sizeof(shellcode), PROT_READ|PROT_WRITE|PROT_EXEC);
	memcpy(reinterpret_cast<void*>(_is_feature_available), shellcode, sizeof(shellcode));
	mprotect(reinterpret_cast<void*>(_is_feature_available), sizeof(shellcode), PROT_READ|PROT_EXEC);
}
