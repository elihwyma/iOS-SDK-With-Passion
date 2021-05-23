/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKValueRange;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsScalarBarChart : HKInteractiveChartViewController

{
    HKValueRange *_requestedAxisRange;
    HKValueRange *_requestedVisibleRange;
}

@property (nonatomic, readonly) HKValueRange *requestedAxisRange;
@property (nonatomic, readonly) HKValueRange *requestedVisibleRange;

- (void)viewDidLoad;
- (id)_buildSeriesWithColor:(id)arg1 minimumYAxisRange:(id)arg2;
- (id)initWithTitle:(id)arg1 unitForYAxis:(id)arg2 data:(id)arg3 axisRange:(id)arg4 visibleRange:(id)arg5 minimumYAxisRange:(id)arg6 color:(id)arg7 profile:(id)arg8;

@end
