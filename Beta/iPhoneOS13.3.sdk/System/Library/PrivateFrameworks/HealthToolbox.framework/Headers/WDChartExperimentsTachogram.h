/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKValueRange;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsTachogram : HKInteractiveChartViewController

{
    HKValueRange *_computedAxisRange;
    HKValueRange *_requestedVisibleRange;
}

@property (nonatomic, readonly) HKValueRange *computedAxisRange;
@property (nonatomic, readonly) HKValueRange *requestedVisibleRange;

- (void)viewDidLoad;
- (struct CGSize)extentOfData:(id)arg1;
- (id)tachogramSeriesWithData:(id)arg1 unit:(id)arg2 maximumY:(double)arg3 axis:(id)arg4 irregularBeatStyle:(_Bool)arg5;
- (id)initWithIrregularBeatData:(id)arg1 normalData:(id)arg2 visibleRange:(id)arg3 profile:(id)arg4;

@end
