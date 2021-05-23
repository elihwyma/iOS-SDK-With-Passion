/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@interface HKInteractiveChartCategoryValueFormatter : HKInteractiveChartDataFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 context:(long long)arg2;
- (id)_formattedStringWithValue:(long long)arg1 useColorAttributes:(_Bool)arg2;
- (id)_formattedStringWithCount:(long long)arg1;

@end
