/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSData, NSDate, NSString, NSUUID;

@interface NWUsageUDPSnapshot : NWUsageProtocolSnapshot

{
    NSString *_processName;
    NSDate *_startTimestamp;
    NSDate *_snapshotTimestamp;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUUID *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_udp_descriptor *_descriptor;
}

- (id)processName;
- (id)uuid;
- (id)provider;
- (id)localAddress;
- (id)remoteAddress;
- (int)processID;
- (unsigned int)trafficClass;
- (unsigned int)interfaceIndex;
- (int)epid;
- (id)euuid;
- (id)initWithUpdate:(const struct nstat_msg_src_update_convenient *)arg1 startTime:(double)arg2 flowFlags:(unsigned int)arg3 previously:(struct update_subset_for_deltas *)arg4;
- (id)descriptorDescription;
- (_Bool)flowUsesChannels;
- (unsigned int)receiveBufferSize;
- (unsigned int)receiveBufferUsed;
- (unsigned long long)uniqueProcessID;
- (unsigned long long)eupid;
- (_Bool)interfaceUnknown;
- (_Bool)interfaceLoopback;
- (_Bool)interfaceCellular;
- (_Bool)interfaceCellularViaFallback;
- (_Bool)interfaceWiFi;
- (_Bool)interfaceWired;
- (_Bool)interfaceAWDL;
- (_Bool)interfaceExpensive;
- (id)vuuid;
- (unsigned long long)networkActivityMapStartTime;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)flowStartContinuousTime;
- (double)flowDuration;
- (id)flowStartTimestamp;
- (id)flowSnapshotTimestamp;

@end
