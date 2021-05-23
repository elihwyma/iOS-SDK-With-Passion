/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSArray;

@interface HKHorizontalTimePeriodDataSource : HKHealthQueryChartCacheDataSource

{
    HKSampleType *_sampleType;
    CDUnknownBlockType _userInfoCreationBlock;
    NSArray *_valueOrder;
}

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;
@property (retain, nonatomic) NSArray *valueOrder;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_organizeSamplesByValueAndDateInterval:(id)arg1;

@end
