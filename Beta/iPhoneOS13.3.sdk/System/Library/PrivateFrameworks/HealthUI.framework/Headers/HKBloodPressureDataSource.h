/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKBloodPressureDataSource : HKHealthQueryChartCacheDataSource

{
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_callCompletionWithSystolicResults:(id)arg1 diastolicResults:(id)arg2 statisticsOptions:(unsigned long long)arg3 blockStart:(id)arg4 blockEnd:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
