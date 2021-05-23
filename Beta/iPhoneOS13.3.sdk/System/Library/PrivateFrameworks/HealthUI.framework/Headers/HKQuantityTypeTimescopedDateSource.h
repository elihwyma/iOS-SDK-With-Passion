/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKQuantityTypeTimescopedDateSource : HKQuantityTypeDataSource

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_quantityValueFromStatistics:(id)arg1 statisticsInterval:(id)arg2 date:(id)arg3;
- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;
- (id)_componentsToEnumerateFromInterval:(id)arg1;
- (_Bool)_interval:(id)arg1 isEqualToIntervalFromCalendarUnit:(unsigned long long)arg2;
- (id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2;

@end
