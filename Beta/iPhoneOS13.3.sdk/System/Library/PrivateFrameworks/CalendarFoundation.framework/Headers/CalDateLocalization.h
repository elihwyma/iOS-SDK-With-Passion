/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@interface CalDateLocalization : NSObject

+ (id)sharedDateFormatter;
+ (_Bool)hasAMPM;
+ (_Bool)uses24HourTime;
+ (void)initializeFormatters;
+ (void)rebuildFormatters;
+ (void)rebuildWeekendDays;
+ (void)generateLocalizedDateTimeFormats;
+ (_Bool)weekdayIsWeekend:(long long)arg1;
+ (id)weekendDays;
+ (id)ICUFormats;
+ (_Bool)shouldUseHourMinutesWithoutAMPMForHours;
+ (void)setupFormatter:(struct __CFDateFormatter *)arg1 forKey:(id)arg2;
+ (void)setupFormat:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (void)setupFormatTemplate:(id)arg1 forKey:(id)arg2 locale:(id)arg3;
+ (id)_hourSymbolInFormat:(id)arg1;
+ (void)generateStandardFormatters:(id)arg1;
+ (void)generateAdditionalPrecodedFormatters:(id)arg1;
+ (void)generateDerivedTimeFormats:(id)arg1;
+ (void)generatePreferedOrders;
+ (id)dateFormatters;
+ (id)calendarDayFormatter;
+ (id)dateFormatterForKey:(id)arg1 formatString:(id)arg2;
+ (_Bool)dateIsWeekend:(id)arg1;
+ (id)formatKeyForHourString;
+ (id)sizeOrderedDateFormats;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)ICUFormatForKey:(id)arg1;
+ (struct __CFDateFormatter *)dateFormatterForKey:(id)arg1;
+ (id)intervalStringFromDate:(id)arg1 toDate:(id)arg2 withFormat:(id)arg3 options:(int)arg4;

@end
