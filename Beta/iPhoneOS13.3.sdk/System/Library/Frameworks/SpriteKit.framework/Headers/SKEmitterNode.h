/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class NSDictionary, SKAction, SKKeyframeSequence, SKShader, SKTexture, UIColor;

@interface SKEmitterNode : SKNode

{
    SKTexture *_particleTexture;
    struct SKCEmitterNode *_skcEmitterNode;
    SKNode *_target;
    SKKeyframeSequence *_colorSequence;
    SKKeyframeSequence *_colorBlendSequence;
    SKKeyframeSequence *_alphaSequence;
    SKKeyframeSequence *_scaleSequence;
    SKKeyframeSequence *_rotationSequence;
    SKKeyframeSequence *_fieldInfluenceSequence;
    SKKeyframeSequence *_particleSpeedSequence;
    unsigned long long _particleRenderOrder;
}

@property (retain, nonatomic) SKTexture *particleTexture;
@property (nonatomic) long long particleBlendMode;
@property (retain, nonatomic) UIColor *particleColor;
@property (nonatomic) double particleColorRedRange;
@property (nonatomic) double particleColorGreenRange;
@property (nonatomic) double particleColorBlueRange;
@property (nonatomic) double particleColorAlphaRange;
@property (nonatomic) double particleColorRedSpeed;
@property (nonatomic) double particleColorGreenSpeed;
@property (nonatomic) double particleColorBlueSpeed;
@property (nonatomic) double particleColorAlphaSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleColorSequence;
@property (nonatomic) double particleColorBlendFactor;
@property (nonatomic) double particleColorBlendFactorRange;
@property (nonatomic) double particleColorBlendFactorSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleColorBlendFactorSequence;
@property (nonatomic) struct CGPoint particlePosition;
@property (nonatomic) struct CGVector particlePositionRange;
@property (nonatomic) double particleSpeed;
@property (nonatomic) double particleSpeedRange;
@property (nonatomic) double emissionAngle;
@property (nonatomic) double emissionAngleRange;
@property (nonatomic) double xAcceleration;
@property (nonatomic) double yAcceleration;
@property (nonatomic) double particleBirthRate;
@property (nonatomic) unsigned long long numParticlesToEmit;
@property (nonatomic) double particleLifetime;
@property (nonatomic) double particleLifetimeRange;
@property (nonatomic) double particleRotation;
@property (nonatomic) double particleRotationRange;
@property (nonatomic) double particleRotationSpeed;
@property (nonatomic) struct CGSize particleSize;
@property (nonatomic) double particleScale;
@property (nonatomic) double particleScaleRange;
@property (nonatomic) double particleScaleSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleScaleSequence;
@property (nonatomic) double particleAlpha;
@property (nonatomic) double particleAlphaRange;
@property (nonatomic) double particleAlphaSpeed;
@property (retain, nonatomic) SKKeyframeSequence *particleAlphaSequence;
@property (copy, nonatomic) SKAction *particleAction;
@property (nonatomic) unsigned int fieldBitMask;
@property (weak, nonatomic) SKNode *targetNode;
@property (retain, nonatomic) SKShader *shader;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) double particleZPosition;
@property (nonatomic) unsigned long long particleRenderOrder;
@property (nonatomic) double particleZPositionRange;
@property (nonatomic) double particleZPositionSpeed;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setZPosition:(double)arg1;
- (id)physicsWorld;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)valueForAttributeNamed:(id)arg1;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (void)copyParticlePropertiesToNode:(id)arg1;
- (id)particleSpeedSequence;
- (void)setEmissionDistance:(double)arg1;
- (void)setEmissionDistanceRange:(double)arg1;
- (void)setParticleRotationSequence:(id)arg1;
- (void)setFieldInfluenceSequence:(id)arg1;
- (void)setParticleSpeedSequence:(id)arg1;
- (double)emissionDistance;
- (double)emissionDistanceRange;
- (id)particleRotationSequence;
- (id)fieldInfluenceSequence;
- (_Bool)densityBased;
- (void)setDensityBased:(_Bool)arg1;
- (double)particleDensity;
- (void)setParticleDensity:(double)arg1;
- (_Bool)wantsNewParticles;
- (void)setWantsNewParticles:(_Bool)arg1;
- (_Bool)usesPointSprites;
- (void)setUsesPointSprites:(_Bool)arg1;
- (void)addSubEmitterNode:(id)arg1;
- (id)subEmitterNode;
- (void)setPhysicsWorld:(id)arg1;
- (unsigned int)activeParticleCount;
- (void)resetSimulation;
- (id)initWithMinimumParticleCapacity:(unsigned long long)arg1;
- (id)initWithMinimumParticleCapacity:(unsigned long long)arg1 minimumPositionBufferCapacity:(unsigned long long)arg2;
- (void)advanceSimulationTime:(double)arg1;

@end
