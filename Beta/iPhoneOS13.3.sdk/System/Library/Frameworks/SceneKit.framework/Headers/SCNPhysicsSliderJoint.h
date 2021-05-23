/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsSliderJoint : SCNPhysicsBehavior

{
    struct {
        SCNPhysicsBody *bodyA;
        SCNPhysicsBody *bodyB;
        struct SCNVector3 axisA;
        struct SCNVector3 anchorA;
        struct SCNVector3 axisB;
        struct SCNVector3 anchorB;
        double minLinearLimit;
        double maxLinearLimit;
        double minAngularLimit;
        double maxAngularLimit;
        double motorTargetLinearVelocity;
        double motorMaximumForce;
        double motorTargetAngularVelocity;
        double motorMaximumTorque;
    } _definition;
    struct btSliderConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 axisA;
@property (nonatomic) struct SCNVector3 anchorA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 axisB;
@property (nonatomic) struct SCNVector3 anchorB;
@property (nonatomic) double minimumLinearLimit;
@property (nonatomic) double maximumLinearLimit;
@property (nonatomic) double minimumAngularLimit;
@property (nonatomic) double maximumAngularLimit;
@property (nonatomic) double motorTargetLinearVelocity;
@property (nonatomic) double motorMaximumForce;
@property (nonatomic) double motorTargetAngularVelocity;
@property (nonatomic) double motorMaximumTorque;

+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(id)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
+ (id)jointWithBody:(id)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBodyA:(id)arg1 axisA:(struct SCNVector3)arg2 anchorA:(struct SCNVector3)arg3 bodyB:(id)arg4 axisB:(struct SCNVector3)arg5 anchorB:(struct SCNVector3)arg6;
- (id)initWithBody:(id)arg1 axis:(struct SCNVector3)arg2 anchor:(struct SCNVector3)arg3;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;

@end
