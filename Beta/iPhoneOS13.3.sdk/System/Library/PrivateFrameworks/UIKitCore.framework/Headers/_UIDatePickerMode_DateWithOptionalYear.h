/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDatePickerMode_Date.h>

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date

+ (long long)datePickerMode;

- (long long)numberOfRowsForCalendarUnit:(unsigned long long)arg1;
- (long long)yearForRow:(long long)arg1;
- (long long)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(long long)arg3 currentRow:(long long)arg4;
- (id)titleForRow:(long long)arg1 inComponent:(long long)arg2;
- (_Bool)_shouldEnableValueForRow:(long long)arg1 inComponent:(long long)arg2 calendarUnit:(unsigned long long)arg3;
- (id)selectedDateComponents;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(long long)arg2;

@end
