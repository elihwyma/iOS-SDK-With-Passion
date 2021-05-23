/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSPredicate;

@interface HKTimePeriodSeriesDataSource : HKHealthQueryChartCacheDataSource

{
    HKSampleType *_sampleType;
    NSPredicate *_queryPredicate;
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (retain, nonatomic) HKSampleType *sampleType;
@property (retain, nonatomic) NSPredicate *queryPredicate;
@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (CDUnknownBlockType)_startOfDayTransform;
- (id)_calculateTotalDurationFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interval:(id)arg4 intervalOut:(id *)arg5 intervelCountsOut:(id *)arg6;

@end
