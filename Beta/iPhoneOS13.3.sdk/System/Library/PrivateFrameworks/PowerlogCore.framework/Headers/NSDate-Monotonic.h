/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSDate.h>

@interface NSDate (Monotonic)

+ (id)monotonicDate;
+ (id)nearestMidnightBeforeDate:(id)arg1;
+ (id)monotonicDateWithTimeIntervalSinceNow:(double)arg1;
+ (id)nearestMidnightAfterDate:(id)arg1;
+ (id)filenameDateStringWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)defaultDateFormatter;
+ (_Bool)dateIsMidnightLocalTime:(id)arg1;

- (id)convertFromMonotonicToSystem;
- (id)convertFromSystemToMonotonic;
- (id)convertFromBasebandToMonotonic;
- (id)convertFromMonotonicToBaseband;
- (_Bool)isInMonotonicFuture;
- (_Bool)isInMonotonicFutureWithDistance:(double)arg1;
- (_Bool)isInMonotonicPastWithDistance:(double)arg1;
- (double)timeIntervalSinceMonitonicNow;

@end
