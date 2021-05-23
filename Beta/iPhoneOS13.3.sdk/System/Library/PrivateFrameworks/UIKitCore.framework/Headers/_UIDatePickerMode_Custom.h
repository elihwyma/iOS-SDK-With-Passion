/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDatePickerMode.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerMode_Custom : _UIDatePickerMode

{
    NSString *_originalFormat;
    NSArray *_components;
    NSArray *_sortedComponents;
    long long _displayedUnits;
    long long _desiredUnits;
}

- (id)components;
- (unsigned long long)numberOfComponents;
- (void)noteCalendarChanged;
- (id)initWithFormatString:(id)arg1 datePickerView:(id)arg2;
- (void)resetComponentWidths;
- (long long)componentForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)calendarUnitForComponent:(long long)arg1;
- (id)dateFormatForCalendarUnit:(unsigned long long)arg1;
- (double)widthForCalendarUnit:(unsigned long long)arg1 font:(id)arg2 maxWidth:(double)arg3;
- (unsigned long long)extractableCalendarUnits;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)arg1;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)arg1;
- (long long)valueForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (long long)numberOfRowsInComponent:(long long)arg1;
- (id)dateForRow:(long long)arg1 inCalendarUnit:(unsigned long long)arg2;
- (long long)displayedCalendarUnits;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)arg1;
- (id)_componentForCalendarUnit:(unsigned long long)arg1;

@end
