/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointPrismatic : PKPhysicsJoint

{
    struct b2PrismaticJointDef _jointDef;
    struct b2PrismaticJoint *_joint;
    struct CGPoint _anchor;
    struct CGVector _axis;
}

@property (nonatomic) _Bool shouldEnableLimits;
@property (nonatomic) double lowerDistanceLimit;
@property (nonatomic) double upperDistanceLimit;

+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGVector)arg4;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)create;
- (struct b2Joint *)_joint;
- (_Bool)isEqualToPrismaticJoint:(id)arg1;
- (void)set_joint:(struct b2Joint *)arg1;
- (struct b2JointDef *)_jointDef;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGVector)arg4;

@end
