/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSCalendar.h>

@interface NSCalendar (CalClassAdditions)

+ (id)CalGregorianGMTCalendar;
+ (id)CalYearlessDateThreshold;
+ (id)CalGregorianCalendarForTimeZone:(id)arg1;
+ (id)sharedAutoupdatingCurrentCalendar;
+ (id)CalCalendarWithUnsanitizedCalendarIdentifier:(id)arg1;
+ (id)CalDateFromBirthdayComponents:(id)arg1;

- (long long)daysInWeek;
- (long long)secondsInMinute;
- (long long)minutesInHour;
- (long long)hoursInDay;
- (long long)monthsInYearForDate:(id)arg1;
- (long long)secondsInDay;
- (id)dateBySanityCheckingDateRoundedToDay:(id)arg1;
- (long long)calendarDaysFromDate:(id)arg1 toDate:(id)arg2;
- (long long)daysInMonthContainingDate:(id)arg1;
- (_Bool)dateIsFirstOfMonth:(id)arg1;
- (_Bool)dateIsFirstOfYear:(id)arg1;
- (id)CalDateFromComponents:(id)arg1 inTimeZone:(id)arg2;
- (id)CalDateBySubtractingComponents:(id)arg1 fromDate:(id)arg2;
- (id)CalOccurrencesForBirthday:(id)arg1 inDateRange:(id)arg2;
- (id)mapDatesFromDate:(id)arg1 stepSize:(unsigned long long)arg2 range:(unsigned long long)arg3 mapBlock:(CDUnknownBlockType)arg4;

@end
