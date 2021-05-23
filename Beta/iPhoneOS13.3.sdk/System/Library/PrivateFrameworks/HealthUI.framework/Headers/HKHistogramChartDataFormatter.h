/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class HKUnit;

@interface HKHistogramChartDataFormatter : HKInteractiveChartDataFormatter

{
    HKUnit *_unit;
}

@property (nonatomic, readonly) HKUnit *unit;

- (id)initWithUnit:(id)arg1;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(_Bool)arg3;

@end
