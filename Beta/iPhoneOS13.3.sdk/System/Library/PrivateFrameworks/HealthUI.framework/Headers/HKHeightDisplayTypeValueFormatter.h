/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKQuantityDisplayTypeValueFormatter.h>

@interface HKHeightDisplayTypeValueFormatter : HKQuantityDisplayTypeValueFormatter

- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(_Bool)arg6;
- (_Bool)_unitsAreFeetWithDisplayType:(id)arg1 unitController:(id)arg2;

@end
