/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <SymptomNetworkUsage/NWUsageProtocolSnapshot.h>

@class NSData, NSDate, NSString, NSUUID;

@interface NWUsageTCPSnapshot : NWUsageProtocolSnapshot

{
    NSString *_congestionAlgorithm;
    NSDate *_startTimestamp;
    NSDate *_snapshotTimestamp;
    NSString *_processName;
    NSUUID *_uuid;
    NSUUID *_euuid;
    NSUUID *_vuuid;
    NSData *_localAddress;
    NSData *_remoteAddress;
    const struct nstat_tcp_descriptor *_descriptor;
}

@property (readonly) double rttMinimum;
@property (readonly) double rttAverage;
@property (readonly) double rttVariation;
@property (readonly) unsigned int rxDuplicateBytes;
@property (readonly) unsigned int rxOutOfOrderBytes;
@property (readonly) unsigned int txRetransmittedBytes;
@property (readonly) unsigned int deltaRxDuplicateBytes;
@property (readonly) unsigned int deltaRxOutOfOrderBytes;
@property (readonly) unsigned int deltaTxRetransmittedBytes;
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
- (unsigned int)connstatusProbeActivated;
- (unsigned int)connstatusConnProbeFailed;
- (unsigned int)connstatusReadProbeFailed;
- (unsigned int)connstatusWriteProbeFailed;
- (_Bool)interfaceUnknown;
- (_Bool)interfaceLoopback;
- (_Bool)interfaceCellular;
- (_Bool)interfaceCellularViaFallback;
- (_Bool)interfaceWiFi;
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
- (id)flowSnapshotTimestamp;

@end
