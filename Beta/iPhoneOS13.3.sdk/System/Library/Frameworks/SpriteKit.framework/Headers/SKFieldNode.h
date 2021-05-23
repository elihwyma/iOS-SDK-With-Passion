/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class MISSING_TYPE, PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode : SKNode

{
    PKPhysicsField *_field;
    _Bool _exclusive;
    float _animationSpeed;
    float _smoothness;
    SKTexture *_texture;
    SKRegion *_region;
}

@property (retain, nonatomic) SKRegion *region;
@property (nonatomic) float strength;
@property (nonatomic) float falloff;
@property (nonatomic) float minimumRadius;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isExclusive) _Bool exclusive;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) MISSING_TYPE *direction;
@property (nonatomic) float smoothness;
@property (nonatomic) float animationSpeed;
@property (retain, nonatomic) SKTexture *texture;

+ (_Bool)supportsSecureCoding;
+ (id)dragField;
+ (id)vortexField;
+ (id)linearGravityFieldWithVector: /* Error: Ran out of types for this method. */;
+ (id)velocityFieldWithVector: /* Error: Ran out of types for this method. */;
+ (id)noiseFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)turbulenceFieldWithSmoothness:(double)arg1 animationSpeed:(double)arg2;
+ (id)springField;
+ (id)electricField;
+ (id)magneticField;
+ (id)customFieldWithEvaluationBlock:(CDUnknownBlockType)arg1;
+ (id)radialGravityField;
+ (id)velocityFieldWithTexture:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)field;
- (void)setPhysicsField:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (id)_descriptionClassName;
- (id)initWithCoder:(id)arg1 field:(id)arg2;

@end
