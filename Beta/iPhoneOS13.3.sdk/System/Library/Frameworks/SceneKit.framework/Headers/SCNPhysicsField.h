/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNNode, SCNPhysicsWorld;

@interface SCNPhysicsField : NSObject

{
    struct SCNVector3 _halfExtent;
    double _strength;
    double _falloffExponent;
    double _minimumDistance;
    _Bool _active;
    long long _scope;
    _Bool _usesEllipsoidalExtent;
    _Bool _exclusive;
    struct SCNVector3 _offset;
    struct SCNVector3 _direction;
    unsigned long long _categoryBitMask;
    SCNPhysicsWorld *_world;
    SCNNode *_node;
    struct c3dPhysicsField *_field;
}

@property (nonatomic) double strength;
@property (nonatomic) double falloffExponent;
@property (nonatomic) double minimumDistance;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, getter=isExclusive) _Bool exclusive;
@property (nonatomic) struct SCNVector3 halfExtent;
@property (nonatomic) _Bool usesEllipsoidalExtent;
@property (nonatomic) long long scope;
@property (nonatomic) struct SCNVector3 offset;
@property (nonatomic) struct SCNVector3 direction;
@property (nonatomic) unsigned long long categoryBitMask;

+ (_Bool)supportsSecureCoding;
+ (id)field;
+ (id)dragField;
+ (id)vortexField;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)springField;
+ (id)electricField;
+ (id)magneticField;
+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)radialGravityField;
+ (id)linearGravityField;
+ (void)_setDisplayScaleFactor:(double)arg1;
+ (double)_displayScaleFactor;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_owner;
- (struct c3dPhysicsField *)_handle;
- (_Bool)exclusive;
- (void)_commonInit;
- (void)_setOwner:(id)arg1;
- (void)_removeOwner;
- (struct c3dPhysicsField *)_createField;
- (void)_setupCommonProperties;
- (_Bool)supportsDirection;
- (_Bool)supportsOffset;
- (void)_willRemoveFromPhysicsWorld;
- (void)_setWorld:(id)arg1;
- (struct SCNVector3)evalAtLocation:(struct SCNVector3)arg1;

@end
