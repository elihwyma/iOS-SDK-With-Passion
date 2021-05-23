/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassLiveRenderedImageSet : PKPassImageSet

{
    PKImage *_diffuseMaterialPropertyImage;
    PKImage *_ambientMaterialPropertyImage;
    PKImage *_specularMaterialPropertyImage;
    PKImage *_normalMaterialPropertyImage;
    PKImage *_reflectiveMaterialPropertyImage;
    PKImage *_emissionMaterialPropertyImage;
    PKImage *_transparentMaterialPropertyImage;
    PKImage *_multiplyMaterialPropertyImage;
    PKImage *_displacementMaterialPropertyImage;
    PKImage *_ambientOcclusionMaterialPropertyImage;
    PKImage *_selfIlluminationMaterialPropertyImage;
    PKImage *_metalnessMaterialPropertyImage;
    PKImage *_roughnessMaterialPropertyImage;
    PKImage *_overlayMaterialPropertyImage;
}

@property (retain, nonatomic) PKImage *diffuseMaterialPropertyImage;
@property (retain, nonatomic) PKImage *ambientMaterialPropertyImage;
@property (retain, nonatomic) PKImage *specularMaterialPropertyImage;
@property (retain, nonatomic) PKImage *normalMaterialPropertyImage;
@property (retain, nonatomic) PKImage *reflectiveMaterialPropertyImage;
@property (retain, nonatomic) PKImage *emissionMaterialPropertyImage;
@property (retain, nonatomic) PKImage *transparentMaterialPropertyImage;
@property (retain, nonatomic) PKImage *multiplyMaterialPropertyImage;
@property (retain, nonatomic) PKImage *displacementMaterialPropertyImage;
@property (retain, nonatomic) PKImage *ambientOcclusionMaterialPropertyImage;
@property (retain, nonatomic) PKImage *selfIlluminationMaterialPropertyImage;
@property (retain, nonatomic) PKImage *metalnessMaterialPropertyImage;
@property (retain, nonatomic) PKImage *roughnessMaterialPropertyImage;
@property (retain, nonatomic) PKImage *overlayMaterialPropertyImage;

+ (_Bool)supportsSecureCoding;
+ (unsigned int)currentVersion;
+ (_Bool)shouldCache;
+ (long long)imageSetType;
+ (id)archiveName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (void)preheatImages;

@end
