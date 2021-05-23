/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthMenstrualCycles/HKMCSettingsManager.h>

@interface HKMCSettingsManager (NotificationTiming)

- (id)hdmc_dateComponentsForMenstruationNotificationOnDayIndex:(long long)arg1;
- (id)hdmc_dateComponentsForFertileWindowNotificationOnDayIndex:(long long)arg1;
- (id)_hdmc_dateComponentsForNotificationOnDayIndex:(long long)arg1 timeOfDay:(id)arg2;

@end
