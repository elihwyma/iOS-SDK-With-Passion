/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@class CMWorkout, HKWorkoutConfiguration, NSUUID;

@interface _HDCoreMotionAssertion : HDAssertion

{
    HKWorkoutConfiguration *_workoutConfiguration;
    NSUUID *_sessionUUID;
    CMWorkout *_cmWorkout;
}

@property (nonatomic, readonly) HKWorkoutConfiguration *workoutConfiguration;
@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (retain, nonatomic) CMWorkout *cmWorkout;

- (id)initWithOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;

@end
