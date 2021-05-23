/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <Foundation/NSNumber.h>

@interface NSNumber (ICSWriter)

+ (id)boolFromICSString:(id)arg1;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSBoolAppendingToString:(id)arg1;
- (void)_ICSUTCOffsetAppendingToString:(id)arg1;
- (void)_ICSFBTypeAppendingToString:(id)arg1;

@end
