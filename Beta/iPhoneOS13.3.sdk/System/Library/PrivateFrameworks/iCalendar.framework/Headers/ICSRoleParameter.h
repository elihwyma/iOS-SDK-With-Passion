/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>

@interface ICSRoleParameter : ICSPredefinedValue

+ (id)roleParameterFromCode:(int)arg1;
+ (id)roleParameterFromICSString:(id)arg1;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
