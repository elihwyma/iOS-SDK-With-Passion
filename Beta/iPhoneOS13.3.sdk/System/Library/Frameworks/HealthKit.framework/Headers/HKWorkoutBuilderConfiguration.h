/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, HKQuantity, HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration

{
    _Bool _shouldCollectWorkoutEvents;
    _Bool _requiresRecovery;
    HKDevice *_device;
    HKWorkoutConfiguration *_workoutConfiguration;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSUUID *_associatedSessionUUID;
}

@property (copy, nonatomic) HKDevice *device;
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic) unsigned long long goalType;
@property (copy, nonatomic) HKQuantity *goal;
@property (copy, nonatomic) NSUUID *associatedSessionUUID;
@property (nonatomic) _Bool shouldCollectWorkoutEvents;
@property (nonatomic) _Bool requiresRecovery;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
