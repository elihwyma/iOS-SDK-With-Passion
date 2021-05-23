/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSDate, NSTimeZone;

@interface SGSimpleTimeRange : NSObject

{
    struct SGUnixTimestamp_ _start;
    struct SGUnixTimestamp_ _end;
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
    _Bool _floating;
    long long _startUTCOffsetSeconds;
    long long _endUTCOffsetSeconds;
}

@property (nonatomic, readonly) struct SGUnixTimestamp_ start;
@property (nonatomic, readonly) struct SGUnixTimestamp_ end;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long startUTCOffsetSeconds;
@property (nonatomic, readonly) long long endUTCOffsetSeconds;
@property (nonatomic, readonly, getter=isFloating) _Bool floating;
@property (nonatomic, readonly) NSTimeZone *startTimeZone;
@property (nonatomic, readonly) NSTimeZone *endTimeZone;

+ (_Bool)supportsSecureCoding;
+ (struct SGUnixTimestamp_)fromFloatingTime:(struct SGUnixTimestamp_)arg1;
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2 timeZone:(id)arg3;
+ (struct SGUnixTimestamp_)toFloatingTime:(struct SGUnixTimestamp_)arg1;
+ (struct SGUnixTimestamp_)toFloatingTime:(struct SGUnixTimestamp_)arg1 withDSTAmbiguityPreferences:(id)arg2;
+ (id)dateFromGregorianComponents:(id)arg1;
+ (_Bool)isAllDayComponents:(id)arg1;
+ (_Bool)hasYearMonthDayComponents:(id)arg1;
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 startTimeZone:(id)arg2 end:(struct SGUnixTimestamp_)arg3 endTimeZone:(id)arg4;
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;
+ (id)rangeWithStart:(struct SGUnixTimestamp_)arg1 duration:(double)arg2 timeZone:(id)arg3;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_)arg1 duration:(double)arg2;
+ (id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2;
+ (id)floatingRangeWithUTCStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;
+ (id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2;
+ (id)floatingRangeWithLocalStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)startDateComponents;
- (id)endDateComponents;
- (id)initUTCFloatingWithStart:(struct SGUnixTimestamp_)arg1 end:(struct SGUnixTimestamp_)arg2;
- (id)initWithStart:(struct SGUnixTimestamp_)arg1 startUTCOffsetSeconds:(long long)arg2 end:(struct SGUnixTimestamp_)arg3 endUTCOffsetSeconds:(long long)arg4;
- (id)absoluteRange;
- (id)stableStringRepresentation;
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2;
- (_Bool)isValidAllDayRange;
- (_Bool)startedMoreThan24HoursAgo;
- (void)applyToEKEvent:(id)arg1 isAllDay:(_Bool)arg2 isFloating:(_Bool)arg3;
- (_Bool)isEqualToSimpleTimeRange:(id)arg1;

@end
