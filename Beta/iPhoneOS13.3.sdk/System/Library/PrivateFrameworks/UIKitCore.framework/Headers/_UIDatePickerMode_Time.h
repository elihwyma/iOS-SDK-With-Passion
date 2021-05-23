/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDatePickerMode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Time : _UIDatePickerMode

{
    double _timeHourWidth;
    double _timeMinuteWidth;
    double _timeAMPMWidth;
    NSString *_hourFormat;
    NSString *_minuteFormat;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (id)font;
- (double)rowHeight;
- (void)noteCalendarChanged;
- (void)_shouldReset:(id)arg1;
- (void)resetComponentWidths;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (id)localizedFormatString;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (long long)displayedCalendarUnits;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;

@end
