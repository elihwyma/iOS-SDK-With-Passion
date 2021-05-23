/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/ImageSaverRegistrator.h>

@protocol MTLComputePipelineState, MTLDeviceSPI, MTLLibrary, MTLResourceGroupSPI, MTLTexture;

@interface CVAFilterInfimumConvolution : ImageSaverRegistrator

{
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _library;
    unsigned long long _width;
    unsigned long long _height;
    id <MTLTexture> _tmpBlurHalf;
    id <MTLTexture> _tmpOutHalf[2];
    id <MTLComputePipelineState> _infimumKernel;
    id <MTLComputePipelineState> _infimumConvolutionKernel;
    id <MTLResourceGroupSPI> _tmpTextureGroup;
}

- (id)initWithDevice:(id)arg1 library:(id)arg2 bufferWidth:(unsigned long long)arg3 bufferHeight:(unsigned long long)arg4 error:(id *)arg5;
- (void)encodeToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3 config:(struct InfimumConvolutionConfig)arg4;
- (void)encodeInfimumToCommandBufferInternal:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 smallSourceTexture:(id)arg3 destinationTexture:(id)arg4 orientation:(float)arg5 majorRadius:(float)arg6 minorRadius:(float)arg7 iterations:(unsigned int)arg8;

@end
