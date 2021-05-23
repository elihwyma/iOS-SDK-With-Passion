/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKInsulinDataSource : HKHealthQueryChartCacheDataSource

{
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_combineBasalStatistics:(id)arg1 withTotalStatistics:(id)arg2 filterInterval:(id)arg3;

@end
