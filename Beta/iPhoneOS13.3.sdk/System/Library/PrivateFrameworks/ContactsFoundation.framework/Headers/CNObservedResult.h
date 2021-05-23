/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNObservedResult : NSObject

{
    unsigned long long _time;
    id _value;
    unsigned long long _tolerance;
    unsigned long long _logTime;
}

@property (readonly) unsigned long long logTime;
@property (readonly) id logValue;
@property (readonly) _Bool isResultEvent;
@property (readonly) unsigned long long time;
@property (readonly) unsigned long long tolerance;
@property (readonly) id value;

+ (id)resultWithTime:(unsigned long long)arg1 value:(id)arg2;
+ (id)completionResultWithTime:(unsigned long long)arg1;
+ (id)failureWithError:(id)arg1 time:(unsigned long long)arg2;
+ (id)resultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 value:(id)arg3;
+ (id)completionResultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (id)failureWithError:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3;
+ (struct _NSRange)rangeWithExactTime:(unsigned long long)arg1;
+ (struct _NSRange)rangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (_Bool)rangeWouldUnderflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (struct _NSRange)underflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (_Bool)rangeWouldOverflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (struct _NSRange)overflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (id)resultWithTimeInterval:(double)arg1 tolerance:(double)arg2 value:(id)arg3;
+ (id)completionResultWithTimeInterval:(double)arg1 tolerance:(double)arg2;
+ (id)failureWithError:(id)arg1 timeInterval:(double)arg2 tolerance:(double)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct _NSRange)timeRange;
- (id)initWithValue:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3;
- (id)formattedTimeString;

@end
