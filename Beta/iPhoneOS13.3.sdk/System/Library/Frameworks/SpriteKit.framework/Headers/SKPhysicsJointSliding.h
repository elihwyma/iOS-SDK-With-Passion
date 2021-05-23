/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSliding : SKPhysicsJoint

{
    _Bool _shouldEnableLimits;
    double _lowerDistanceLimit;
    double _upperDistanceLimit;
}

@property (nonatomic) _Bool shouldEnableLimits;
@property (nonatomic) double lowerDistanceLimit;
@property (nonatomic) double upperDistanceLimit;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint)arg3 axis:(struct CGVector)arg4;

@end
