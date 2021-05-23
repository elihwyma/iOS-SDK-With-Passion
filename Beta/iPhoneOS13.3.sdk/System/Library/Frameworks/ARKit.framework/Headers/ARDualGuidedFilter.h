/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MPSImageGuidedFilter;

@protocol MTLComputePipelineState, MTLDevice, MTLLibrary, MTLTexture;

@interface ARDualGuidedFilter : NSObject

{
    id <MTLDevice> _device;
    MPSImageGuidedFilter *_guidedFilter;
    id <MTLLibrary> _mattingLibrary;
    id <MTLComputePipelineState> _boxblurVPSO;
    id <MTLComputePipelineState> _boxblurHPSO;
    id <MTLComputePipelineState> _erodeVPSO;
    id <MTLComputePipelineState> _erodeHPSO;
    id <MTLComputePipelineState> _invertPSO;
    id <MTLComputePipelineState> _smoothCoeficients;
    id <MTLComputePipelineState> _getConfidence;
    id <MTLComputePipelineState> _combineFGBGStencil;
    unsigned long long _uncertaintyRadius;
    unsigned long long _erodeRadius;
    id <MTLTexture> _overlayCoefficentsNonBlurredBG;
    id <MTLTexture> _overlayCoefficentsNonBlurred;
    id <MTLTexture> _overlayStencilDownsampled;
    id <MTLTexture> _overlayStencilDownsampledBG;
    id <MTLTexture> _smoothedCoefficientsTextureFG;
    id <MTLTexture> _smoothedCoefficientsTextureBG;
    id <MTLTexture> _erodeIntermediate;
    id <MTLTexture> _blurIntermediate;
    id <MTLTexture> _confidenceMap;
    id <MTLTexture> _combinedFGBG;
    _Bool _usingSmoothing;
    _Bool _useSoftGuidedFilter;
    _Bool _enableDoubleMLResolutionMatting;
    unsigned int _width;
    unsigned int _height;
    double _epsilon;
}

@property (nonatomic) unsigned long long uncertaintyRadius;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) double epsilon;

- (id)initWithDevice:(id)arg1 useSmoothing:(_Bool)arg2;
- (void)encodeDualCoefficients:(id)arg1 guide:(id)arg2 stencil:(id)arg3 coefficientsTextureFG:(id)arg4 coefficientsTextureBG:(id)arg5;
- (void)setupBuffersWithWidth:(unsigned int)arg1 andHeight:(unsigned int)arg2;
- (id)encodeBoxBlurToCommandBuffer:(id)arg1 input:(id)arg2 intermediate:(id)arg3 output:(id)arg4;

@end
