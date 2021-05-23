/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class HKTimePeriodDisplayTypeValueFormatter;

@interface HKInteractiveChartTimePeriodFormatter : HKInteractiveChartDataFormatter

{
    HKTimePeriodDisplayTypeValueFormatter *_timePeriodFormatter;
}

- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)_formattedStringWithData:(id)arg1 roundToHours:(_Bool)arg2 displayUnit:(_Bool)arg3;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2 customDataType:(long long)arg3;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;

@end
