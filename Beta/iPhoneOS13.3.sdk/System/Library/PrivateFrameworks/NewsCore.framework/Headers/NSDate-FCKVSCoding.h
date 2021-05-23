/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSDate.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface NSDate (FCKVSCoding) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool fc_isWeekend;
@property (readonly) double fc_timeIntervalUntilNow;

+ (id)_fr_sharedYearAndMonthDateFormatter;
+ (id)dateWithPBDate:(id)arg1;
+ (id)pbDate;
+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;
+ (id)fc_dateWithMillisecondTimeIntervalSince1970:(unsigned long long)arg1;
+ (id)fc_laterDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_dateFromStringWithISO8601Format:(id)arg1;
+ (id)fc_earlierDateAllowingNilWithDate:(id)arg1 andDate:(id)arg2;
+ (id)fc_dateFromString:(id)arg1 possibleFormats:(id)arg2;
+ (double)fc_timeIntervalOneHour;
+ (double)fc_timeIntervalOneDay;
+ (double)fc_timeIntervalOneWeek;
+ (id)fc_dateFromStringWithHTTPHeaderFormat:(id)arg1;
+ (id)fc_dateRoundedToNearestMinuteForDate:(id)arg1;
+ (id)fc_dateRoundedToNearestDayForDate:(id)arg1;

- (_Bool)isToday;
- (_Bool)fc_isLaterThan:(id)arg1;
- (id)pbDate;
- (void)writeToKeyValuePair:(id)arg1;
- (_Bool)fc_isEarlierThan:(id)arg1;
- (_Bool)fc_isLaterThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)fc_isWithinTimeInterval:(double)arg1 ofDate:(id)arg2;
- (unsigned long long)fc_millisecondTimeIntervalSince1970;
- (id)fc_adjustToRecentDate;
- (id)fc_dateOfEarliestGregorianCalendarDay;
- (_Bool)fc_isEarlierThanOrEqualTo:(id)arg1;
- (_Bool)fc_isEarlierThan:(id)arg1 withPrecision:(long long)arg2;
- (_Bool)fc_isLaterThanOrEqualTo:(id)arg1;
- (id)fc_dateBySubtractingTimeInterval:(double)arg1;
- (unsigned long long)fc_millisecondTimeIntervalSinceDate:(id)arg1;
- (long long)fc_GregorianCalendarDaysSinceDate:(id)arg1;
- (_Bool)fc_isSameDayAs:(id)arg1;
- (id)fc_dateByRoundingDownToNearestQuarterHour;
- (id)fc_stringWithISO8601Format;
- (id)fc_stringWithYearAndMonthFormat;

@end
