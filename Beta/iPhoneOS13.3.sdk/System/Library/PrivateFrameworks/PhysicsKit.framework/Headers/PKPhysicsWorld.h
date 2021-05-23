/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSMutableArray;

@protocol PKPhysicsContactDelegate;

@interface PKPhysicsWorld : NSObject

{
    struct b2World *_world;
    struct b2Vec2 _gravity;
    _Bool _doSleep;
    double _accumulatedDt;
    struct PKContactListener _contactListener;
    float _speed;
    NSMutableArray *_bodies;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
    struct PKDebugDrawPacket drawPacket;
}

@property (nonatomic) _Bool _doSleep;
@property (retain, nonatomic) NSMutableArray *_bodies;
@property (nonatomic, readonly) struct PKCAether *aether;
@property (nonatomic, readonly) struct b2World *_world;
@property (nonatomic) struct b2Vec2 _gravity;
@property (nonatomic) struct CGVector gravity;
@property (nonatomic) double speed;
@property (nonatomic) double velocityThreshold;
@property (nonatomic) id <PKPhysicsContactDelegate> contactDelegate;

+ (_Bool)supportsSecureCoding;
+ (id)world;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)addField:(id)arg1;
- (void)removeJoint:(id)arg1;
- (void)addJoint:(id)arg1;
- (void)addBody:(id)arg1;
- (void)removeBody:(id)arg1;
- (id)collisionDelegate;
- (void)setCollisionDelegate:(id)arg1;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (void)debugDraw:(float)arg1 matrix:(union _GLKMatrix4)arg2 showsPhysics:(_Bool)arg3 showsOutlineInterior:(_Bool)arg4 showsFields:(_Bool)arg5;
- (const struct PKDebugDrawPacket *)debugDrawPacket;
- (void)removeField:(id)arg1;
- (void)_runBlockOutsideOfTimeStep:(CDUnknownBlockType)arg1;
- (void)removeAllJoints;
- (id)joints;
- (id)bodies;
- (_Bool)hasBodies;
- (_Bool)hasFields;
- (void)removeAllBodies;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (struct CGVector)sampleFields:(struct CGPoint)arg1;
- (MISSING_TYPE *)sampleFieldsAt: /* Error: Ran out of types for this method. */;
- (void)__init__;
- (void)removeAllFields;
- (id)sampleFields:(struct CGRect)arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize)arg3;
- (struct CGVector)evalForce:(unsigned int)arg1 point:(struct CGPoint)arg2;
- (_Bool)isEqualToWorld:(id)arg1;

@end
