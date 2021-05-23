/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDatePickerMode_Date.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_MonthDay : _UIDatePickerMode_Date

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;

@end
