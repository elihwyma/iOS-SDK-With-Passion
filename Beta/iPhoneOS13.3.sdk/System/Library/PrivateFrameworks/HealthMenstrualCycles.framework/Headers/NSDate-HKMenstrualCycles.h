/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <Foundation/NSDate.h>

@interface NSDate (HKMenstrualCycles)

+ (id)hkmc_noonWithDayIndex:(long long)arg1 calendar:(id)arg2;
+ (id)hkmc_earliestPossibleDateWithDayIndex:(long long)arg1;
+ (id)hkmc_latestPossibleDateWithDayIndex:(long long)arg1;

- (long long)hkmc_dayIndexWithCalendar:(id)arg1;
- (long long)hkmc_earliestPossibleDayIndex;
- (long long)hkmc_latestPossibleDayIndex;

@end
