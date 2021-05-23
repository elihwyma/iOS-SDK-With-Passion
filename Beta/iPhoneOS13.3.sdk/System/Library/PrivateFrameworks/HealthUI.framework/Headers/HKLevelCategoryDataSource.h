/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType, NSArray;

@interface HKLevelCategoryDataSource : HKHealthQueryChartCacheDataSource

{
    HKSampleType *_sampleType;
    CDUnknownBlockType _userInfoCreationBlock;
    CDUnknownBlockType _pointStyleBlock;
    NSArray *_valueOrder;
}

@property (retain, nonatomic) HKSampleType *sampleType;
@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;
@property (copy, nonatomic) CDUnknownBlockType pointStyleBlock;
@property (retain, nonatomic) NSArray *valueOrder;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
