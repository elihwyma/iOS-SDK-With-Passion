/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointWeld : PKPhysicsJoint

{
    struct b2WeldJointDef _jointDef;
    struct b2WeldJoint *_joint;
    struct CGPoint _anchor;
}

+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)create;
- (struct b2Joint *)_joint;
- (_Bool)isEqualToWeldJoint:(id)arg1;
- (void)set_joint:(struct b2Joint *)arg1;
- (struct b2JointDef *)_jointDef;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;

@end
