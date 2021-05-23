/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PKPhysicsWorld;

@protocol NSObject;

@interface PKPhysicsBody : NSObject

{
    id <NSObject> _representedObject;
    struct b2BodyDef _bodyDef;
    struct b2Body *_body;
    struct PKCField *_field;
    int _dynamicType;
    vector_8416aa54 _shapes;
    PKPhysicsWorld *_world;
    NSMutableArray *_joints;
    _Bool _inUse;
    int _shapeType;
    shared_ptr_2aaf3a07 _pathPtr;
    shared_ptr_639e7c03 _quadTree;
    struct CGPoint _p0;
    struct CGPoint _p1;
    struct CGSize _size;
    double _radius;
    double _edgeRadius;
    struct CGImage *_mask;
    shared_ptr_2aaf3a07 _outline;
    _Bool _isPinned;
    _Bool _allowsRotation;
    CDUnknownBlockType _postStepBlock;
}

@property (nonatomic, readonly) vector_8416aa54 *_shapes;
@property (nonatomic) struct b2BodyDef _bodyDef;
@property (nonatomic) struct b2Body *_body;
@property (nonatomic) struct CGPoint position;
@property (nonatomic) double rotation;
@property (nonatomic, getter=isDynamic) _Bool dynamic;
@property (nonatomic) _Bool usesPreciseCollisionDetection;
@property (nonatomic) _Bool allowsRotation;
@property (nonatomic) _Bool pinned;
@property (nonatomic) shared_ptr_2aaf3a07 outline;
@property (nonatomic, readonly) struct PKPath *volume;
@property (nonatomic, getter=isResting) _Bool resting;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double restitution;
@property (nonatomic) double linearDamping;
@property (nonatomic) double angularDamping;
@property (nonatomic) double density;
@property (nonatomic) double mass;
@property (nonatomic, readonly) double area;
@property (nonatomic) double radius;
@property (nonatomic) _Bool affectedByGravity;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (nonatomic, readonly) NSArray *joints;
@property (weak, nonatomic) id <NSObject> representedObject;
@property (copy, nonatomic) CDUnknownBlockType postStepBlock;
@property (nonatomic) struct CGVector velocity;
@property (nonatomic) double angularVelocity;

+ (_Bool)supportsSecureCoding;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 edgeRadius:(double)arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(double)arg3;
+ (id)bodyWithOutline:(shared_ptr_2aaf3a07)arg1 offset:(struct CGPoint)arg2;
+ (id)initWithQuadTree:(id)arg1;
+ (id)initWithMarchingCubes:(struct PKCGrid *)arg1 pixelFrame:(struct CGRect)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActive:(_Bool)arg1;
- (id).cxx_construct;
- (_Bool)active;
- (id)initWithPolygonFromPath:(struct CGPath *)arg1;
- (id)initWithCircleOfRadius:(double)arg1;
- (id)initWithRectangleOfSize:(struct CGSize)arg1;
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
- (id)initWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)initWithEdgeChainFromPath:(struct CGPath *)arg1;
- (id)initWithEdgeLoopFromPath:(struct CGPath *)arg1;
- (id)initWithBodies:(id)arg1;
- (void)set_allowSleep:(_Bool)arg1;
- (id)_world;
- (void)applyImpulse:(struct CGVector)arg1;
- (void)applyUnscaledImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyUnscaledForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyUnscaledImpulse:(struct CGVector)arg1;
- (void)applyUnscaledForce:(struct CGVector)arg1;
- (id)_joints;
- (_Bool)_inUse;
- (void)applyForce:(struct CGPoint)arg1;
- (id)_descriptionClassName;
- (void)reapplyScale:(double)arg1 yScale:(double)arg2;
- (void)applyForce:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyTorque:(double)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyAngularImpulse:(double)arg1;
- (id)allContactedBodies;
- (id)initWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;
- (id)initWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 edgeRadius:(float)arg3;
- (id)_descriptionFormat;
- (void)clearBox2DData;
- (_Bool)isEqualToBody:(id)arg1;
- (_Bool)_allowSleep;
- (shared_ptr_639e7c03)_quadTree;
- (void)set_world:(id)arg1;
- (void)set_joints:(id)arg1;
- (void)set_inUse:(_Bool)arg1;

@end
