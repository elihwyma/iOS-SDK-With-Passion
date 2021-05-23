/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyMaterial : GLKEffectProperty

{
    union _GLKVector4 _ambientColor;
    union _GLKVector4 _diffuseColor;
    union _GLKVector4 _specularColor;
    union _GLKVector4 _emissiveColor;
    float _shininess;
    int _ambientColorLoc;
    int _diffuseColorLoc;
    int _specularColorLoc;
    int _emissiveColorLoc;
    int _shininessLoc;
    unsigned long long *_effectDirtyUniforms;
    struct GLKBigInt_s _colorMaterialEnabledMask;
}

@property (nonatomic) int _ambientColorLoc;
@property (nonatomic) int _diffuseColorLoc;
@property (nonatomic) int _specularColorLoc;
@property (nonatomic) int _emissiveColorLoc;
@property (nonatomic) int _shininessLoc;
@property (nonatomic) unsigned long long *effectDirtyUniforms;
@property (nonatomic) struct GLKBigInt_s _colorMaterialEnabledMask;
@property (nonatomic) union _GLKVector4 ambientColor;
@property (nonatomic) union _GLKVector4 diffuseColor;
@property (nonatomic) union _GLKVector4 specularColor;
@property (nonatomic) union _GLKVector4 emissiveColor;
@property (nonatomic) float shininess;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)bind;
- (void)dirtyAllUniforms;
- (_Bool)includeVshShaderTextForRootNode:(id)arg1;
- (_Bool)includeFshShaderTextForRootNode:(id)arg1;
- (void)initializeMasks;
- (void)setShaderBindings;

@end
