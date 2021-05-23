/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSObject.h>

@class PKPhysicsBody;

@interface PKPhysicsJoint : NSObject

{
    _Bool _inUse;
    _Bool _implicit;
    struct b2Joint *_baseJoint;
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
}

@property (nonatomic) struct b2Joint *_joint;
@property (nonatomic, readonly) struct b2JointDef *_jointDef;
@property (retain, nonatomic) PKPhysicsBody *bodyA;
@property (retain, nonatomic) PKPhysicsBody *bodyB;
@property (nonatomic, readonly) struct CGVector reactionForce;
@property (nonatomic, readonly) double reactionTorque;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)create;
- (_Bool)_implicit;
- (_Bool)_inUse;
- (void)set_implicit:(_Bool)arg1;
- (void)set_inUse:(_Bool)arg1;
- (_Bool)isEqualToJoint:(id)arg1;

@end
