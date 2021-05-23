/*
 Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

#import <CalRecurrenceGenerator.h>

@interface CDBRecurrenceGenerator : CalRecurrenceGenerator

- (id)computeRecurrenceEndDateForCalEvent:(void *)arg1 recurrenceRule:(void *)arg2 locked:(_Bool)arg3;
- (id)copyOccurrenceDatesWithCalEvent:(void *)arg1 startDate:(CDStruct_79f9e052)arg2 endDate:(CDStruct_79f9e052)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(_Bool)arg6;
- (void)_setupForCalEvent:(void *)arg1 locked:(_Bool)arg2;
- (id)_copyOccurrenceDatesWithBirthdayEvent:(void *)arg1 startDate:(CDStruct_79f9e052)arg2 endDate:(CDStruct_79f9e052)arg3 timeZone:(id)arg4 limit:(long long)arg5 locked:(_Bool)arg6;
- (void)_prepareForCalRecurrence:(void *)arg1 locked:(_Bool)arg2;
- (id)copyOccurrenceDatesWithInitialDate:(id)arg1 calRecurrences:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 timeZone:(id)arg5;

@end
