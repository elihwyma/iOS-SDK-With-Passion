/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFDrawerAnimation : NSObject

{
    unsigned long long _type;
    union {
        struct {
            long long curve;
        } basic;
        struct {
            double mass;
            double stiffness;
            double damping;
            double initialVelocity;
        } spring;
        struct {
            double initialVelocity;
        } defaultSpring;
    } _typeParameters;
    double _duration;
    double _delay;
    WFDrawerAnimation *_coordinatedUnitAnimation;
}

@property (nonatomic, readonly) WFDrawerAnimation *coordinatedUnitAnimation;

+ (id)animationWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3;
+ (id)animationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5;
+ (id)animationUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2;
+ (id)drawerReleaseAnimationWithInitialVelocity:(double)arg1;

- (id)description;
- (id)initWithDuration:(double)arg1 curve:(long long)arg2 delay:(double)arg3;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(double)arg4 delay:(double)arg5 calculateCoordinatedAnimation:(_Bool)arg6;
- (id)initUsingDefaultSpringWithInitialVelocity:(double)arg1 delay:(double)arg2;
- (void)applyWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

@end
