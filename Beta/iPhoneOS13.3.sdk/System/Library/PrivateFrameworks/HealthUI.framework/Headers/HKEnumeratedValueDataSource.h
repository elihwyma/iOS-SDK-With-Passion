/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSArray;

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource

{
    NSArray *_enumeratedValueOrder;
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (retain, nonatomic) NSArray *enumeratedValueOrder;
@property (copy, nonatomic) CDUnknownBlockType userInfoCreationBlock;

- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_enumeratedValueOrderMapping;
- (id)_enumeratedValuesToIndices:(id)arg1 mapping:(id)arg2;

@end
