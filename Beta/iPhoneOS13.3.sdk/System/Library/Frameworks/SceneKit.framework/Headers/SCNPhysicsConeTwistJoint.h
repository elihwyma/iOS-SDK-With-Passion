/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior

{
    struct {
        SCNPhysicsBody *bodyA;
        struct SCNMatrix4 frameA;
        SCNPhysicsBody *bodyB;
        struct SCNMatrix4 frameB;
        double maximumAngularLimit1;
        double maximumAngularLimit2;
        double maximumTwistAngle;
    } _definition;
    struct btConeTwistConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNMatrix4 frameA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNMatrix4 frameB;
@property (nonatomic) double maximumAngularLimit1;
@property (nonatomic) double maximumAngularLimit2;
@property (nonatomic) double maximumTwistAngle;

+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 frameA:(struct SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4)arg4;
+ (id)jointWithBody:(id)arg1 frame:(struct SCNMatrix4)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (id)initWithBodyA:(id)arg1 frameA:(struct SCNMatrix4)arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4)arg4;
- (id)initWithBody:(id)arg1 frame:(struct SCNMatrix4)arg2;

@end
