/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthMenstrualCycles/HKMCAnalysis.h>

@class HDMCNotification;

@interface HKMCAnalysis (NotificationTiming)

@property (copy, nonatomic, readonly) HDMCNotification *hdmc_beforePeriodStartNotification;
@property (copy, nonatomic, readonly) HDMCNotification *hdmc_afterPeriodStartNotification;
@property (copy, nonatomic, readonly) HDMCNotification *hdmc_afterPeriodEndNotification;
@property (copy, nonatomic, readonly) HDMCNotification *hdmc_beforeFertileWindowStartNotification;

- (_Bool)isEarliestNotificationScheduledOnOrAfterDate:(id)arg1;
- (id)_hdmc_firstPeriodStartProjection;

@end
