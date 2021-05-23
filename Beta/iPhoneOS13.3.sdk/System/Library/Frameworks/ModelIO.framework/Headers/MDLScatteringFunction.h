/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <Foundation/NSObject.h>

@class MDLMaterialProperty, NSString;

@interface MDLScatteringFunction : NSObject

{
    NSString *_name;
    MDLMaterialProperty *_baseColor;
    struct unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::__1::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> _bsdf;
    MDLMaterialProperty *_emission;
    MDLMaterialProperty *_specular;
    MDLMaterialProperty *_materialIndexOfRefraction;
    MDLMaterialProperty *_interfaceIndexOfRefraction;
    MDLMaterialProperty *_normal;
    MDLMaterialProperty *_ambientOcclusion;
    MDLMaterialProperty *_ambientOcclusionScale;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic, readonly) MDLMaterialProperty *baseColor;
@property (retain, nonatomic, readonly) MDLMaterialProperty *emission;
@property (retain, nonatomic, readonly) MDLMaterialProperty *specular;
@property (retain, nonatomic, readonly) MDLMaterialProperty *materialIndexOfRefraction;
@property (retain, nonatomic, readonly) MDLMaterialProperty *interfaceIndexOfRefraction;
@property (retain, nonatomic, readonly) MDLMaterialProperty *normal;
@property (retain, nonatomic, readonly) MDLMaterialProperty *ambientOcclusion;
@property (retain, nonatomic, readonly) MDLMaterialProperty *ambientOcclusionScale;

- (id)init;
- (id).cxx_construct;

@end
