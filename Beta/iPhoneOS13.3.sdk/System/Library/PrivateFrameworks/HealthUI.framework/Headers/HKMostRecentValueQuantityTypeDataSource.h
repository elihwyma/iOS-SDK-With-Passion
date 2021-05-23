/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKMostRecentValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_interval:(id)arg1 isEqualToIntervalFromCalendarUnit:(unsigned long long)arg2;
- (id)initWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)_dataSourceValueFromMostRecentQuantity:(id)arg1 quantityDateInterval:(id)arg2 statisticsInterval:(id)arg3;
- (id)_middleDateFromInterval:(id)arg1 endDate:(id)arg2;
- (id)_dataSourceValueFromStatisticsCollection:(id)arg1 statisticsInterval:(id)arg2;

@end
