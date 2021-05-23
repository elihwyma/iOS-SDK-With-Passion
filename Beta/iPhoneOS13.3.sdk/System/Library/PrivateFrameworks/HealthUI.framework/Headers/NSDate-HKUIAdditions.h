/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSDate.h>

@interface NSDate (HKUIAdditions)

+ (id)hk_minimumDateForBirthDateWithCalendar:(id)arg1;

- (double)doubleValue;
- (id)hk_dateWithTruncatedSecond;
- (id)hk_dateBeforeDateForCalendar:(id)arg1 rangeUnit:(unsigned long long)arg2;
- (id)hk_midPointToValue:(id)arg1 percentage:(double)arg2;
- (_Bool)hk_animatable;

@end
