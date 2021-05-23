/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>

@interface ICSScheduleAgentParameter : ICSPredefinedValue

+ (id)scheduleAgentParameterFromCode:(int)arg1;
+ (id)scheduleAgentParameterFromICSString:(id)arg1;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
