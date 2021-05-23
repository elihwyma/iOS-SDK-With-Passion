/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (Additions)

+ (id)hf_zeroDateComponentsWithComponents:(unsigned long long)arg1 calendar:(id)arg2;
+ (unsigned long long)_hf_allPossibleComponents;
+ (id)hf_dailyWeekdayIntervalComponents;
+ (id)hf_dailyIntervalComponents;
+ (id)hf_weeklyIntervalComponents;
+ (id)hf_biweeklyIntervalComponents;
+ (id)hf_monthlyIntervalComponents;
+ (id)hf_yearlyIntervalComponents;
+ (id)hf_componentsWithHour:(long long)arg1 minute:(long long)arg2;

- (unsigned long long)hf_validComponents;
- (long long)hf_compareNextMatchingDate:(id)arg1 withCalendar:(id)arg2;
- (_Bool)hf_isEqualToHomeKitRecurrence:(id)arg1;
- (double)hf_timeInterval;
- (id)hf_absoluteValue;
- (id)hf_negativeValue;
- (long long)hf_compareNextMatchingDate:(id)arg1;

@end
