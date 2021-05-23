/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@protocol HKNumberFormatter;

@interface HKDisplayTypeValueFormatter : NSObject

{
    id <HKNumberFormatter> _numberFormatter;
}

- (id)initWithNumberFormatter:(id)arg1;
- (id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(_Bool)arg6;
- (id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(_Bool)arg6 unitFormatString:(id)arg7;

@end
