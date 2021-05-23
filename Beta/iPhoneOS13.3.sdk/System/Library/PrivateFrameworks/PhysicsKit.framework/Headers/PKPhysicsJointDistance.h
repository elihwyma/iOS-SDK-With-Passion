/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointDistance : PKPhysicsJoint

{
    struct b2DistanceJointDef _jointDef;
    struct b2DistanceJoint *_joint;
    struct CGPoint _anchorA;
    struct CGPoint _anchorB;
}

@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) double length;
@property (nonatomic) _Bool collideConnected;

+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint)arg3 localAnchorB:(struct CGPoint)arg4;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)create;
- (struct b2Joint *)_joint;
- (_Bool)isEqualToDistanceJoint:(id)arg1;
- (void)set_joint:(struct b2Joint *)arg1;
- (struct b2JointDef *)_jointDef;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 localAnchorA:(struct CGPoint)arg3 localAnchorB:(struct CGPoint)arg4;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;

@end
