/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKDailySleepSeriesDataSource : HKHealthQueryChartCacheDataSource

{
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_monthlyChartPointsFromQueryResults:(id)arg1 intervalComponents:(id)arg2 startDate:(id)arg3;
- (id)_dailyChartPointsFromQueryResults:(id)arg1;
- (id)_chartPointFromQueryResult:(id)arg1;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
