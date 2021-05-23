/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRope : PKPhysicsJoint

{
    struct b2RopeJointDef _jointDef;
    struct b2RopeJoint *_joint;
    struct CGPoint _anchorA;
    struct CGPoint _anchorB;
}

@property (nonatomic) double maxLength;

+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)create;
- (struct b2Joint *)_joint;
- (_Bool)isEqualToRopeJoint:(id)arg1;
- (void)set_joint:(struct b2Joint *)arg1;
- (struct b2JointDef *)_jointDef;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;

@end
