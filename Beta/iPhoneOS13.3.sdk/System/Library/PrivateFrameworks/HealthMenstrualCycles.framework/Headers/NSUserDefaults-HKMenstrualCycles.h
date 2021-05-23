/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (HKMenstrualCycles)

@property (nonatomic, readonly) _Bool hkmc_analyticsDebugModeEnabled;
@property (nonatomic, readonly) _Bool hkmc_calendarLogAdjacentDaysDisabled;
@property (nonatomic, readonly) _Bool hkmc_timelineLogAdjacentDaysEnabled;
@property (nonatomic, readonly) _Bool hkmc_timelineTapToLogDisabled;
@property (nonatomic, readonly) _Bool hkmc_useDemoCycles;

+ (id)hkmc_menstrualCyclesDefaults;

- (long long)hkmc_integerForKey:(id)arg1 defaultValue:(long long)arg2;

@end
