/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDatePickerMode.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode

{
    double _componentWidth;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (id)font;
- (double)rowHeight;
- (_Bool)isTimeIntervalMode;
- (void)resetComponentWidths;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (id)localizedFormatString;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (struct _NSRange)rangeForCalendarUnit:(unsigned long long)arg1;
- (long long)hourForRow:(long long)arg1;
- (long long)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned long long)arg3;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (_Bool)areValidDateComponents:(id)arg1 comparingUnits:(long long)arg2;

@end
