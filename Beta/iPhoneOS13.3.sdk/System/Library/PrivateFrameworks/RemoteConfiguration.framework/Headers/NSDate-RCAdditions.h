/*
 Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

#import <NSDate.h>

@interface NSDate (RCAdditions)

@property (nonatomic, readonly) _Bool rc_isWeekend;
@property (readonly) double rc_timeIntervalUntilNow;

+ (id)rc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)rc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)rc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)rc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)rc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)rc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;

- (_Bool)isToday;
- (id)rc_dateOfEarliestGregorianCalendarDay;
- (_Bool)rc_isEarlierThan:(id)arg1;
- (_Bool)rc_isEarlierThanOrEqualTo:(id)arg1;
- (_Bool)rc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)rc_isLaterThan:(id)arg1;
- (_Bool)rc_isLaterThanOrEqualTo:(id)arg1;
- (_Bool)rc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)rc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (id)rc_dateBySubtractingTimeInterval:(double)arg1;
- (unsigned long long)rc_millisecondTimeIntervalSince1970;
- (unsigned long long)rc_millisecondTimeIntervalSinceDate:(id)arg1;
- (long long)rc_GregorianCalendarDaysSinceDate:(id)arg1;
- (_Bool)rc_isSameDayAs:(id)arg1;
- (id)rc_stringWithISO8601Format;
- (id)rc_stringWithYearAndMonthFormat;

@end
