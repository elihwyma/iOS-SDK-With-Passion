/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDisplayTypeValueFormatter.h>

@interface HKTimePeriodDisplayTypeValueFormatter : HKDisplayTypeValueFormatter

- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)attributedStringFromValue:(id)arg1 roundToHours:(_Bool)arg2 displayType:(id)arg3 unitController:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 formatForChart:(_Bool)arg7;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(_Bool)arg6;
- (id)attributedStringFromValue:(id)arg1 roundToHours:(_Bool)arg2 displayType:(id)arg3 unitController:(id)arg4 valueFont:(id)arg5 unitFont:(id)arg6 formatForChart:(_Bool)arg7 unitFormatString:(id)arg8;

@end
