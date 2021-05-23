/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreCellularFallbackReport : PBCodable

{
    CDStruct_95bda58d _networkEvents;
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _timeToNetworkEventsMsecs;
    unsigned long long _fallbackTimerMsecs;
    NSMutableArray *_dataUsageSnapshotsAtNetworkEvents;
    int _denyReason;
    NSMutableArray *_primaryInterfaceAttemptStatisticsReports;
    _Bool _fellback;
    struct {
        unsigned int fallbackTimerMsecs:1;
        unsigned int denyReason:1;
        unsigned int fellback:1;
    } _has;
}

@property (nonatomic) _Bool hasFellback;
@property (nonatomic) _Bool fellback;
@property (nonatomic) _Bool hasDenyReason;
@property (nonatomic) int denyReason;
@property (nonatomic) _Bool hasFallbackTimerMsecs;
@property (nonatomic) unsigned long long fallbackTimerMsecs;
@property (nonatomic, readonly) unsigned long long networkEventsCount;
@property (nonatomic, readonly) int *networkEvents;
@property (nonatomic, readonly) unsigned long long timeToNetworkEventsMsecsCount;
@property (nonatomic, readonly) unsigned long long *timeToNetworkEventsMsecs;
@property (retain, nonatomic) NSMutableArray *primaryInterfaceAttemptStatisticsReports;
@property (retain, nonatomic) NSMutableArray *dataUsageSnapshotsAtNetworkEvents;

+ (Class)primaryInterfaceAttemptStatisticsReportsType;
+ (Class)dataUsageSnapshotsAtNetworkEventsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)denyReasonAsString:(int)arg1;
- (int)StringAsDenyReason:(id)arg1;
- (void)clearNetworkEvents;
- (void)addNetworkEvents:(int)arg1;
- (int)networkEventsAtIndex:(unsigned long long)arg1;
- (void)setNetworkEvents:(int *)arg1 count:(unsigned long long)arg2;
- (id)networkEventsAsString:(int)arg1;
- (int)StringAsNetworkEvents:(id)arg1;
- (void)clearTimeToNetworkEventsMsecs;
- (void)addTimeToNetworkEventsMsecs:(unsigned long long)arg1;
- (unsigned long long)timeToNetworkEventsMsecsAtIndex:(unsigned long long)arg1;
- (void)setTimeToNetworkEventsMsecs:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)clearPrimaryInterfaceAttemptStatisticsReports;
- (void)addPrimaryInterfaceAttemptStatisticsReports:(id)arg1;
- (unsigned long long)primaryInterfaceAttemptStatisticsReportsCount;
- (id)primaryInterfaceAttemptStatisticsReportsAtIndex:(unsigned long long)arg1;
- (void)clearDataUsageSnapshotsAtNetworkEvents;
- (void)addDataUsageSnapshotsAtNetworkEvents:(id)arg1;
- (unsigned long long)dataUsageSnapshotsAtNetworkEventsCount;
- (id)dataUsageSnapshotsAtNetworkEventsAtIndex:(unsigned long long)arg1;

@end
