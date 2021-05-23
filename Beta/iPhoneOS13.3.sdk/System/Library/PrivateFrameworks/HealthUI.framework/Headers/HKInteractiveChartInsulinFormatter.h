/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartGenericStatFormatter.h>

@interface HKInteractiveChartInsulinFormatter : HKInteractiveChartGenericStatFormatter

- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 deliveryReason:(long long)arg3;
- (id)_formattedStringWithBasalValue:(double)arg1 bolusValue:(double)arg2;

@end
