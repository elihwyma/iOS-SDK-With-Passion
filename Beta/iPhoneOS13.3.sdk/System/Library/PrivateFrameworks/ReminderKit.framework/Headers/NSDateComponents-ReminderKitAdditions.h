/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (ReminderKitAdditions)

+ (id)rem_dateWithDateComponents:(id)arg1 timeZone:(id)arg2;
+ (id)rem_dateComponentsWithDate:(id)arg1 timeZone:(id)arg2 isAllDay:(_Bool)arg3;
+ (id)rem_dateComponentsWithDateUsingArchivingTimeZone:(id)arg1 isAllDay:(_Bool)arg2;
+ (id)rem_dateWithDateComponentsUsingArchivingTimeZone:(id)arg1;
+ (id)rem_dateComponentsWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 allDay:(_Bool)arg7 timeZone:(id)arg8;

- (id)rem_stringRepresentation;
- (id)rem_gregorianEquivalent;
- (_Bool)rem_isAllDayDateComponents;
- (id)rem_strippingTimeZone;
- (long long)rem_compare:(id)arg1;
- (id)rem_dateComponentsByAddingTimeInterval:(double)arg1;
- (id)rem_allDayDateComponents;
- (_Bool)rem_isValidDateComponents;
- (_Bool)rem_isWeekendDateComponents;

@end
