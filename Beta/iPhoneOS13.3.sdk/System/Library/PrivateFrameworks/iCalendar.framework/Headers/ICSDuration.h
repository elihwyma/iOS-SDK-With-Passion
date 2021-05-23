/*
 Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <Foundation/NSObject.h>

@interface ICSDuration : NSObject

{
    double _duration;
}

+ (_Bool)supportsSecureCoding;
+ (id)generateDurationFromICSString:(id)arg1;
+ (id)durationFromICSString:(id)arg1;
+ (id)durationFromRFC2445UTF8String:(const char *)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)timeInterval;
- (long long)hours;
- (long long)minutes;
- (long long)seconds;
- (long long)days;
- (_Bool)isNegative;
- (id)initWithWeeks:(long long)arg1 days:(long long)arg2 hours:(long long)arg3 minutes:(long long)arg4 seconds:(long long)arg5;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (long long)weeks;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end
