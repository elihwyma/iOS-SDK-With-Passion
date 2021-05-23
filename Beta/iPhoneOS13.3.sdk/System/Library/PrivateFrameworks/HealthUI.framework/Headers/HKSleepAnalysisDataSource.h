/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKSleepAnalysisDataSource : HKHealthQueryChartCacheDataSource

{
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;
- (CDUnknownBlockType)_mappingFunctionForDurationChartWithContext:(id)arg1;
- (CDUnknownBlockType)_mappingFunctionForConsistencyChartWithContext:(id)arg1;
- (CDUnknownBlockType)_mappingFunctionForEfficiencyChartWithContext:(id)arg1;

@end
