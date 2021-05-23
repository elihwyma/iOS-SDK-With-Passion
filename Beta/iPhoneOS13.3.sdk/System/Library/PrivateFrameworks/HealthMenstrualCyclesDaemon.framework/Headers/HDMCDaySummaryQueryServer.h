/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HKMCDaySummaryQueryConfiguration;

@interface HDMCDaySummaryQueryServer : HDQueryServer

{
    HKMCDaySummaryQueryConfiguration *_configuration;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (id)objectTypes;
- (_Bool)_queue_surfaceDaySummariesWithError:(id *)arg1;

@end
