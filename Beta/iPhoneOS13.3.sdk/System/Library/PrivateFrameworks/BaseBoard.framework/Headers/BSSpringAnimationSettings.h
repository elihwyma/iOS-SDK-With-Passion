/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSpringAnimationSettings

{
    double _mass;
    double _stiffness;
    double _damping;
    double _epsilon;
    double _initialVelocity;
    _Bool _hasCalculatedDuration;
}

@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) double stiffness;
@property (nonatomic, readonly) double damping;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic, readonly) double initialVelocity;

+ (_Bool)supportsSecureCoding;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 delay:(double)arg5 timingFunction:(id)arg6;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)duration;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (_Bool)isSpringAnimation;
- (void)_setDuration:(double)arg1;
- (void)_setTimingFunction:(id)arg1;
- (void)_setSpeed:(float)arg1;
- (void)_setEpsilon:(double)arg1;
- (id)_initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8 speed:(float)arg9;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (_Bool)_hasCalculatedDuration;
- (void)_setMass:(double)arg1;
- (void)_setStiffness:(double)arg1;
- (void)_setDamping:(double)arg1;
- (void)_setInitialVelocity:(double)arg1;

@end
