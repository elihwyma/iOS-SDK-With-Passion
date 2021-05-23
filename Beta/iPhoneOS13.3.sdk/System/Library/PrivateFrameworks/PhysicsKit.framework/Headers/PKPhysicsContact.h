/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSObject.h>

@class PKPhysicsBody;

@interface PKPhysicsContact : NSObject

{
    PKPhysicsBody *_bodyA;
    PKPhysicsBody *_bodyB;
    struct CGPoint _contactPoint;
    struct CGVector _contactNormal;
    double _impulse;
    _Bool _didBegin;
    _Bool _didEnd;
}

@property _Bool didBegin;
@property _Bool didEnd;
@property (nonatomic, readonly) PKPhysicsBody *bodyA;
@property (nonatomic, readonly) PKPhysicsBody *bodyB;
@property (nonatomic, readonly) struct CGPoint contactPoint;
@property (nonatomic, readonly) struct CGVector contactNormal;
@property (nonatomic, readonly) double collisionImpulse;

- (id)init;
- (void)setContactPoint:(struct CGPoint)arg1;
- (void)setBodyA:(id)arg1;
- (void)setBodyB:(id)arg1;
- (void)setContactNormal:(struct CGVector)arg1;
- (void)setCollisionImpulse:(double)arg1;

@end
