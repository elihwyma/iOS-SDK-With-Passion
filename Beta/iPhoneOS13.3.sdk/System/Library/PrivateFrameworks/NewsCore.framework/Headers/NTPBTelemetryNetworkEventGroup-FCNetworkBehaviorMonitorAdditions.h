/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBTelemetryNetworkEventGroup.h>

@class FCNetworkEventStats, NSDate;

@interface NTPBTelemetryNetworkEventGroup (FCNetworkBehaviorMonitorAdditions)

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) FCNetworkEventStats *totalDurationStats;
@property (nonatomic, readonly) FCNetworkEventStats *dnsDurationStats;
@property (nonatomic, readonly) FCNetworkEventStats *connectDurationStats;
@property (nonatomic, readonly) FCNetworkEventStats *timeToFirstByteStats;
@property (nonatomic, readonly) unsigned long long cacheHitCount;
@property (nonatomic, readonly) unsigned long long cacheMissCount;

@end
