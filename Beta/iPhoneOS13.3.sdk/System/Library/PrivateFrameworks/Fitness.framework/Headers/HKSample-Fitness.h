/*
 Image: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
 */

#import <HealthKit/HKSample.h>

@interface HKSample (Fitness)

- (_Bool)fi_overlapsStartDate:(id)arg1 endDate:(id)arg2;
- (_Bool)fi_isBeforeDate:(id)arg1;
- (_Bool)fi_isAfterDate:(id)arg1;
- (_Bool)fi_spansDate:(id)arg1 useStrictDateLimits:(_Bool)arg2;

@end
