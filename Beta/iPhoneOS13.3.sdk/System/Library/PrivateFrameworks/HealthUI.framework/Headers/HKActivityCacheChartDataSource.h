/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKUnitPreferenceController, NSCalendar;

@interface HKActivityCacheChartDataSource : HKHealthQueryChartCacheDataSource

{
    NSCalendar *_gregorianCalendar;
    NSCalendar *_gregorianNonUTCCalendar;
    HKUnitPreferenceController *_unitController;
}

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_dateComponentsForDate:(id)arg1;
- (id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (void)_handleActivityCaches:(id)arg1 workouts:(id)arg2 blockStart:(id)arg3 blockEnd:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_unitForDisplayType;
- (id)initWithUnitController:(id)arg1 healthStore:(id)arg2;

@end
