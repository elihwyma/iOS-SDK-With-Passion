/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <HealthKit/HKSample.h>

@interface HKSample (HKMenstrualCycles)

+ (id)hkmc_defaultMetadata;

- (_Bool)hkmc_wasEnteredFromCycleTracking;
- (id)hkmc_timeZone;
- (CDStruct_912cb5d2)hkmc_dayIndexRangeWithCalendar:(id)arg1;

@end
