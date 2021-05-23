/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSpring : SKPhysicsJoint

{
    double _damping;
    double _frequency;
}

@property (nonatomic) double damping;
@property (nonatomic) double frequency;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;

@end
