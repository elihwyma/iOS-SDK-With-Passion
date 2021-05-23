/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>

@interface ICSScheduleStatusParameter : ICSPredefinedValue

+ (id)scheduleStatusParameterFromCode:(int)arg1;
+ (id)scheduleStatusParameterFromICSString:(id)arg1;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
