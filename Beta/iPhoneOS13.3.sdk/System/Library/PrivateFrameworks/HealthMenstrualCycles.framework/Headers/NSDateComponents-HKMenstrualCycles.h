/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HKMenstrualCycles)

+ (id)hkmc_componentsWithDayIndex:(long long)arg1 calendar:(id)arg2;

- (long long)hkmc_dayIndex;
- (id)hkmc_dateDescription;

@end
