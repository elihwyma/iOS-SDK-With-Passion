/*
 Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

#import <NSDate.h>

@interface NSDate (RTExtensions)

+ (id)dateFormatter;
+ (id)startOfDay;
+ (id)endOfDay;
+ (id)stringFromTimestamp:(double)arg1;
+ (id)dateWithResolution:(unsigned long long)arg1;
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
+ (id)dateBisectingDate1:(id)arg1 date2:(id)arg2;

- (unsigned long long)hour;
- (unsigned long long)minute;
- (long long)weekday;
- (_Bool)isAfterDate:(id)arg1;
- (_Bool)isBeforeDate:(id)arg1;
- (_Bool)isOnOrBefore:(id)arg1;
- (id)stringFromDate;
- (id)dateOfTimestampForCalendar:(id)arg1;
- (id)startOfDay;
- (id)endOfDay;
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;
- (_Bool)betweenDate:(id)arg1 andDate:(id)arg2;
- (_Bool)isOnOrAfter:(id)arg1;
- (id)dateOfTimestampForCurrentCalendar;
- (id)weekdayStringFromDate;
- (id)dateReducedToResolution:(unsigned long long)arg1;
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;

@end
