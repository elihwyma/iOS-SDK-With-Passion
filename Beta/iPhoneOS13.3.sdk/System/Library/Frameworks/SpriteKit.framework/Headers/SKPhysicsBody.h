/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, SKNode;

@interface SKPhysicsBody : NSObject

{
    _Bool _dynamic;
    _Bool _usesPreciseCollisionDetection;
    _Bool _allowsRotation;
    _Bool _pinned;
    _Bool _resting;
    _Bool _affectedByGravity;
    unsigned int _fieldBitMask;
    unsigned int _categoryBitMask;
    unsigned int _collisionBitMask;
    unsigned int _contactTestBitMask;
    double _friction;
    double _charge;
    double _restitution;
    double _linearDamping;
    double _angularDamping;
    double _density;
    double _mass;
    double _area;
    NSArray *_joints;
    SKNode *_node;
    double _angularVelocity;
    struct CGVector _velocity;
}

@property (nonatomic, getter=isDynamic) _Bool dynamic;
@property (nonatomic) _Bool usesPreciseCollisionDetection;
@property (nonatomic) _Bool allowsRotation;
@property (nonatomic) _Bool pinned;
@property (nonatomic, getter=isResting) _Bool resting;
@property (nonatomic) double friction;
@property (nonatomic) double charge;
@property (nonatomic) double restitution;
@property (nonatomic) double linearDamping;
@property (nonatomic) double angularDamping;
@property (nonatomic) double density;
@property (nonatomic) double mass;
@property (nonatomic, readonly) double area;
@property (nonatomic) _Bool affectedByGravity;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (nonatomic, readonly) NSArray *joints;
@property (weak, nonatomic, readonly) SKNode *node;
@property (nonatomic) struct CGVector velocity;
@property (nonatomic) double angularVelocity;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
+ (id)bodyWithPolygonFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath *)arg1;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath *)arg1;
+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize)arg3 accuracy:(float)arg4;
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint)arg2;
+ (id)bodyWithTexture:(id)arg1 alphaThreshold:(float)arg2 size:(struct CGSize)arg3;
+ (id)bodyWithEdgeLoopFromRect:(struct CGRect)arg1;
+ (id)bodyWithTexture:(id)arg1 size:(struct CGSize)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyImpulse:(struct CGVector)arg1;
- (void)applyForce:(struct CGVector)arg1;
- (void)applyForce:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyTorque:(double)arg1;
- (void)applyImpulse:(struct CGVector)arg1 atPoint:(struct CGPoint)arg2;
- (void)applyAngularImpulse:(double)arg1;
- (id)allContactedBodies;

@end
