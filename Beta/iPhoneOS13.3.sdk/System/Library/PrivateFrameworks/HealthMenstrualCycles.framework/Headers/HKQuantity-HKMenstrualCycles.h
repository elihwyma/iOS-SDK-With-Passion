/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <HealthKit/HKQuantity.h>

@interface HKQuantity (HKMenstrualCycles)

+ (id)hkmc_quantityWithDegreesCelsius:(double)arg1;
+ (id)hkmc_quantityWithDegreesFahrenheit:(double)arg1;

- (double)hkmc_degreesCelsius;
- (double)hkmc_degreesFahrenheit;

@end
