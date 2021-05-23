/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@class CVAFilterBox, CVAFilterHybridResampling, CVAFilterInfimumConvolution, MPSImageBox, NSString;

@protocol MTLComputePipelineState, MTLDeviceSPI, MTLLibrary, MTLResourceGroupSPI, MTLSamplerState, MTLTexture;

@interface CVAFilterGuided : ImageSaverRegistrator

{
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _library;
    CVAFilterBox *_boxFilter;
    CVAFilterHybridResampling *_hybridResampler;
    id <MTLTexture> _gfSrcWithGuide;
    id <MTLTexture> _gfMeanSrcWithGuide;
    id <MTLTexture> _gfSrcGuide;
    id <MTLTexture> _gfMeanSrcGuide;
    id <MTLTexture> _gfRRRGRB;
    id <MTLTexture> _gfGGGBBB;
    id <MTLTexture> _gfMeanRRRGRB;
    id <MTLTexture> _gfMeanGGGBBB;
    id <MTLTexture> _gfTmp;
    id <MTLTexture> _gfTmp2;
    id <MTLTexture> _gfMeanWeight;
    id <MTLTexture> _gfMeanNormalizationFactor;
    id <MTLTexture> _convolutedCoeff;
    id <MTLTexture> _upscaledCoeff;
    id <MTLTexture> _inputAlphaDownsampled;
    id <MTLTexture> _inputAlphaBlurred;
    id <MTLSamplerState> _inputAlphaBlurredSampler;
    id <MTLTexture> _gammaMatteTexture;
    id <MTLTexture> _alphaTexture;
    id <MTLTexture> _hybridUpscalingIntermediateTexture;
    id <MTLTexture> _hybridUpscalingIntermediateR32Texture;
    id <MTLTexture> _srcTexture;
    id <MTLTexture> _lowResGammaMatte;
    id <MTLResourceGroupSPI> _alphaPostprocessingTemporaryTexturesResourceGroup;
    id <MTLResourceGroupSPI> _rg_inputAlphaDownsampled;
    id <MTLResourceGroupSPI> _rg_inputAlphaBlurred;
    id <MTLComputePipelineState> _guidedFilterApplyRGBAKernel;
    id <MTLComputePipelineState> _guidedFilterInvertKernel;
    id <MTLComputePipelineState> _guidedFilterMultiplyKernel;
    id <MTLComputePipelineState> _guidedFilterEmbedGuideKernel;
    id <MTLComputePipelineState> _guidedFilterPremultiplyKernel;
    id <MTLComputePipelineState> _guidedFilterSecondOrderProductsKernel;
    id <MTLComputePipelineState> _guidedFilterRegressionKernel;
    id <MTLComputePipelineState> _postProcessAlphaKernel;
    CVAFilterInfimumConvolution *_infConvolution;
    MPSImageBox *_mpsBox;
    int _smallGuidedFilterKernelSize;
    NSString *_label;
}

@property (readonly) NSString *label;

- (id)initWithDevice:(id)arg1 library:(id)arg2 commandQueue:(id)arg3 textureSize:(CDStruct_da2e99ad)arg4 alphaSize:(CDStruct_da2e99ad)arg5 kernelSize:(int)arg6 infConvolutionDownsampling:(int)arg7 laplacianLimitingDownsampling:(int)arg8 laplacianLimitingBlurSize:(int)arg9 error:(id *)arg10;
- (void)encodeRegressionToCommandBuffer:(id)arg1 inSourceTexture:(id)arg2 inGuidanceTexture:(id)arg3 inWeightTexture:(id)arg4 outCoeffTexture:(id)arg5 epsilon:(float)arg6;
- (void)encodeReconstructToCommandBuffer:(id)arg1 inGuidancePixelBuffer:(struct __CVBuffer *)arg2 inCoeffTexture:(id)arg3 outFilteredTexture:(id)arg4;
- (void)initSourceTexture:(struct __CVBuffer *)arg1;
- (void)encodeFilterApplyToBuffer:(id)arg1 coeff:(id)arg2 source:(id)arg3 destination:(id)arg4;
- (void)encodePostProcessAlphaToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3 alphaMaxLaplacian:(float)arg4 infConvOrientation:(float)arg5 infConvMajorRadius:(float)arg6 infConvMinorRadius:(float)arg7 gammaExponent:(float)arg8 enableInfConvolution:(_Bool)arg9;
- (void)encodeHybridUpSamplingToCommandBuffer:(id)arg1 source:(id)arg2 destination:(id)arg3;

@end
