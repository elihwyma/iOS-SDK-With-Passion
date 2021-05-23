/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <HealthDaemon/HDKeyValueDomain.h>

@interface HDKeyValueDomain (HKMenstrualCycles)

+ (id)hdmc_menstrualCyclesDefaultsDomainWithProfile:(id)arg1;

- (id)hdmc_isOnboardingCompletedWithError:(id *)arg1;
- (id)hdmc_onboardingFirstCompletedDateWithError:(id *)arg1;
- (_Bool)hdmc_setLastLoggedInCycleTrackingDate:(id)arg1 error:(id *)arg2;
- (id)hdmc_lastLoggedInCycleTrackingDateWithError:(id *)arg1;

@end
