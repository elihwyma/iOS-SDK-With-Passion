/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject

{
    _Bool __implicit;
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
    double reactionTorque;
    struct CGVector reactionForce;
}

@property (nonatomic) _Bool _implicit;
@property (retain, nonatomic) SKPhysicsBody *bodyA;
@property (retain, nonatomic) SKPhysicsBody *bodyB;
@property (nonatomic, readonly) struct CGVector reactionForce;
@property (nonatomic, readonly) double reactionTorque;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
