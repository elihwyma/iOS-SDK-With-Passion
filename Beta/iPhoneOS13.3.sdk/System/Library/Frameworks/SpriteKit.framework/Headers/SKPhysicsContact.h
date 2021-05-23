/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class SKPhysicsBody;

@interface SKPhysicsContact : NSObject

{
    SKPhysicsBody *_bodyA;
    SKPhysicsBody *_bodyB;
    double _collisionImpulse;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
}

@property (nonatomic, readonly) SKPhysicsBody *bodyA;
@property (nonatomic, readonly) SKPhysicsBody *bodyB;
@property (nonatomic, readonly) struct CGPoint contactPoint;
@property (nonatomic, readonly) struct CGVector contactNormal;
@property (nonatomic, readonly) double collisionImpulse;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)copyWithZone:(struct _NSZone *)arg1;

@end
