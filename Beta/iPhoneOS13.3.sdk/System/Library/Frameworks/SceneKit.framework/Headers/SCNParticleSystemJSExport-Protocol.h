/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSArray, NSDictionary, SCNGeometry, SCNParticleSystem;

@protocol SCNParticleSystemJSExport <Swift>

@property (nonatomic) double emissionDuration;
@property (nonatomic) double emissionDurationVariation;
@property (nonatomic) double idleDuration;
@property (nonatomic) double idleDurationVariation;
@property (nonatomic) _Bool loops;
@property (nonatomic) double birthRate;
@property (nonatomic) double birthRateVariation;
@property (nonatomic) double warmupDuration;
@property (retain, nonatomic) SCNGeometry *emitterShape;
@property (nonatomic) long long birthLocation;
@property (nonatomic) long long birthDirection;
@property (nonatomic) double spreadingAngle;
@property (nonatomic) struct SCNVector3 emittingDirection;
@property (nonatomic) struct SCNVector3 orientationDirection;
@property (nonatomic) struct SCNVector3 acceleration;
@property (nonatomic, getter=isLocal) _Bool local;
@property (nonatomic) double particleAngle;
@property (nonatomic) double particleAngleVariation;
@property (nonatomic) double particleVelocity;
@property (nonatomic) double particleVelocityVariation;
@property (nonatomic) double particleAngularVelocity;
@property (nonatomic) double particleAngularVelocityVariation;
@property (nonatomic) double particleLifeSpan;
@property (nonatomic) double particleLifeSpanVariation;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnDying;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnCollision;
@property (retain, nonatomic) SCNParticleSystem *systemSpawnedOnLiving;
@property (retain, nonatomic) id particleImage;
@property (nonatomic) unsigned long long imageSequenceColumnCount;
@property (nonatomic) unsigned long long imageSequenceRowCount;
@property (nonatomic) double imageSequenceInitialFrame;
@property (nonatomic) double imageSequenceInitialFrameVariation;
@property (nonatomic) double imageSequenceFrameRate;
@property (nonatomic) double imageSequenceFrameRateVariation;
@property (nonatomic) long long imageSequenceAnimationMode;
@property (retain, nonatomic) id particleColor;
@property (nonatomic) struct SCNVector4 particleColorVariation;
@property (nonatomic) double particleSize;
@property (nonatomic) double particleSizeVariation;
@property (nonatomic) double particleIntensity;
@property (nonatomic) double particleIntensityVariation;
@property (nonatomic) long long blendMode;
@property (nonatomic, getter=isBlackPassEnabled) _Bool blackPassEnabled;
@property (nonatomic) long long orientationMode;
@property (nonatomic) long long sortingMode;
@property (nonatomic, getter=isLightingEnabled) _Bool lightingEnabled;
@property (nonatomic) _Bool affectedByGravity;
@property (nonatomic) _Bool affectedByPhysicsFields;
@property (nonatomic) _Bool particleDiesOnCollision;
@property (copy, nonatomic) NSArray *colliderNodes;
@property (nonatomic) double particleMass;
@property (nonatomic) double particleMassVariation;
@property (nonatomic) double particleBounce;
@property (nonatomic) double particleBounceVariation;
@property (nonatomic) double particleFriction;
@property (nonatomic) double particleFrictionVariation;
@property (nonatomic) double particleCharge;
@property (nonatomic) double particleChargeVariation;
@property (nonatomic) double dampingFactor;
@property (nonatomic) double speedFactor;
@property (nonatomic) double stretchFactor;
@property (nonatomic) double fresnelExponent;
@property (copy, nonatomic) NSDictionary *propertyControllers;

+ (unsigned short)particleSystem;
+ (unsigned short)particleSystemNamed:inDirectory: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)reset;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)handleEvent:forProperties:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)addModifierForProperties:atStage:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)removeModifiersOfStage: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllModifiers;

@end
