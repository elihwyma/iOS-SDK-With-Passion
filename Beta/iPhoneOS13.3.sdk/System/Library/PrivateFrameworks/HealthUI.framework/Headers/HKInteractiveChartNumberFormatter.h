/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSString;

@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter

{
    NSString *_unitFormatString;
}

@property (copy, nonatomic) NSString *unitFormatString;

- (id)init;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)_formattedStringWithValue:(id)arg1 formatter:(id)arg2;

@end
