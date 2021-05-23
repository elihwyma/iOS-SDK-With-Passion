/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <AppleCVAPhoto/ImageSaverAndFileConfigRegistrator.h>

@class NSObject;

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDeviceSPI, MTLLibrary, OS_dispatch_queue, OS_dispatch_semaphore;

@interface CVAFilterAlphaBlend : ImageSaverAndFileConfigRegistrator

{
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _library;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _alphaBlend_Kernel;
    NSObject<OS_dispatch_queue> *_synchronousRenderingCallbackQueue;
    NSObject<OS_dispatch_semaphore> *_renderingCallbackSemaphore;
}

- (id)initWithMetalContext:(struct CVAPhotoMetalContext *)arg1;
- (void)encodeAlphaBlendToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(float)arg5;
- (pair_c8ca534a)getTexturePlanesFromPixelBuffer:(struct __CVBuffer *)arg1 usage:(unsigned long long)arg2;
- (void)alphaBlendPixelBuffer:(RetainPtr_64b82504)arg1 inPixelBufferSecond:(RetainPtr_64b82504)arg2 outPixelBuffer:(RetainPtr_64b82504)arg3 alpha:(float)arg4 callbackQueue:(id)arg5 callback:(CDUnknownBlockType)arg6;

@end
