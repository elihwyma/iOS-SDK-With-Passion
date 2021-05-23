/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType;

@interface HKHorizontalSingleLineDataSource : HKHealthQueryChartCacheDataSource

{
    HKSampleType *_sampleType;
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applyMarkStyleToPoint:(id)arg1 sample:(id)arg2;

@end
