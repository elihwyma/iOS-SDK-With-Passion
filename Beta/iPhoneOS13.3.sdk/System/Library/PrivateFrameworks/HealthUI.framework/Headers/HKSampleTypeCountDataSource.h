/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKSampleTypeCountDataSource : HKHealthQueryChartCacheDataSource

{
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleCounts:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
