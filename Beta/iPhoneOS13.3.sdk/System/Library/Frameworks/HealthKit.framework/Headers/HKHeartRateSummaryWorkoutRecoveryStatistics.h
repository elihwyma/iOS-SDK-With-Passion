/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class NSDictionary;

@interface HKHeartRateSummaryWorkoutRecoveryStatistics : HKHeartRateSummaryStatistics

{
    unsigned long long _workoutActivityType;
    NSDictionary *_perMinuteReadings;
}

@property (retain, nonatomic, setter=_setPerMinuteReadings:) NSDictionary *perMinuteReadings;
@property (nonatomic, readonly) unsigned long long workoutActivityType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateInterval:(id)arg1 numberOfBuckets:(long long)arg2 workoutUUID:(id)arg3 workoutActivityType:(unsigned long long)arg4;

@end
