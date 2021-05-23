/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsBallSocketJoint : SCNPhysicsBehavior

{
    struct {
        SCNPhysicsBody *bodyA;
        SCNPhysicsBody *bodyB;
        struct SCNVector3 anchorA;
        struct SCNVector3 anchorB;
    } _definition;
    struct btPoint2PointConstraint *_constraint;
    SCNPhysicsWorld *_world;
}

@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic) struct SCNVector3 anchorA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNVector3 anchorB;

+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3)arg4;
+ (id)jointWithBody:(id)arg1 anchor:(struct SCNVector3)arg2;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (id)initWithBodyA:(id)arg1 anchorA:(struct SCNVector3)arg2 bodyB:(id)arg3 anchorB:(struct SCNVector3)arg4;
- (id)initWithBody:(id)arg1 anchor:(struct SCNVector3)arg2;

@end
