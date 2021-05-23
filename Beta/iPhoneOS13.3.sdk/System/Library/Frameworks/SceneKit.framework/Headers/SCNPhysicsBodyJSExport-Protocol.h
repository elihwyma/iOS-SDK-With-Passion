/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class SCNPhysicsShape;

@protocol SCNPhysicsBodyJSExport <Swift>

@property (nonatomic) long long type;
@property (nonatomic) double mass;
@property (nonatomic) struct SCNVector3 momentOfInertia;
@property (nonatomic) _Bool usesDefaultMomentOfInertia;
@property (nonatomic) double charge;
@property (nonatomic) double friction;
@property (nonatomic) double restitution;
@property (nonatomic) double rollingFriction;
@property (retain, nonatomic) SCNPhysicsShape *physicsShape;
@property (nonatomic, readonly) _Bool isResting;
@property (nonatomic) _Bool allowsResting;
@property (nonatomic) struct SCNVector3 velocity;
@property (nonatomic) struct SCNVector4 angularVelocity;
@property (nonatomic) double damping;
@property (nonatomic) double angularDamping;
@property (nonatomic) struct SCNVector3 velocityFactor;
@property (nonatomic) struct SCNVector3 angularVelocityFactor;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) unsigned long long collisionBitMask;
@property (nonatomic) unsigned long long contactTestBitMask;
@property (nonatomic, getter=isAffectedByGravity) _Bool affectedByGravity;

+ (unsigned short)bodyWithType:shape: /* Error: Ran out of types for this method. */;
+ (unsigned short)staticBody;
+ (unsigned short)dynamicBody;
+ (unsigned short)kinematicBody;

- (unsigned short)copy;
- (unsigned short)resetTransform;
- (unsigned short)applyForce:impulse: /* Error: Ran out of types for this method. */;
- (unsigned short)applyForce:atPosition:impulse: /* Error: Ran out of types for this method. */;
- (unsigned short)applyTorque:impulse: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAllForces;

@end
