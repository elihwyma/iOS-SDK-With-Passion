/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (CalClassAdditions)

+ (id)componentForYears:(long long)arg1;
+ (id)componentForMinutes:(long long)arg1;
+ (id)componentForHours:(long long)arg1;
+ (id)componentForDays:(long long)arg1;
+ (id)componentForWeeks:(long long)arg1;
+ (id)componentForMonths:(long long)arg1;

- (_Bool)isSameMonthAsComponents:(id)arg1;
- (_Bool)isSameYearAsComponents:(id)arg1;
- (_Bool)isSameDayAsComponents:(id)arg1;
- (id)representedDate;

@end
