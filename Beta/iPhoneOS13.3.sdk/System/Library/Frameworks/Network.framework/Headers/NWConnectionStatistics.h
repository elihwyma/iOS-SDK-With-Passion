/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID, NWL2Report, PBCodable;

@interface NWConnectionStatistics : NSObject

{
    unsigned int _awdMetricID;
    NSString *_clientIdentifier;
    NSString *_sourceIdentifier;
    NSUUID *_externallyVisibleConnectionUUID;
    NSArray *_externallyVisibleActivityUUIDs;
    NWL2Report *_layer2Report;
    PBCodable *_awdReport;
    NSArray *_activities;
    struct netcore_stats_tcp_report _report;
}

@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) struct netcore_stats_tcp_report report;
@property (retain, nonatomic) PBCodable *awdReport;
@property (nonatomic) unsigned int awdMetricID;
@property (retain, nonatomic) NSArray *activities;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic, readonly) _Bool delegated;
@property (nonatomic, readonly) int interfaceType;
@property (nonatomic, readonly) unsigned int timeToDnsResolvedMsecs;
@property (nonatomic, readonly) unsigned int timeToDnsStartMsecs;
@property (nonatomic, readonly) unsigned int dnsResolvedTimeMsecs;
@property (nonatomic, readonly) _Bool dnsAnswersCached;
@property (nonatomic, readonly) unsigned int timeToConnectionStartMsecs;
@property (nonatomic, readonly) unsigned int timeToConnectionEstablishmentMsecs;
@property (nonatomic, readonly) unsigned int connectionEstablishmentTimeMsecs;
@property (nonatomic, readonly) unsigned int flowDurationMsecs;
@property (nonatomic, readonly) int connectedInterfaceType;
@property (nonatomic, readonly) _Bool connected;
@property (nonatomic, readonly) unsigned int trafficClass;
@property (nonatomic, readonly) _Bool fallbackEligible;
@property (nonatomic, readonly) _Bool cellularFallback;
@property (nonatomic, readonly) _Bool cellularRrcConnected;
@property (nonatomic, readonly) _Bool tls13Configured;
@property (nonatomic, readonly) _Bool tlsSucceeded;
@property (nonatomic, readonly) _Bool kernelReportedStalls;
@property (nonatomic, readonly) _Bool kernelReportingConnectionStalled;
@property (nonatomic, readonly) _Bool kernelReportingReadStalled;
@property (nonatomic, readonly) _Bool kernelReportingWriteStalled;
@property (nonatomic, readonly) unsigned long long bytesIn;
@property (nonatomic, readonly) unsigned long long bytesOut;
@property (nonatomic, readonly) unsigned long long bytesDuplicate;
@property (nonatomic, readonly) unsigned long long bytesOOO;
@property (nonatomic, readonly) unsigned long long bytesRetransmitted;
@property (nonatomic, readonly) unsigned long long packetsIn;
@property (nonatomic, readonly) unsigned long long packetsOut;
@property (nonatomic, readonly) unsigned long long packetsDuplicate;
@property (nonatomic, readonly) unsigned long long packetsOOO;
@property (nonatomic, readonly) unsigned long long packetsRetransmitted;
@property (nonatomic, readonly) unsigned int tcpRTTCurrentMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTSmoothedMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTBestMsecs;
@property (nonatomic, readonly) unsigned int tcpRTTVariance;
@property (nonatomic, readonly) unsigned int tcpSynRetransmissionCount;
@property (nonatomic, readonly) _Bool tcpFastOpen;
@property (nonatomic, readonly) unsigned int tcpBetterRouteEventCount;
@property (nonatomic, readonly) unsigned int tcpConnectionReuseCount;
@property (nonatomic, readonly) unsigned int tcpAppReportingDataStallCount;
@property (nonatomic, readonly) unsigned int tcpAppDataStallTimerMsecs;
@property (nonatomic, readonly) NSUUID *connectionUUID;
@property (retain, nonatomic) NSUUID *externallyVisibleConnectionUUID;
@property (retain, nonatomic) NSArray *externallyVisibleActivityUUIDs;
@property (retain, nonatomic) NWL2Report *layer2Report;

- (_Bool)tlsHandshakeTimedOut;
- (id)_createDataUsageSnapshotFromStruct:(const struct netcore_stats_data_usage_snapshot *)arg1;
- (id)_createFallbackReportFromStruct:(const struct netcore_stats_tcp_cell_fallback_report *)arg1;
- (id)_createStatisticsReportFromStruct:(const struct netcore_stats_tcp_statistics_report *)arg1;
- (id)initWithTCPReport:(struct netcore_stats_tcp_report *)arg1 length:(unsigned long long)arg2 clientIdentifier:(id)arg3 sourceIdentifier:(id)arg4;

@end
