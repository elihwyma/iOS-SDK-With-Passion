/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKWorkoutConfiguration, NSUUID;

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration

{
    _Bool _requiresCoreLocationAssertion;
    _Bool _requiresRecovery;
    _Bool _supportsAppRelaunchForRecovery;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
}

@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (nonatomic) _Bool requiresCoreLocationAssertion;
@property (nonatomic) _Bool requiresRecovery;
@property (nonatomic) _Bool supportsAppRelaunchForRecovery;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
