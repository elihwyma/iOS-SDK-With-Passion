/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <Foundation/NSString.h>

@interface NSString (ICSWriter)

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)_ICSStringForProperyValue;
- (id)_ICSStringForParameterValue;
- (id)_ICSStringForParameterQuotedValue;

@end
