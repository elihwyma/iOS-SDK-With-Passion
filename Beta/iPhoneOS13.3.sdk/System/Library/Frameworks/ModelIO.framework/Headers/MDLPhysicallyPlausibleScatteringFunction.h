/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLScatteringFunction.h>

@class MDLMaterialProperty;

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction

{
    struct PhysicallyPlausibleDistribution *_physicalBSDF;
    MDLMaterialProperty *_subsurface;
    MDLMaterialProperty *_metallic;
    MDLMaterialProperty *_specularAmount;
    MDLMaterialProperty *_specularTint;
    MDLMaterialProperty *_roughness;
    MDLMaterialProperty *_anisotropic;
    MDLMaterialProperty *_anisotropicRotation;
    MDLMaterialProperty *_sheen;
    MDLMaterialProperty *_sheenTint;
    MDLMaterialProperty *_clearcoat;
    MDLMaterialProperty *_clearcoatGloss;
}

@property (nonatomic, readonly) long long version;
@property (retain, nonatomic, readonly) MDLMaterialProperty *subsurface;
@property (retain, nonatomic, readonly) MDLMaterialProperty *metallic;
@property (retain, nonatomic, readonly) MDLMaterialProperty *specularAmount;
@property (retain, nonatomic, readonly) MDLMaterialProperty *specularTint;
@property (retain, nonatomic, readonly) MDLMaterialProperty *roughness;
@property (retain, nonatomic, readonly) MDLMaterialProperty *anisotropic;
@property (retain, nonatomic, readonly) MDLMaterialProperty *anisotropicRotation;
@property (retain, nonatomic, readonly) MDLMaterialProperty *sheen;
@property (retain, nonatomic, readonly) MDLMaterialProperty *sheenTint;
@property (retain, nonatomic, readonly) MDLMaterialProperty *clearcoat;
@property (retain, nonatomic, readonly) MDLMaterialProperty *clearcoatGloss;

- (id)init;

@end
