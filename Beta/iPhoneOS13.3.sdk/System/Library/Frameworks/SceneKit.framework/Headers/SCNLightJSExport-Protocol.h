/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSString, NSURL, SCNLight, SCNMaterialProperty;

@protocol SCNLightJSExport <Swift>

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) id color;
@property (nonatomic) double temperature;
@property (nonatomic) double intensity;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool castsShadow;
@property (retain, nonatomic) id shadowColor;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize shadowMapSize;
@property (nonatomic) unsigned long long shadowSampleCount;
@property (nonatomic) long long shadowMode;
@property (nonatomic) double shadowBias;
@property (nonatomic) _Bool automaticallyAdjustsShadowProjection;
@property (nonatomic) double maximumShadowDistance;
@property (nonatomic) _Bool forcesBackFaceCasters;
@property (nonatomic) _Bool sampleDistributedShadowMaps;
@property (nonatomic) unsigned long long shadowCascadeCount;
@property (nonatomic) double shadowCascadeSplittingFactor;
@property (nonatomic) double orthographicScale;
@property (nonatomic) double zNear;
@property (nonatomic) double zFar;
@property (nonatomic) double attenuationStartDistance;
@property (nonatomic) double attenuationEndDistance;
@property (nonatomic) double attenuationFalloffExponent;
@property (nonatomic) double spotInnerAngle;
@property (nonatomic) double spotOuterAngle;
@property (nonatomic, readonly) SCNMaterialProperty *gobo;
@property (retain, nonatomic) NSURL *IESProfileURL;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic, readonly) SCNLight *presentationLight;

+ (unsigned short)light;
+ (unsigned short)lightWithMDLLight: /* Error: Ran out of types for this method. */;

- (unsigned short)copy;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKeyPath: /* Error: Ran out of types for this method. */;
- (unsigned short)animationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)addAnimation:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllAnimations;
- (unsigned short)animationKeys;
- (unsigned short)attributeForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)setAttribute:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseAnimationForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeAnimationForKey: /* Error: Ran out of types for this method. */;

@end
