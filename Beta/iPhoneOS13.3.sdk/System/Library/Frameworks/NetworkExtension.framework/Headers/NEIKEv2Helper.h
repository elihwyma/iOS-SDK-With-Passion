/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@interface NEIKEv2Helper : NSObject

+ (_Bool)getDPDAttributesForMode:(long long)arg1 isWakeUp:(_Bool)arg2 isNAT:(_Bool)arg3 retry:(unsigned int *)arg4 timeout:(unsigned long long *)arg5 frequency:(unsigned int *)arg6;
+ (unsigned long long)getIdentifierType:(id)arg1;
+ (id)createIKESAConfigFromProtocol:(id)arg1 path:(id)arg2 ifIndex:(unsigned int)arg3 options:(id)arg4 serverAddress:(id)arg5;
+ (id)createIKEv2ChildSAConfigFromProtocol:(id)arg1;
+ (id)createIKEv2SessionConfigFromProtocol:(id)arg1 options:(id)arg2 onDemandEnabled:(_Bool)arg3;
+ (id)createDNSSettingsFromTunnelConfig:(id)arg1;
+ (id)createIPv4SettingsFromTunnelConfig:(id)arg1 localTS:(id)arg2 remoteTS:(id)arg3;
+ (id)createIPv6SettingsFromTunnelConfig:(id)arg1 localTS:(id)arg2 remoteTS:(id)arg3;
+ (id)createRouteArrayFromTunnelConfig:(id)arg1 localTS:(id)arg2 remoteTS:(id)arg3 gatewayAddress:(id)arg4 isIPv4:(_Bool)arg5;
+ (id)createIKESAProposalFromProtocol:(id)arg1 saParameters:(id)arg2 options:(id)arg3 nonceSize:(unsigned int *)arg4;
+ (id)createIKEv2ChildSAProposalFromProtocol:(id)arg1 saParameters:(id)arg2;

@end
