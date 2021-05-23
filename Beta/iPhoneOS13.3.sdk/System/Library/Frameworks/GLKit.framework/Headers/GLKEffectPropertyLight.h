/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKEffectProperty.h>

@class GLKEffectPropertyTransform;

@interface GLKEffectPropertyLight : GLKEffectProperty

{
    unsigned char _enabled;
    union _GLKVector4 _position;
    union _GLKVector4 _ambientColor;
    union _GLKVector4 _diffuseColor;
    union _GLKVector4 _specularColor;
    union _GLKVector3 _spotDirection;
    float _spotExponent;
    float _spotCutoff;
    float _constantAttenuation;
    float _linearAttenuation;
    float _quadraticAttenuation;
    GLKEffectPropertyTransform *_transform;
    unsigned char _positionEyeStale;
    unsigned char _firstLight;
    float _spotCutoffDegrees;
    int _positionEyeLoc;
    int _ambientLoc;
    int _diffuseLoc;
    int _specularLoc;
    int _normalizedSpotDirectionEyeLoc;
    int _spotExponentLoc;
    int _spotCutoffLoc;
    int _constantAttenuationLoc;
    int _linearAttenuationLoc;
    int _quadraticAttenuationLoc;
    int _normalizeLoc;
    int _ambientTermLoc;
    int _lightIndex;
    int _lightingType;
    unsigned long long *_effectDirtyUniforms;
    union _GLKVector3 _normalizedSpotDirectionEye;
    union _GLKVector4 _positionEye;
    struct GLKBigInt_s _allVshMasks;
    struct GLKBigInt_s _allFshMasks;
}

@property (nonatomic) union _GLKVector4 positionEye;
@property (nonatomic) union _GLKVector3 normalizedSpotDirectionEye;
@property (nonatomic) float spotCutoffDegrees;
@property (nonatomic) int positionEyeLoc;
@property (nonatomic) int ambientLoc;
@property (nonatomic) int diffuseLoc;
@property (nonatomic) int specularLoc;
@property (nonatomic) int normalizedSpotDirectionEyeLoc;
@property (nonatomic) int spotExponentLoc;
@property (nonatomic) int spotCutoffLoc;
@property (nonatomic) int constantAttenuationLoc;
@property (nonatomic) int linearAttenuationLoc;
@property (nonatomic) int quadraticAttenuationLoc;
@property (nonatomic) int normalizeLoc;
@property (nonatomic) int ambientTermLoc;
@property (nonatomic) int lightIndex;
@property (nonatomic) unsigned long long *effectDirtyUniforms;
@property (nonatomic) int lightingType;
@property (nonatomic) unsigned char positionEyeStale;
@property (nonatomic, readonly) unsigned char isSpot;
@property (nonatomic, readonly) unsigned char isAttenuated;
@property (nonatomic) unsigned char firstLight;
@property (nonatomic, readonly) struct GLKBigInt_s allVshMasks;
@property (nonatomic, readonly) struct GLKBigInt_s allFshMasks;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) union _GLKVector4 position;
@property (nonatomic) union _GLKVector4 ambientColor;
@property (nonatomic) union _GLKVector4 diffuseColor;
@property (nonatomic) union _GLKVector4 specularColor;
@property (nonatomic) union _GLKVector3 spotDirection;
@property (nonatomic) float spotExponent;
@property (nonatomic) float spotCutoff;
@property (nonatomic) float constantAttenuation;
@property (nonatomic) float linearAttenuation;
@property (nonatomic) float quadraticAttenuation;
@property (retain, nonatomic) GLKEffectPropertyTransform *transform;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)dealloc;
- (id)description;
- (void)setNormalize:(unsigned char)arg1;
- (id)initWithTransform:(id)arg1 lightingType:(int)arg2 firstLight:(unsigned char)arg3;
- (void)bind;
- (void)dirtyAllUniforms;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (void)initializeMasks;
- (void)setShaderBindings;
- (void)setGLDefaults;

@end
