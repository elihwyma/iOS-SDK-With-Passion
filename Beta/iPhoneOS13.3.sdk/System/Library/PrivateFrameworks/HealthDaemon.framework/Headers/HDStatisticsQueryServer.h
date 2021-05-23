/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HKQuantityType, NSDateInterval;

@interface HDStatisticsQueryServer : HDQueryServer

{
    NSDateInterval *_dateInterval;
    HKQuantityType *_quantityType;
    unsigned long long _statisticsOptions;
    unsigned long long _mergeStrategy;
}

@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (nonatomic, readonly) unsigned long long mergeStrategy;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (_Bool)supportsAnchorBasedAuthorization;

- (id)quantityType;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (id)_queue_fetchStatisticsWithError:(id *)arg1;

@end
