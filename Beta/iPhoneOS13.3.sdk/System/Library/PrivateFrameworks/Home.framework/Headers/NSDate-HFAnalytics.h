/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSDate.h>

@class NSNumber, NSString;

@interface NSDate (HFAnalytics)

@property (nonatomic, readonly) NSNumber *hf_analyticsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_sharedCalendar;
+ (id)hf_dateByAddingComponents:(id)arg1 toDate:(id)arg2 times:(long long)arg3;
+ (id)hf_dateByAddingYears:(long long)arg1 months:(long long)arg2 weeks:(long long)arg3 days:(long long)arg4 hours:(long long)arg5 minutes:(long long)arg6 seconds:(long long)arg7 nanoseconds:(long long)arg8 toDate:(id)arg9;
+ (id)hf_sharedTimeZone;
+ (id)hf_dateBySubtractingComponents:(id)arg1 fromDate:(id)arg2 times:(long long)arg3;
+ (id)hf_dateByAddingYears:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMonths:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingWeeks:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingDays:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingHours:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingMinutes:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingSeconds:(long long)arg1 toDate:(id)arg2;
+ (id)hf_dateByAddingNanoseconds:(long long)arg1 toDate:(id)arg2;
+ (long long)hf_daysBetweenDates:(id)arg1 endDate:(id)arg2;

- (id)hf_startOfNextDay;
- (_Bool)hf_isWithinInterval:(double)arg1 ofDate:(id)arg2;
- (id)hf_startOfDay;
- (id)hf_startOfHour;
- (id)hf_startOfMinute;
- (id)hf_startOfSecond;
- (id)hf_startOfWeek;
- (id)hf_endOfWeek;
- (_Bool)hf_isWithinOneHourOfDate:(id)arg1;
- (_Bool)hf_isWithinOneMinuteOfDate:(id)arg1;
- (_Bool)hf_isWithinOneSecondOfDate:(id)arg1;
- (_Bool)hf_isFirstHourOfDay;
- (_Bool)hf_isMidnight;
- (_Bool)hf_isBetweenStartDate:(id)arg1 endDate:(id)arg2;

@end
