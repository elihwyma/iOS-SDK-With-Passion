/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>

@interface ICSAlternateTimeProposalStatusParameter : ICSPredefinedValue

+ (id)statusParameterFromCode:(int)arg1;
+ (id)statusParameterFromICSString:(id)arg1;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
