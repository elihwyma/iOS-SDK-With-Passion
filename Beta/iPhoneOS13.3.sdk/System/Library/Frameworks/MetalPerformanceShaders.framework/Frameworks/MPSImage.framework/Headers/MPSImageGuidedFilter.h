/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@class MPSImageBilinearScale, MPSImageBox, MPSImageLanczosScale;

@interface MPSImageGuidedFilter : MPSKernel

{
    unsigned long long _kernelDiameter;
    float _epsilon;
    float _reconstructScale;
    float _reconstructOffset;
    _Bool _rescaleCoefficients;
    _Bool _reconstructionCoefficientsSampleBicubic;
    MPSImageBox *_boxFilter;
    MPSImageLanczosScale *_lanczosScaler;
    MPSImageBilinearScale *_bilinearScaler;
}

@property (nonatomic) _Bool rescaleCoefficients;
@property (nonatomic) _Bool reconstructionCoefficientsSampleBicubic;
@property (nonatomic, readonly) unsigned long long kernelDiameter;
@property (nonatomic) float epsilon;
@property (nonatomic) float reconstructScale;
@property (nonatomic) float reconstructOffset;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelDiameter:(unsigned long long)arg2;
- (void)encodeRegressionToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 guidanceTexture:(id)arg3 weightsTexture:(id)arg4 destinationCoefficientsTexture:(id)arg5;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)initFilterInfoWithDevice:(id)arg1;
- (void)encodeReconstructionToCommandBuffer:(id)arg1 guidanceTexture:(id)arg2 coefficientsTexture:(id)arg3 destinationTexture:(id)arg4;

@end
