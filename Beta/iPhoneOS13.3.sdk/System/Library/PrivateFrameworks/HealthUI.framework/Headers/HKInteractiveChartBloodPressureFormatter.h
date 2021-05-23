/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@interface HKInteractiveChartBloodPressureFormatter : HKInteractiveChartDataFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)_stringFromRange:(id)arg1 numberFormatter:(id)arg2 displayType:(id)arg3 unitController:(id)arg4;
- (id)_formattedStringWithRange:(id)arg1 displayUnit:(_Bool)arg2;

@end
