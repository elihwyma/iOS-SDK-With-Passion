/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray, NSData, NSMutableDictionary, NSString, NSURL, SCNMaterialProperty, SCNOrderedDictionary, SCNTechnique;

@interface SCNLight : NSObject

{
    struct __C3DLight *_light;
    unsigned int _isPresentationInstance:1;
    unsigned int _castsShadow:1;
    unsigned int _usesDeferredShadows:1;
    unsigned int _usesModulatedMode:1;
    unsigned int _baked:1;
    unsigned int _shouldBakeDirectLighting:1;
    unsigned int _shouldBakeIndirectLighting:1;
    unsigned int _automaticallyAdjustsShadowProjection:1;
    unsigned int _forcesBackFaceCasters:1;
    unsigned int _sampleDistributedShadowMaps:1;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSString *_name;
    NSString *_type;
    id _color;
    id _shadowColor;
    float _shadowRadius;
    double _intensity;
    double _temperature;
    double _orthographicScale;
    struct CGSize _shadowMapSize;
    unsigned long long _categoryBitMask;
    unsigned char _shadowSampleCount;
    unsigned char _shadowCascadeCount;
    double _maximumShadowDistance;
    double _shadowCascadeSplittingFactor;
    double _cascadeDebugFactor;
    double _zNear;
    double _zFar;
    double _shadowBias;
    long long _probeType;
    long long _probeUpdateType;
    _Bool _parallaxCorrectionEnabled;
    MISSING_TYPE *_probeExtents;
    MISSING_TYPE *_probeOffset;
    MISSING_TYPE *_parallaxExtentsFactor;
    MISSING_TYPE *_parallaxCenterOffset;
    float _attenuationStartDistance;
    float _attenuationEndDistance;
    float _attenuationFalloffExponent;
    float _spotInnerAngle;
    float _spotOuterAngle;
    float _spotFalloffExponent;
    SCNMaterialProperty *_gobo;
    NSURL *_IESProfileURL;
    SCNTechnique *_technique;
    NSData *_sphericalHarmonics;
    SCNMaterialProperty *_probeEnvironment;
    long long _areaType;
    MISSING_TYPE *_areaExtents;
    NSArray *_areaPolygonVertices;
    _Bool _drawsArea;
    _Bool _doubleSided;
}

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
@property (retain, nonatomic) NSURL *IESProfileURL;
@property (copy, nonatomic, readonly) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) long long probeType;
@property (nonatomic) long long probeUpdateType;
@property (nonatomic) MISSING_TYPE *probeExtents;
@property (nonatomic) MISSING_TYPE *probeOffset;
@property (nonatomic) _Bool parallaxCorrectionEnabled;
@property (nonatomic) MISSING_TYPE *parallaxExtentsFactor;
@property (nonatomic) MISSING_TYPE *parallaxCenterOffset;
@property (nonatomic, readonly) SCNMaterialProperty *probeEnvironment;
@property (nonatomic) long long areaType;
@property (nonatomic) MISSING_TYPE *areaExtents;
@property (copy, nonatomic) NSArray *areaPolygonVertices;
@property (nonatomic) _Bool drawsArea;
@property (nonatomic) _Bool doubleSided;
@property (nonatomic, readonly) SCNMaterialProperty *gobo;
@property (nonatomic) unsigned long long categoryBitMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *animationKeys;

+ (_Bool)supportsSecureCoding;
+ (id)light;
+ (id)lightWithMDLLight:(id)arg1;
+ (id)lightWithMDLLightProbe:(id)arg1;
+ (id)lightWithLightRef:(struct __C3DLight *)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setIdentifier:(id)arg1;
- (id)scene;
- (void)addAnimation:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)removeAllAnimations;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (const void *)__CFObject;
- (struct __C3DScene *)sceneRef;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationPlayerForKey:(id)arg1;
- (struct __C3DAnimationManager *)animationManager;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)pauseAnimationForKey:(id)arg1;
- (void)resumeAnimationForKey:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_syncObjCAnimations;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnBindings;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)unbindAnimatablePath:(id)arg1;
- (void)removeAllBindings;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (void)_syncObjCModel;
- (id)initWithLightRef:(struct __C3DLight *)arg1;
- (void)_syncEntityObjCModel;
- (id)initPresentationLightWithLightRef:(struct __C3DLight *)arg1;
- (id)presentationLight;
- (void)setSpotFalloffExponent:(double)arg1;
- (double)spotFalloffExponent;
- (void)_resyncObjCModelOfPerTypeParameters;
- (_Bool)usesDeferredShadows;
- (_Bool)usesModulatedMode;
- (void)setUsesDeferredShadows:(_Bool)arg1;
- (void)setUsesModulatedMode:(_Bool)arg1;
- (void)setIESProfileURL:(id)arg1 resolvedURL:(id)arg2;
- (void)_customEncodingOfSCNLight:(id)arg1;
- (void)_customDecodingOfSCNLight:(id)arg1;
- (void)setBaked:(_Bool)arg1;
- (void)setShouldBakeDirectLighting:(_Bool)arg1;
- (void)setShouldBakeIndirectLighting:(_Bool)arg1;
- (void)set_sphericalHarmonics:(id)arg1;
- (void)setTechnique:(id)arg1;
- (void)_didDecodeSCNLight:(id)arg1;
- (struct __C3DLight *)lightRef;
- (id)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2;
- (id)_sphericalHarmonics;
- (_Bool)shouldBakeDirectLighting;
- (_Bool)shouldBakeIndirectLighting;
- (_Bool)isBaked;
- (id)technique;
- (_Bool)forceBackFaceCasters;
- (void)setForceBackFaceCasters:(_Bool)arg1;
- (_Bool)adjustsShadowProjection;
- (void)setAdjustsShadowProjection:(_Bool)arg1;
- (double)_shadowCascadeDebugFactor;
- (void)set_shadowCascadeDebugFactor:(double)arg1;
- (_Bool)hasGobo;

@end
