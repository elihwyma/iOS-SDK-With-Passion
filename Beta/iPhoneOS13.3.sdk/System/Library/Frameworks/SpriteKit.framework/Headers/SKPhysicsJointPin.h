/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointPin : SKPhysicsJoint

{
    _Bool _shouldEnableLimits;
    double _lowerAngleLimit;
    double _upperAngleLimit;
    double _frictionTorque;
    double _rotationSpeed;
    struct CGPoint _anchor;
}

@property (readonly) struct CGPoint anchor;
@property (nonatomic) _Bool shouldEnableLimits;
@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;
@property (nonatomic) double frictionTorque;
@property (nonatomic) double rotationSpeed;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3;

@end
