/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>

@class NSString;

@interface ICSStatusValue : ICSPredefinedValue

{
    NSString *_statusString;
}

@property (retain) NSString *statusString;

+ (id)statusValueFromICSString:(id)arg1;
+ (id)statusTypeFromCode:(int)arg1 statusString:(id)arg2;
+ (id)statusTypeFromCode:(int)arg1;

- (Class)classForCoder;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
