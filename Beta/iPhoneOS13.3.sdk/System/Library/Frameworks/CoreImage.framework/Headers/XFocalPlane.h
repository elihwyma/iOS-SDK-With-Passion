/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@protocol MTLBuffer, MTLComputePipelineState, MTLDevice, MTLLibrary;

__attribute__((visibility("hidden")))
@interface XFocalPlane : NSObject

{
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    id <MTLComputePipelineState> _disparityRefinementPreprocessingKernel;
    id <MTLComputePipelineState> _minMax0_kernel;
    id <MTLComputePipelineState> _minMax1_kernel;
    id <MTLComputePipelineState> _minMax2_kernel;
    id <MTLComputePipelineState> _calc_kernel;
    id <MTLBuffer> _minMaxAtomic_buf;
    id <MTLBuffer> _minMaxResult_buf;
    id <MTLBuffer> _zeroShiftResult_buf;
    CDStruct_6cae9ebd _config;
}

@property CDStruct_6cae9ebd config;
@property (readonly) id <MTLBuffer> minMaxAtomic_buf;
@property (readonly) id <MTLBuffer> minMaxResult_buf;
@property (readonly) id <MTLBuffer> zeroShiftResult_buf;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (int)allocateResources;
- (int)encodeDisparityRefinementPreprocessingOn:(id)arg1 alphaTexture:(id)arg2 inputDisparityTexture:(id)arg3 outputDisparityTexture:(id)arg4 configuration:(CDStruct_ee2a85d1)arg5;
- (void)releaseResources;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)encodeFocalPlaneCalcOn:(id)arg1 disparityTexture:(id)arg2;
- (int)encodeMinMaxOn:(id)arg1 inputTexture:(id)arg2;

@end
