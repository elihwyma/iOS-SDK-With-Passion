/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKWorkoutConfiguration, NSDate, NSString, NSUUID;

@interface _HKCurrentWorkoutSnapshot : NSObject

{
    NSUUID *_sessionIdentifier;
    HKWorkoutConfiguration *_configuration;
    NSString *_applicationIdentifier;
    long long _sessionState;
    long long _internalState;
    NSDate *_snapshotDate;
    double _elapsedTime;
}

@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) HKWorkoutConfiguration *configuration;
@property (copy, nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) _Bool isFirstPartyWorkout;
@property (nonatomic, readonly) long long sessionState;
@property (nonatomic, readonly) long long internalState;
@property (nonatomic, readonly) NSDate *snapshotDate;
@property (nonatomic, readonly) double elapsedTime;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)state;
- (double)elapsedTimeAtDate:(id)arg1;
- (id)_initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 sessionServerState:(long long)arg3 applicationIdentifier:(id)arg4 elapsedTime:(double)arg5 snapshotDate:(id)arg6;

@end
