/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSTextCheckingResult.h>

@class NSDate, NSString, NSTimeZone;

@interface NSDateCheckingResult : NSTextCheckingResult

{
    struct _NSRange _range;
    NSDate *_date;
    NSTimeZone *_timeZone;
    double _duration;
    NSDate *_referenceDate;
    id _underlyingResult;
    _Bool _timeIsSignificant;
    _Bool _timeIsApproximate;
    _Bool _timeIsPast;
    NSString *_leadingText;
    NSString *_trailingText;
}

@property (readonly) NSTimeZone *timeZone;
@property (readonly) double duration;
@property (readonly) NSDate *referenceDate;
@property (readonly) void *underlyingResult;
@property (readonly) _Bool timeIsSignificant;
@property (readonly) _Bool timeIsApproximate;
@property (readonly) _Bool timeIsPast;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)date;
- (struct _NSRange)range;
- (unsigned long long)resultType;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (_Bool)_adjustRangesWithOffset:(long long)arg1;
- (id)leadingText;
- (id)trailingText;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(_Bool)arg7 timeIsApproximate:(_Bool)arg8 timeIsPast:(_Bool)arg9 leadingText:(id)arg10 trailingText:(id)arg11;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(_Bool)arg7 timeIsApproximate:(_Bool)arg8 timeIsPast:(_Bool)arg9;
- (id)initWithRange:(struct _NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void *)arg6 timeIsSignificant:(_Bool)arg7 timeIsApproximate:(_Bool)arg8;

@end
