/*
 Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
 */

#import <NetworkStatistics/NWSProtocolSnapshot.h>

@class NSData, NSString;

@interface NWSTCPSnapshot : NWSProtocolSnapshot

{
    NSString *_congestionAlgorithm;
    NSString *_processName;
    NSString *_uuid;
    NSString *_euuid;
    NSString *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    struct nstat_tcp_descriptor _descriptor;
    unsigned int _provider;
    unsigned long long _eventFlags;
}

@property (readonly) double rttMinimum;
@property (readonly) double rttAverage;
@property (readonly) double rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int txRetransmittedBytes;
@property (readonly) NSString *TCPState;
@property (readonly) unsigned int sendBufferSize;
@property (readonly) unsigned int sendBufferUsed;
@property (readonly) unsigned int txUnacked;
@property (readonly) unsigned int txWindow;
@property (readonly) unsigned int txCongestionWindow;
@property (readonly) unsigned int trafficManagementFlags;
@property (readonly) NSString *congestionAlgorithm;
@property (readonly) _Bool probeActivated;
@property (readonly) _Bool connProbeFailed;
@property (readonly) _Bool readProbeFailed;
@property (readonly) _Bool writeProbeFailed;
@property (readonly) unsigned int connectAttempts;
@property (readonly) unsigned int connectSuccesses;

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
- (unsigned int)connstatusProbeActivated;
- (unsigned int)connstatusConnProbeFailed;
- (unsigned int)connstatusReadProbeFailed;
- (unsigned int)connstatusWriteProbeFailed;
- (_Bool)interfaceUnknown;
- (_Bool)interfaceLoopback;
- (_Bool)interfaceCellular;
- (_Bool)interfaceCellularViaFallback;
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
- (id)initWithCounts:(const struct nstat_counts *)arg1 TCPDescriptor:(struct nstat_tcp_descriptor *)arg2 sourceIdent:(unsigned long long)arg3 events:(unsigned long long)arg4 seqno:(unsigned long long)arg5 provider:(unsigned int)arg6;

@end
