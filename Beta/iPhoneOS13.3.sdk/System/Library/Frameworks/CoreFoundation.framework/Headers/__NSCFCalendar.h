/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSCalendar.h>

__attribute__((visibility("hidden")))
@interface __NSCFCalendar : NSCalendar

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)calendarWithIdentifier:(id)arg1;

- (unsigned long long)retainCount;
- (_Bool)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (unsigned long long)hash;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)calendarIdentifier;
- (void)setLocale:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (unsigned long long)firstWeekday;
- (void)setFirstWeekday:(unsigned long long)arg1;
- (unsigned long long)minimumDaysInFirstWeek;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)arg1;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)dateFromComponents:(id)arg1;
- (id)timeZone;
- (id)locale;
- (id)gregorianStartDate;
- (void)setGregorianStartDate:(id)arg1;
- (struct _NSRange)minimumRangeOfUnit:(unsigned long long)arg1;
- (struct _NSRange)maximumRangeOfUnit:(unsigned long long)arg1;
- (struct _NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3;
- (_Bool)rangeOfUnit:(unsigned long long)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3;
- (id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4;
- (_Bool)nextWeekendStartDate:(out id *)arg1 interval:(out double *)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4;
- (_Bool)isDateInWeekend:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;

@end
