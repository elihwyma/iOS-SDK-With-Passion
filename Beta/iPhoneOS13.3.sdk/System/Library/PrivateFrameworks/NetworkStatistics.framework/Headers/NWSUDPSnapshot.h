/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSData, NSString;

@interface NWSUDPSnapshot : NWSProtocolSnapshot

{
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_udp_descriptor _descriptor;
    unsigned int _provider;
    unsigned long long _eventFlags;
}

- (id)description;
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
- (unsigned long long)eventFlags;
- (unsigned int)receiveBufferSize;
- (unsigned int)receiveBufferUsed;
- (unsigned long long)uniqueProcessID;
- (unsigned long long)eupid;
- (_Bool)interfaceUnknown;
- (_Bool)interfaceLoopback;
- (_Bool)interfaceCellular;
- (_Bool)interfaceWired;
- (_Bool)interfaceAWDL;
- (_Bool)interfaceExpensive;
- (_Bool)interfaceCompanionLink;
- (id)vuuid;
- (unsigned long long)networkActivityMapStartTime;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)flowStartContinuousTime;
- (double)flowDuration;
- (id)flowStartTimestamp;
- (id)traditionalDictionary;
- (_Bool)interfaceWifi;
- (_Bool)countsIncludeHeaderOverhead;
- (id)initWithCounts:(const struct nstat_counts *)arg1 UDPDescriptor:(struct nstat_udp_descriptor *)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned int)arg6;

@end
