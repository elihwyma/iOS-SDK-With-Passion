/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode, SCNPhysicsShape;

@interface SCNPhysicsBody : NSObject

{
    SCNNode *_node;
    double _mass;
    double _charge;
    double _friction;
    double _restitution;
    double _rollingFriction;
    double _continuousCollisionDetectionThreshold;
    SCNPhysicsShape *_physicsShape;
    long long _type;
    double _damping;
    struct SCNVector4 _angularVelocity;
    double _angularDamping;
    struct SCNVector3 _velocityFactor;
    struct SCNVector3 _angularVelocityFactor;
    struct SCNVector3 _velocity;
    _Bool _ignoreGravity;
    double _linearRestingThreshold;
    double _angularRestingThreshold;
    _Bool _explicitMomentOfInertia;
    struct SCNVector3 _momentOfInertia;
    struct SCNVector3 _centerOfMassOffset;
    unsigned long long _categoryBitMask;
    unsigned long long _collisionBitMask;
    unsigned long long _contactTestBitMask;
    _Bool _allowsResting;
    _Bool _isDefaultShape;
    struct btRigidBody *_body;
}

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
@property (nonatomic) double continuousCollisionDetectionThreshold;
@property (nonatomic) struct SCNVector3 centerOfMassOffset;
@property (nonatomic) double linearRestingThreshold;
@property (nonatomic) double angularRestingThreshold;

+ (_Bool)supportsSecureCoding;
+ (id)bodyWithType:(long long)arg1 shape:(id)arg2;
+ (id)staticBody;
+ (id)dynamicBody;
+ (id)kinematicBody;

- (void)dealloc;
- (void)_activate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_owner;
- (struct btRigidBody *)_handle;
- (void)_setOwner:(id)arg1;
- (void)setResting:(_Bool)arg1;
- (void)resetTransform;
- (void)_removeOwner;
- (struct __C3DScene *)sceneRef;
- (struct btRigidBody *)_createBody;
- (id)initWithType:(long long)arg1 shape:(id)arg2;
- (struct btCollisionShape *)_shapeHandleWithShape:(id)arg1 owner:(id)arg2;
- (void)moveToTransform:(struct SCNMatrix4)arg1;
- (void)_didDecodeSCNPhysicsBody:(id)arg1;
- (_Bool)respondsToCollision;
- (void)setLinearSleepingThreshold:(double)arg1;
- (double)linearSleepingThreshold;
- (void)setAngularSleepingThreshold:(double)arg1;
- (double)angularSleepingThreshold;
- (double)continuousCollisionDetection;
- (void)applyForce:(struct SCNVector3)arg1 impulse:(_Bool)arg2;
- (void)applyForce:(struct SCNVector3)arg1 atPosition:(struct SCNVector3)arg2 impulse:(_Bool)arg3;
- (void)applyTorque:(struct SCNVector4)arg1 impulse:(_Bool)arg2;
- (void)clearAllForces;
- (void)resetToTransform:(struct SCNMatrix4)arg1;
- (void)moveToPosition:(struct SCNVector3)arg1;
- (void)rotateToAxisAngle:(struct SCNVector4)arg1;
- (void)_ownerWillDie;

@end
