/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>

@interface ICSCalendarUserParameter : ICSPredefinedValue

+ (id)calendarUserTypeParameterFromCode:(int)arg1;
+ (id)calendarUserTypeParameterFromICSString:(id)arg1;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
