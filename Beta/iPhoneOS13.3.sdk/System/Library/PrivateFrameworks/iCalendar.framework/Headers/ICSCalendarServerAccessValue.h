/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>

@interface ICSCalendarServerAccessValue : ICSPredefinedValue

+ (id)calendarServerAccessFromICSString:(id)arg1;
+ (id)calendarServerAccessFromCode:(int)arg1;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
