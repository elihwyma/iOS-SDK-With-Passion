/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HealthKit)

+ (id)hk_oneDay;
+ (id)hk_componentsWithDays:(long long)arg1;
+ (id)hk_oneWeek;
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;

- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;
- (long long)hk_maxComponentValue;
- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;
- (id)hk_populatedCalendarGregorianCalendarDefault;
- (double)hk_approximateDuration;
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;
- (id)hk_negativeComponents;
- (long long)hk_ageWithCurrentDate:(id)arg1;

@end
