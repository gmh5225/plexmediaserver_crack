#ifdef _WIN64
#define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\System32\\IPHLPAPI.DLL"
#else
#define DLLPATH "\\\\.\\GLOBALROOT\\SystemRoot\\SysWOW64\\IPHLPAPI.DLL"
#endif // _WIN64

#pragma comment(linker, "/EXPORT:AddIPAddress=" DLLPATH ".AddIPAddress")
#pragma comment(linker, "/EXPORT:AllocateAndGetInterfaceInfoFromStack=" DLLPATH ".AllocateAndGetInterfaceInfoFromStack")
#pragma comment(linker, "/EXPORT:AllocateAndGetIpAddrTableFromStack=" DLLPATH ".AllocateAndGetIpAddrTableFromStack")
#pragma comment(linker, "/EXPORT:CancelIPChangeNotify=" DLLPATH ".CancelIPChangeNotify")
#pragma comment(linker, "/EXPORT:CancelIfTimestampConfigChange=" DLLPATH ".CancelIfTimestampConfigChange")
#pragma comment(linker, "/EXPORT:CancelMibChangeNotify2=" DLLPATH ".CancelMibChangeNotify2")
#pragma comment(linker, "/EXPORT:CaptureInterfaceHardwareCrossTimestamp=" DLLPATH ".CaptureInterfaceHardwareCrossTimestamp")
#pragma comment(linker, "/EXPORT:CloseCompartment=" DLLPATH ".CloseCompartment")
#pragma comment(linker, "/EXPORT:CloseGetIPPhysicalInterfaceForDestination=" DLLPATH ".CloseGetIPPhysicalInterfaceForDestination")
#pragma comment(linker, "/EXPORT:ConvertCompartmentGuidToId=" DLLPATH ".ConvertCompartmentGuidToId")
#pragma comment(linker, "/EXPORT:ConvertCompartmentIdToGuid=" DLLPATH ".ConvertCompartmentIdToGuid")
#pragma comment(linker, "/EXPORT:ConvertGuidToStringA=" DLLPATH ".ConvertGuidToStringA")
#pragma comment(linker, "/EXPORT:ConvertGuidToStringW=" DLLPATH ".ConvertGuidToStringW")
#pragma comment(linker, "/EXPORT:ConvertInterfaceAliasToLuid=" DLLPATH ".ConvertInterfaceAliasToLuid")
#pragma comment(linker, "/EXPORT:ConvertInterfaceGuidToLuid=" DLLPATH ".ConvertInterfaceGuidToLuid")
#pragma comment(linker, "/EXPORT:ConvertInterfaceIndexToLuid=" DLLPATH ".ConvertInterfaceIndexToLuid")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToAlias=" DLLPATH ".ConvertInterfaceLuidToAlias")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToGuid=" DLLPATH ".ConvertInterfaceLuidToGuid")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToIndex=" DLLPATH ".ConvertInterfaceLuidToIndex")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToNameA=" DLLPATH ".ConvertInterfaceLuidToNameA")
#pragma comment(linker, "/EXPORT:ConvertInterfaceLuidToNameW=" DLLPATH ".ConvertInterfaceLuidToNameW")
#pragma comment(linker, "/EXPORT:ConvertInterfaceNameToLuidA=" DLLPATH ".ConvertInterfaceNameToLuidA")
#pragma comment(linker, "/EXPORT:ConvertInterfaceNameToLuidW=" DLLPATH ".ConvertInterfaceNameToLuidW")
#pragma comment(linker, "/EXPORT:ConvertInterfacePhysicalAddressToLuid=" DLLPATH ".ConvertInterfacePhysicalAddressToLuid")
#pragma comment(linker, "/EXPORT:ConvertIpv4MaskToLength=" DLLPATH ".ConvertIpv4MaskToLength")
#pragma comment(linker, "/EXPORT:ConvertLengthToIpv4Mask=" DLLPATH ".ConvertLengthToIpv4Mask")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceAliasToLuid=" DLLPATH ".ConvertRemoteInterfaceAliasToLuid")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceGuidToLuid=" DLLPATH ".ConvertRemoteInterfaceGuidToLuid")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceIndexToLuid=" DLLPATH ".ConvertRemoteInterfaceIndexToLuid")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToAlias=" DLLPATH ".ConvertRemoteInterfaceLuidToAlias")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToGuid=" DLLPATH ".ConvertRemoteInterfaceLuidToGuid")
#pragma comment(linker, "/EXPORT:ConvertRemoteInterfaceLuidToIndex=" DLLPATH ".ConvertRemoteInterfaceLuidToIndex")
#pragma comment(linker, "/EXPORT:ConvertStringToGuidA=" DLLPATH ".ConvertStringToGuidA")
#pragma comment(linker, "/EXPORT:ConvertStringToGuidW=" DLLPATH ".ConvertStringToGuidW")
#pragma comment(linker, "/EXPORT:ConvertStringToInterfacePhysicalAddress=" DLLPATH ".ConvertStringToInterfacePhysicalAddress")
#pragma comment(linker, "/EXPORT:CreateAnycastIpAddressEntry=" DLLPATH ".CreateAnycastIpAddressEntry")
#pragma comment(linker, "/EXPORT:CreateCompartment=" DLLPATH ".CreateCompartment")
#pragma comment(linker, "/EXPORT:CreateIpForwardEntry=" DLLPATH ".CreateIpForwardEntry")
#pragma comment(linker, "/EXPORT:CreateIpForwardEntry2=" DLLPATH ".CreateIpForwardEntry2")
#pragma comment(linker, "/EXPORT:CreateIpNetEntry=" DLLPATH ".CreateIpNetEntry")
#pragma comment(linker, "/EXPORT:CreateIpNetEntry2=" DLLPATH ".CreateIpNetEntry2")
#pragma comment(linker, "/EXPORT:CreatePersistentTcpPortReservation=" DLLPATH ".CreatePersistentTcpPortReservation")
#pragma comment(linker, "/EXPORT:CreatePersistentUdpPortReservation=" DLLPATH ".CreatePersistentUdpPortReservation")
#pragma comment(linker, "/EXPORT:CreateProxyArpEntry=" DLLPATH ".CreateProxyArpEntry")
#pragma comment(linker, "/EXPORT:CreateSortedAddressPairs=" DLLPATH ".CreateSortedAddressPairs")
#pragma comment(linker, "/EXPORT:CreateUnicastIpAddressEntry=" DLLPATH ".CreateUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:DeleteAnycastIpAddressEntry=" DLLPATH ".DeleteAnycastIpAddressEntry")
#pragma comment(linker, "/EXPORT:DeleteCompartment=" DLLPATH ".DeleteCompartment")
#pragma comment(linker, "/EXPORT:DeleteIPAddress=" DLLPATH ".DeleteIPAddress")
#pragma comment(linker, "/EXPORT:DeleteIpForwardEntry=" DLLPATH ".DeleteIpForwardEntry")
#pragma comment(linker, "/EXPORT:DeleteIpForwardEntry2=" DLLPATH ".DeleteIpForwardEntry2")
#pragma comment(linker, "/EXPORT:DeleteIpNetEntry=" DLLPATH ".DeleteIpNetEntry")
#pragma comment(linker, "/EXPORT:DeleteIpNetEntry2=" DLLPATH ".DeleteIpNetEntry2")
#pragma comment(linker, "/EXPORT:DeletePersistentTcpPortReservation=" DLLPATH ".DeletePersistentTcpPortReservation")
#pragma comment(linker, "/EXPORT:DeletePersistentUdpPortReservation=" DLLPATH ".DeletePersistentUdpPortReservation")
#pragma comment(linker, "/EXPORT:DeleteProxyArpEntry=" DLLPATH ".DeleteProxyArpEntry")
#pragma comment(linker, "/EXPORT:DeleteUnicastIpAddressEntry=" DLLPATH ".DeleteUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:DisableMediaSense=" DLLPATH ".DisableMediaSense")
#pragma comment(linker, "/EXPORT:EnableRouter=" DLLPATH ".EnableRouter")
#pragma comment(linker, "/EXPORT:FlushIpNetTable=" DLLPATH ".FlushIpNetTable")
#pragma comment(linker, "/EXPORT:FlushIpNetTable2=" DLLPATH ".FlushIpNetTable2")
#pragma comment(linker, "/EXPORT:FlushIpPathTable=" DLLPATH ".FlushIpPathTable")
#pragma comment(linker, "/EXPORT:FreeDnsSettings=" DLLPATH ".FreeDnsSettings")
#pragma comment(linker, "/EXPORT:FreeInterfaceDnsSettings=" DLLPATH ".FreeInterfaceDnsSettings")
#pragma comment(linker, "/EXPORT:FreeMibTable=" DLLPATH ".FreeMibTable")
#pragma comment(linker, "/EXPORT:GetAdapterIndex=" DLLPATH ".GetAdapterIndex")
#pragma comment(linker, "/EXPORT:GetAdapterOrderMap=" DLLPATH ".GetAdapterOrderMap")
#pragma comment(linker, "/EXPORT:GetAdaptersAddresses=" DLLPATH ".GetAdaptersAddresses")
#pragma comment(linker, "/EXPORT:GetAdaptersInfo=" DLLPATH ".GetAdaptersInfo")
#pragma comment(linker, "/EXPORT:GetAnycastIpAddressEntry=" DLLPATH ".GetAnycastIpAddressEntry")
#pragma comment(linker, "/EXPORT:GetAnycastIpAddressTable=" DLLPATH ".GetAnycastIpAddressTable")
#pragma comment(linker, "/EXPORT:GetBestInterface=" DLLPATH ".GetBestInterface")
#pragma comment(linker, "/EXPORT:GetBestInterfaceEx=" DLLPATH ".GetBestInterfaceEx")
#pragma comment(linker, "/EXPORT:GetBestRoute=" DLLPATH ".GetBestRoute")
#pragma comment(linker, "/EXPORT:GetBestRoute2=" DLLPATH ".GetBestRoute2")
#pragma comment(linker, "/EXPORT:GetCurrentThreadCompartmentId=" DLLPATH ".GetCurrentThreadCompartmentId")
#pragma comment(linker, "/EXPORT:GetCurrentThreadCompartmentScope=" DLLPATH ".GetCurrentThreadCompartmentScope")
#pragma comment(linker, "/EXPORT:GetDefaultCompartmentId=" DLLPATH ".GetDefaultCompartmentId")
#pragma comment(linker, "/EXPORT:GetDnsSettings=" DLLPATH ".GetDnsSettings")
#pragma comment(linker, "/EXPORT:GetExtendedTcpTable=" DLLPATH ".GetExtendedTcpTable")
#pragma comment(linker, "/EXPORT:GetExtendedUdpTable=" DLLPATH ".GetExtendedUdpTable")
#pragma comment(linker, "/EXPORT:GetFriendlyIfIndex=" DLLPATH ".GetFriendlyIfIndex")
#pragma comment(linker, "/EXPORT:GetIcmpStatistics=" DLLPATH ".GetIcmpStatistics")
#pragma comment(linker, "/EXPORT:GetIcmpStatisticsEx=" DLLPATH ".GetIcmpStatisticsEx")
#pragma comment(linker, "/EXPORT:GetIfEntry=" DLLPATH ".GetIfEntry")
#pragma comment(linker, "/EXPORT:GetIfEntry2=" DLLPATH ".GetIfEntry2")
#pragma comment(linker, "/EXPORT:GetIfEntry2Ex=" DLLPATH ".GetIfEntry2Ex")
#pragma comment(linker, "/EXPORT:GetIfStackTable=" DLLPATH ".GetIfStackTable")
#pragma comment(linker, "/EXPORT:GetIfTable=" DLLPATH ".GetIfTable")
#pragma comment(linker, "/EXPORT:GetIfTable2=" DLLPATH ".GetIfTable2")
#pragma comment(linker, "/EXPORT:GetIfTable2Ex=" DLLPATH ".GetIfTable2Ex")
#pragma comment(linker, "/EXPORT:GetInterfaceActiveTimestampCapabilities=" DLLPATH ".GetInterfaceActiveTimestampCapabilities")
#pragma comment(linker, "/EXPORT:GetInterfaceCompartmentId=" DLLPATH ".GetInterfaceCompartmentId")
#pragma comment(linker, "/EXPORT:GetInterfaceCurrentTimestampCapabilities=" DLLPATH ".GetInterfaceCurrentTimestampCapabilities")
#pragma comment(linker, "/EXPORT:GetInterfaceDnsSettings=" DLLPATH ".GetInterfaceDnsSettings")
#pragma comment(linker, "/EXPORT:GetInterfaceHardwareTimestampCapabilities=" DLLPATH ".GetInterfaceHardwareTimestampCapabilities")
#pragma comment(linker, "/EXPORT:GetInterfaceInfo=" DLLPATH ".GetInterfaceInfo")
#pragma comment(linker, "/EXPORT:GetInterfaceSupportedTimestampCapabilities=" DLLPATH ".GetInterfaceSupportedTimestampCapabilities")
#pragma comment(linker, "/EXPORT:GetInvertedIfStackTable=" DLLPATH ".GetInvertedIfStackTable")
#pragma comment(linker, "/EXPORT:GetIpAddrTable=" DLLPATH ".GetIpAddrTable")
#pragma comment(linker, "/EXPORT:GetIpErrorString=" DLLPATH ".GetIpErrorString")
#pragma comment(linker, "/EXPORT:GetIpForwardEntry2=" DLLPATH ".GetIpForwardEntry2")
#pragma comment(linker, "/EXPORT:GetIpForwardTable=" DLLPATH ".GetIpForwardTable")
#pragma comment(linker, "/EXPORT:GetIpForwardTable2=" DLLPATH ".GetIpForwardTable2")
#pragma comment(linker, "/EXPORT:GetIpInterfaceEntry=" DLLPATH ".GetIpInterfaceEntry")
#pragma comment(linker, "/EXPORT:GetIpInterfaceTable=" DLLPATH ".GetIpInterfaceTable")
#pragma comment(linker, "/EXPORT:GetIpNetEntry2=" DLLPATH ".GetIpNetEntry2")
#pragma comment(linker, "/EXPORT:GetIpNetTable=" DLLPATH ".GetIpNetTable")
#pragma comment(linker, "/EXPORT:GetIpNetTable2=" DLLPATH ".GetIpNetTable2")
#pragma comment(linker, "/EXPORT:GetIpNetworkConnectionBandwidthEstimates=" DLLPATH ".GetIpNetworkConnectionBandwidthEstimates")
#pragma comment(linker, "/EXPORT:GetIpPathEntry=" DLLPATH ".GetIpPathEntry")
#pragma comment(linker, "/EXPORT:GetIpPathTable=" DLLPATH ".GetIpPathTable")
#pragma comment(linker, "/EXPORT:GetIpStatistics=" DLLPATH ".GetIpStatistics")
#pragma comment(linker, "/EXPORT:GetIpStatisticsEx=" DLLPATH ".GetIpStatisticsEx")
#pragma comment(linker, "/EXPORT:GetJobCompartmentId=" DLLPATH ".GetJobCompartmentId")
#pragma comment(linker, "/EXPORT:GetMulticastIpAddressEntry=" DLLPATH ".GetMulticastIpAddressEntry")
#pragma comment(linker, "/EXPORT:GetMulticastIpAddressTable=" DLLPATH ".GetMulticastIpAddressTable")
#pragma comment(linker, "/EXPORT:GetNetworkConnectivityHint=" DLLPATH ".GetNetworkConnectivityHint")
#pragma comment(linker, "/EXPORT:GetNetworkConnectivityHintForInterface=" DLLPATH ".GetNetworkConnectivityHintForInterface")
#pragma comment(linker, "/EXPORT:GetNetworkInformation=" DLLPATH ".GetNetworkInformation")
#pragma comment(linker, "/EXPORT:GetNetworkParams=" DLLPATH ".GetNetworkParams")
#pragma comment(linker, "/EXPORT:GetNumberOfInterfaces=" DLLPATH ".GetNumberOfInterfaces")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromPidAndInfo=" DLLPATH ".GetOwnerModuleFromPidAndInfo")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromTcp6Entry=" DLLPATH ".GetOwnerModuleFromTcp6Entry")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromTcpEntry=" DLLPATH ".GetOwnerModuleFromTcpEntry")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromUdp6Entry=" DLLPATH ".GetOwnerModuleFromUdp6Entry")
#pragma comment(linker, "/EXPORT:GetOwnerModuleFromUdpEntry=" DLLPATH ".GetOwnerModuleFromUdpEntry")
#pragma comment(linker, "/EXPORT:GetPerAdapterInfo=" DLLPATH ".GetPerAdapterInfo")
#pragma comment(linker, "/EXPORT:GetPerTcp6ConnectionEStats=" DLLPATH ".GetPerTcp6ConnectionEStats")
#pragma comment(linker, "/EXPORT:GetPerTcp6ConnectionStats=" DLLPATH ".GetPerTcp6ConnectionStats")
#pragma comment(linker, "/EXPORT:GetPerTcpConnectionEStats=" DLLPATH ".GetPerTcpConnectionEStats")
#pragma comment(linker, "/EXPORT:GetPerTcpConnectionStats=" DLLPATH ".GetPerTcpConnectionStats")
#pragma comment(linker, "/EXPORT:GetRTTAndHopCount=" DLLPATH ".GetRTTAndHopCount")
#pragma comment(linker, "/EXPORT:GetSessionCompartmentId=" DLLPATH ".GetSessionCompartmentId")
#pragma comment(linker, "/EXPORT:GetTcp6Table=" DLLPATH ".GetTcp6Table")
#pragma comment(linker, "/EXPORT:GetTcp6Table2=" DLLPATH ".GetTcp6Table2")
#pragma comment(linker, "/EXPORT:GetTcpStatistics=" DLLPATH ".GetTcpStatistics")
#pragma comment(linker, "/EXPORT:GetTcpStatisticsEx=" DLLPATH ".GetTcpStatisticsEx")
#pragma comment(linker, "/EXPORT:GetTcpStatisticsEx2=" DLLPATH ".GetTcpStatisticsEx2")
#pragma comment(linker, "/EXPORT:GetTcpTable=" DLLPATH ".GetTcpTable")
#pragma comment(linker, "/EXPORT:GetTcpTable2=" DLLPATH ".GetTcpTable2")
#pragma comment(linker, "/EXPORT:GetTeredoPort=" DLLPATH ".GetTeredoPort")
#pragma comment(linker, "/EXPORT:GetUdp6Table=" DLLPATH ".GetUdp6Table")
#pragma comment(linker, "/EXPORT:GetUdpStatistics=" DLLPATH ".GetUdpStatistics")
#pragma comment(linker, "/EXPORT:GetUdpStatisticsEx=" DLLPATH ".GetUdpStatisticsEx")
#pragma comment(linker, "/EXPORT:GetUdpStatisticsEx2=" DLLPATH ".GetUdpStatisticsEx2")
#pragma comment(linker, "/EXPORT:GetUdpTable=" DLLPATH ".GetUdpTable")
#pragma comment(linker, "/EXPORT:GetUniDirectionalAdapterInfo=" DLLPATH ".GetUniDirectionalAdapterInfo")
#pragma comment(linker, "/EXPORT:GetUnicastIpAddressEntry=" DLLPATH ".GetUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:GetUnicastIpAddressTable=" DLLPATH ".GetUnicastIpAddressTable")
#pragma comment(linker, "/EXPORT:GetWPAOACSupportLevel=" DLLPATH ".GetWPAOACSupportLevel")
#pragma comment(linker, "/EXPORT:Icmp6CreateFile=" DLLPATH ".Icmp6CreateFile")
#pragma comment(linker, "/EXPORT:Icmp6ParseReplies=" DLLPATH ".Icmp6ParseReplies")
#pragma comment(linker, "/EXPORT:Icmp6SendEcho2=" DLLPATH ".Icmp6SendEcho2")
#pragma comment(linker, "/EXPORT:IcmpCloseHandle=" DLLPATH ".IcmpCloseHandle")
#pragma comment(linker, "/EXPORT:IcmpCreateFile=" DLLPATH ".IcmpCreateFile")
#pragma comment(linker, "/EXPORT:IcmpParseReplies=" DLLPATH ".IcmpParseReplies")
#pragma comment(linker, "/EXPORT:IcmpSendEcho=" DLLPATH ".IcmpSendEcho")
#pragma comment(linker, "/EXPORT:IcmpSendEcho2=" DLLPATH ".IcmpSendEcho2")
#pragma comment(linker, "/EXPORT:IcmpSendEcho2Ex=" DLLPATH ".IcmpSendEcho2Ex")
#pragma comment(linker, "/EXPORT:InitializeCompartmentEntry=" DLLPATH ".InitializeCompartmentEntry")
#pragma comment(linker, "/EXPORT:InitializeIpForwardEntry=" DLLPATH ".InitializeIpForwardEntry")
#pragma comment(linker, "/EXPORT:InitializeIpInterfaceEntry=" DLLPATH ".InitializeIpInterfaceEntry")
#pragma comment(linker, "/EXPORT:InitializeUnicastIpAddressEntry=" DLLPATH ".InitializeUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalCleanupPersistentStore=" DLLPATH ".InternalCleanupPersistentStore")
#pragma comment(linker, "/EXPORT:InternalCreateAnycastIpAddressEntry=" DLLPATH ".InternalCreateAnycastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalCreateIpForwardEntry=" DLLPATH ".InternalCreateIpForwardEntry")
#pragma comment(linker, "/EXPORT:InternalCreateIpForwardEntry2=" DLLPATH ".InternalCreateIpForwardEntry2")
#pragma comment(linker, "/EXPORT:InternalCreateIpNetEntry=" DLLPATH ".InternalCreateIpNetEntry")
#pragma comment(linker, "/EXPORT:InternalCreateIpNetEntry2=" DLLPATH ".InternalCreateIpNetEntry2")
#pragma comment(linker, "/EXPORT:InternalCreateOrRefIpForwardEntry2=" DLLPATH ".InternalCreateOrRefIpForwardEntry2")
#pragma comment(linker, "/EXPORT:InternalCreateUnicastIpAddressEntry=" DLLPATH ".InternalCreateUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalDeleteAnycastIpAddressEntry=" DLLPATH ".InternalDeleteAnycastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalDeleteIpForwardEntry=" DLLPATH ".InternalDeleteIpForwardEntry")
#pragma comment(linker, "/EXPORT:InternalDeleteIpForwardEntry2=" DLLPATH ".InternalDeleteIpForwardEntry2")
#pragma comment(linker, "/EXPORT:InternalDeleteIpNetEntry=" DLLPATH ".InternalDeleteIpNetEntry")
#pragma comment(linker, "/EXPORT:InternalDeleteIpNetEntry2=" DLLPATH ".InternalDeleteIpNetEntry2")
#pragma comment(linker, "/EXPORT:InternalDeleteUnicastIpAddressEntry=" DLLPATH ".InternalDeleteUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalFindInterfaceByAddress=" DLLPATH ".InternalFindInterfaceByAddress")
#pragma comment(linker, "/EXPORT:InternalGetAnycastIpAddressEntry=" DLLPATH ".InternalGetAnycastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalGetAnycastIpAddressTable=" DLLPATH ".InternalGetAnycastIpAddressTable")
#pragma comment(linker, "/EXPORT:InternalGetBoundTcp6EndpointTable=" DLLPATH ".InternalGetBoundTcp6EndpointTable")
#pragma comment(linker, "/EXPORT:InternalGetBoundTcpEndpointTable=" DLLPATH ".InternalGetBoundTcpEndpointTable")
#pragma comment(linker, "/EXPORT:InternalGetForwardIpTable2=" DLLPATH ".InternalGetForwardIpTable2")
#pragma comment(linker, "/EXPORT:InternalGetIPPhysicalInterfaceForDestination=" DLLPATH ".InternalGetIPPhysicalInterfaceForDestination")
#pragma comment(linker, "/EXPORT:InternalGetIfEntry2=" DLLPATH ".InternalGetIfEntry2")
#pragma comment(linker, "/EXPORT:InternalGetIfTable=" DLLPATH ".InternalGetIfTable")
#pragma comment(linker, "/EXPORT:InternalGetIfTable2=" DLLPATH ".InternalGetIfTable2")
#pragma comment(linker, "/EXPORT:InternalGetIpAddrTable=" DLLPATH ".InternalGetIpAddrTable")
#pragma comment(linker, "/EXPORT:InternalGetIpForwardEntry2=" DLLPATH ".InternalGetIpForwardEntry2")
#pragma comment(linker, "/EXPORT:InternalGetIpForwardTable=" DLLPATH ".InternalGetIpForwardTable")
#pragma comment(linker, "/EXPORT:InternalGetIpInterfaceEntry=" DLLPATH ".InternalGetIpInterfaceEntry")
#pragma comment(linker, "/EXPORT:InternalGetIpInterfaceTable=" DLLPATH ".InternalGetIpInterfaceTable")
#pragma comment(linker, "/EXPORT:InternalGetIpNetEntry2=" DLLPATH ".InternalGetIpNetEntry2")
#pragma comment(linker, "/EXPORT:InternalGetIpNetTable=" DLLPATH ".InternalGetIpNetTable")
#pragma comment(linker, "/EXPORT:InternalGetIpNetTable2=" DLLPATH ".InternalGetIpNetTable2")
#pragma comment(linker, "/EXPORT:InternalGetMulticastIpAddressEntry=" DLLPATH ".InternalGetMulticastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalGetMulticastIpAddressTable=" DLLPATH ".InternalGetMulticastIpAddressTable")
#pragma comment(linker, "/EXPORT:InternalGetRtcSlotInformation=" DLLPATH ".InternalGetRtcSlotInformation")
#pragma comment(linker, "/EXPORT:InternalGetTcp6Table2=" DLLPATH ".InternalGetTcp6Table2")
#pragma comment(linker, "/EXPORT:InternalGetTcp6TableWithOwnerModule=" DLLPATH ".InternalGetTcp6TableWithOwnerModule")
#pragma comment(linker, "/EXPORT:InternalGetTcp6TableWithOwnerPid=" DLLPATH ".InternalGetTcp6TableWithOwnerPid")
#pragma comment(linker, "/EXPORT:InternalGetTcpDynamicPortRange=" DLLPATH ".InternalGetTcpDynamicPortRange")
#pragma comment(linker, "/EXPORT:InternalGetTcpTable=" DLLPATH ".InternalGetTcpTable")
#pragma comment(linker, "/EXPORT:InternalGetTcpTable2=" DLLPATH ".InternalGetTcpTable2")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableEx=" DLLPATH ".InternalGetTcpTableEx")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableWithOwnerModule=" DLLPATH ".InternalGetTcpTableWithOwnerModule")
#pragma comment(linker, "/EXPORT:InternalGetTcpTableWithOwnerPid=" DLLPATH ".InternalGetTcpTableWithOwnerPid")
#pragma comment(linker, "/EXPORT:InternalGetTunnelPhysicalAdapter=" DLLPATH ".InternalGetTunnelPhysicalAdapter")
#pragma comment(linker, "/EXPORT:InternalGetUdp6Table2=" DLLPATH ".InternalGetUdp6Table2")
#pragma comment(linker, "/EXPORT:InternalGetUdp6TableWithOwnerModule=" DLLPATH ".InternalGetUdp6TableWithOwnerModule")
#pragma comment(linker, "/EXPORT:InternalGetUdp6TableWithOwnerPid=" DLLPATH ".InternalGetUdp6TableWithOwnerPid")
#pragma comment(linker, "/EXPORT:InternalGetUdpDynamicPortRange=" DLLPATH ".InternalGetUdpDynamicPortRange")
#pragma comment(linker, "/EXPORT:InternalGetUdpTable=" DLLPATH ".InternalGetUdpTable")
#pragma comment(linker, "/EXPORT:InternalGetUdpTable2=" DLLPATH ".InternalGetUdpTable2")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableEx=" DLLPATH ".InternalGetUdpTableEx")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableWithOwnerModule=" DLLPATH ".InternalGetUdpTableWithOwnerModule")
#pragma comment(linker, "/EXPORT:InternalGetUdpTableWithOwnerPid=" DLLPATH ".InternalGetUdpTableWithOwnerPid")
#pragma comment(linker, "/EXPORT:InternalGetUnicastIpAddressEntry=" DLLPATH ".InternalGetUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:InternalGetUnicastIpAddressTable=" DLLPATH ".InternalGetUnicastIpAddressTable")
#pragma comment(linker, "/EXPORT:InternalIcmpCreateFileEx=" DLLPATH ".InternalIcmpCreateFileEx")
#pragma comment(linker, "/EXPORT:InternalSetIfEntry=" DLLPATH ".InternalSetIfEntry")
#pragma comment(linker, "/EXPORT:InternalSetIpForwardEntry=" DLLPATH ".InternalSetIpForwardEntry")
#pragma comment(linker, "/EXPORT:InternalSetIpForwardEntry2=" DLLPATH ".InternalSetIpForwardEntry2")
#pragma comment(linker, "/EXPORT:InternalSetIpInterfaceEntry=" DLLPATH ".InternalSetIpInterfaceEntry")
#pragma comment(linker, "/EXPORT:InternalSetIpNetEntry=" DLLPATH ".InternalSetIpNetEntry")
#pragma comment(linker, "/EXPORT:InternalSetIpNetEntry2=" DLLPATH ".InternalSetIpNetEntry2")
#pragma comment(linker, "/EXPORT:InternalSetIpStats=" DLLPATH ".InternalSetIpStats")
#pragma comment(linker, "/EXPORT:InternalSetTcpDynamicPortRange=" DLLPATH ".InternalSetTcpDynamicPortRange")
#pragma comment(linker, "/EXPORT:InternalSetTcpEntry=" DLLPATH ".InternalSetTcpEntry")
#pragma comment(linker, "/EXPORT:InternalSetTeredoPort=" DLLPATH ".InternalSetTeredoPort")
#pragma comment(linker, "/EXPORT:InternalSetUdpDynamicPortRange=" DLLPATH ".InternalSetUdpDynamicPortRange")
#pragma comment(linker, "/EXPORT:InternalSetUnicastIpAddressEntry=" DLLPATH ".InternalSetUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:IpReleaseAddress=" DLLPATH ".IpReleaseAddress")
#pragma comment(linker, "/EXPORT:IpRenewAddress=" DLLPATH ".IpRenewAddress")
#pragma comment(linker, "/EXPORT:LookupPersistentTcpPortReservation=" DLLPATH ".LookupPersistentTcpPortReservation")
#pragma comment(linker, "/EXPORT:LookupPersistentUdpPortReservation=" DLLPATH ".LookupPersistentUdpPortReservation")
#pragma comment(linker, "/EXPORT:NTPTimeToNTFileTime=" DLLPATH ".NTPTimeToNTFileTime")
#pragma comment(linker, "/EXPORT:NTTimeToNTPTime=" DLLPATH ".NTTimeToNTPTime")
#pragma comment(linker, "/EXPORT:NhGetGuidFromInterfaceName=" DLLPATH ".NhGetGuidFromInterfaceName")
#pragma comment(linker, "/EXPORT:NhGetInterfaceDescriptionFromGuid=" DLLPATH ".NhGetInterfaceDescriptionFromGuid")
#pragma comment(linker, "/EXPORT:NhGetInterfaceNameFromDeviceGuid=" DLLPATH ".NhGetInterfaceNameFromDeviceGuid")
#pragma comment(linker, "/EXPORT:NhGetInterfaceNameFromGuid=" DLLPATH ".NhGetInterfaceNameFromGuid")
#pragma comment(linker, "/EXPORT:NhpAllocateAndGetInterfaceInfoFromStack=" DLLPATH ".NhpAllocateAndGetInterfaceInfoFromStack")
#pragma comment(linker, "/EXPORT:NotifyAddrChange=" DLLPATH ".NotifyAddrChange")
#pragma comment(linker, "/EXPORT:NotifyCompartmentChange=" DLLPATH ".NotifyCompartmentChange")
#pragma comment(linker, "/EXPORT:NotifyIfTimestampConfigChange=" DLLPATH ".NotifyIfTimestampConfigChange")
#pragma comment(linker, "/EXPORT:NotifyIpInterfaceChange=" DLLPATH ".NotifyIpInterfaceChange")
#pragma comment(linker, "/EXPORT:NotifyNetworkConnectivityHintChange=" DLLPATH ".NotifyNetworkConnectivityHintChange")
#pragma comment(linker, "/EXPORT:NotifyRouteChange=" DLLPATH ".NotifyRouteChange")
#pragma comment(linker, "/EXPORT:NotifyRouteChange2=" DLLPATH ".NotifyRouteChange2")
#pragma comment(linker, "/EXPORT:NotifyStableUnicastIpAddressTable=" DLLPATH ".NotifyStableUnicastIpAddressTable")
#pragma comment(linker, "/EXPORT:NotifyTeredoPortChange=" DLLPATH ".NotifyTeredoPortChange")
#pragma comment(linker, "/EXPORT:NotifyUnicastIpAddressChange=" DLLPATH ".NotifyUnicastIpAddressChange")
#pragma comment(linker, "/EXPORT:OpenCompartment=" DLLPATH ".OpenCompartment")
#pragma comment(linker, "/EXPORT:ParseNetworkString=" DLLPATH ".ParseNetworkString")
#pragma comment(linker, "/EXPORT:PfAddFiltersToInterface=" DLLPATH ".PfAddFiltersToInterface")
#pragma comment(linker, "/EXPORT:PfAddGlobalFilterToInterface=" DLLPATH ".PfAddGlobalFilterToInterface")
#pragma comment(linker, "/EXPORT:PfBindInterfaceToIPAddress=" DLLPATH ".PfBindInterfaceToIPAddress")
#pragma comment(linker, "/EXPORT:PfBindInterfaceToIndex=" DLLPATH ".PfBindInterfaceToIndex")
#pragma comment(linker, "/EXPORT:PfCreateInterface=" DLLPATH ".PfCreateInterface")
#pragma comment(linker, "/EXPORT:PfDeleteInterface=" DLLPATH ".PfDeleteInterface")
#pragma comment(linker, "/EXPORT:PfDeleteLog=" DLLPATH ".PfDeleteLog")
#pragma comment(linker, "/EXPORT:PfGetInterfaceStatistics=" DLLPATH ".PfGetInterfaceStatistics")
#pragma comment(linker, "/EXPORT:PfMakeLog=" DLLPATH ".PfMakeLog")
#pragma comment(linker, "/EXPORT:PfRebindFilters=" DLLPATH ".PfRebindFilters")
#pragma comment(linker, "/EXPORT:PfRemoveFilterHandles=" DLLPATH ".PfRemoveFilterHandles")
#pragma comment(linker, "/EXPORT:PfRemoveFiltersFromInterface=" DLLPATH ".PfRemoveFiltersFromInterface")
#pragma comment(linker, "/EXPORT:PfRemoveGlobalFilterFromInterface=" DLLPATH ".PfRemoveGlobalFilterFromInterface")
#pragma comment(linker, "/EXPORT:PfSetLogBuffer=" DLLPATH ".PfSetLogBuffer")
#pragma comment(linker, "/EXPORT:PfTestPacket=" DLLPATH ".PfTestPacket")
#pragma comment(linker, "/EXPORT:PfUnBindInterface=" DLLPATH ".PfUnBindInterface")
#pragma comment(linker, "/EXPORT:RegisterInterfaceTimestampConfigChange=" DLLPATH ".RegisterInterfaceTimestampConfigChange")
#pragma comment(linker, "/EXPORT:ResolveIpNetEntry2=" DLLPATH ".ResolveIpNetEntry2")
#pragma comment(linker, "/EXPORT:ResolveNeighbor=" DLLPATH ".ResolveNeighbor")
#pragma comment(linker, "/EXPORT:RestoreMediaSense=" DLLPATH ".RestoreMediaSense")
#pragma comment(linker, "/EXPORT:SendARP=" DLLPATH ".SendARP")
#pragma comment(linker, "/EXPORT:SetAdapterIpAddress=" DLLPATH ".SetAdapterIpAddress")
#pragma comment(linker, "/EXPORT:SetCurrentThreadCompartmentId=" DLLPATH ".SetCurrentThreadCompartmentId")
#pragma comment(linker, "/EXPORT:SetCurrentThreadCompartmentScope=" DLLPATH ".SetCurrentThreadCompartmentScope")
#pragma comment(linker, "/EXPORT:SetDnsSettings=" DLLPATH ".SetDnsSettings")
#pragma comment(linker, "/EXPORT:SetIfEntry=" DLLPATH ".SetIfEntry")
#pragma comment(linker, "/EXPORT:SetInterfaceDnsSettings=" DLLPATH ".SetInterfaceDnsSettings")
#pragma comment(linker, "/EXPORT:SetIpForwardEntry=" DLLPATH ".SetIpForwardEntry")
#pragma comment(linker, "/EXPORT:SetIpForwardEntry2=" DLLPATH ".SetIpForwardEntry2")
#pragma comment(linker, "/EXPORT:SetIpInterfaceEntry=" DLLPATH ".SetIpInterfaceEntry")
#pragma comment(linker, "/EXPORT:SetIpNetEntry=" DLLPATH ".SetIpNetEntry")
#pragma comment(linker, "/EXPORT:SetIpNetEntry2=" DLLPATH ".SetIpNetEntry2")
#pragma comment(linker, "/EXPORT:SetIpStatistics=" DLLPATH ".SetIpStatistics")
#pragma comment(linker, "/EXPORT:SetIpStatisticsEx=" DLLPATH ".SetIpStatisticsEx")
#pragma comment(linker, "/EXPORT:SetIpTTL=" DLLPATH ".SetIpTTL")
#pragma comment(linker, "/EXPORT:SetJobCompartmentId=" DLLPATH ".SetJobCompartmentId")
#pragma comment(linker, "/EXPORT:SetNetworkInformation=" DLLPATH ".SetNetworkInformation")
#pragma comment(linker, "/EXPORT:SetPerTcp6ConnectionEStats=" DLLPATH ".SetPerTcp6ConnectionEStats")
#pragma comment(linker, "/EXPORT:SetPerTcp6ConnectionStats=" DLLPATH ".SetPerTcp6ConnectionStats")
#pragma comment(linker, "/EXPORT:SetPerTcpConnectionEStats=" DLLPATH ".SetPerTcpConnectionEStats")
#pragma comment(linker, "/EXPORT:SetPerTcpConnectionStats=" DLLPATH ".SetPerTcpConnectionStats")
#pragma comment(linker, "/EXPORT:SetSessionCompartmentId=" DLLPATH ".SetSessionCompartmentId")
#pragma comment(linker, "/EXPORT:SetTcpEntry=" DLLPATH ".SetTcpEntry")
#pragma comment(linker, "/EXPORT:SetUnicastIpAddressEntry=" DLLPATH ".SetUnicastIpAddressEntry")
#pragma comment(linker, "/EXPORT:UnenableRouter=" DLLPATH ".UnenableRouter")
#pragma comment(linker, "/EXPORT:UnregisterInterfaceTimestampConfigChange=" DLLPATH ".UnregisterInterfaceTimestampConfigChange")
#pragma comment(linker, "/EXPORT:do_echo_rep=" DLLPATH ".do_echo_rep")
#pragma comment(linker, "/EXPORT:do_echo_req=" DLLPATH ".do_echo_req")
#pragma comment(linker, "/EXPORT:if_indextoname=" DLLPATH ".if_indextoname")
#pragma comment(linker, "/EXPORT:if_nametoindex=" DLLPATH ".if_nametoindex")
#pragma comment(linker, "/EXPORT:register_icmp=" DLLPATH ".register_icmp")