/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKQuantityType, HKUnitPreferenceController;

@interface HKQuantityTypeDataSource : HKHealthQueryChartCacheDataSource

{
    CDUnknownBlockType _mappingFunction;
    unsigned long long _statisticsOptions;
    HKUnitPreferenceController *_unitController;
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) unsigned long long statisticsOptions;
@property (nonatomic, readonly) HKUnitPreferenceController *unitController;
@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (id)initWithUnitController:(id)arg1 options:(unsigned long long)arg2 displayType:(id)arg3 healthStore:(id)arg4;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;
- (CDUnknownBlockType)_createMappingFunction;
- (id)_dailyAverageQueriesWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_defaultQueriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_averageByInterval:(id)arg1 startDate:(id)arg2 statistics:(id)arg3;

@end
