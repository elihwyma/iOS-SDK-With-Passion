/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointLimit : SKPhysicsJoint

{
    double _maxLength;
}

@property (nonatomic) double maxLength;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(struct CGPoint)arg3 anchorB:(struct CGPoint)arg4;

@end
