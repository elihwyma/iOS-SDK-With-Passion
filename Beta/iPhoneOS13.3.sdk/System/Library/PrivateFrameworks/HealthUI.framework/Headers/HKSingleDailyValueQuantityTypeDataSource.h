/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKQuantityTypeDataSource.h>

@interface HKSingleDailyValueQuantityTypeDataSource : HKQuantityTypeDataSource

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_quantityValueFromStatistics:(id)arg1 statisticsInterval:(id)arg2 date:(id)arg3;

@end
