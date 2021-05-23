/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@protocol SCNPhysicsFieldJSExport <Swift>

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

+ (unsigned short)dragField;
+ (unsigned short)vortexField;
+ (unsigned short)noiseFieldWithSmoothness:animationSpeed: /* Error: Ran out of types for this method. */;
+ (unsigned short)turbulenceFieldWithSmoothness:animationSpeed: /* Error: Ran out of types for this method. */;
+ (unsigned short)springField;
+ (unsigned short)electricField;
+ (unsigned short)magneticField;
+ (unsigned short)customFieldWithEvaluationBlock: /* Error: Ran out of types for this method. */;
+ (unsigned short)radialGravityField;
+ (unsigned short)linearGravityField;

- (unsigned short)copy;

@end
