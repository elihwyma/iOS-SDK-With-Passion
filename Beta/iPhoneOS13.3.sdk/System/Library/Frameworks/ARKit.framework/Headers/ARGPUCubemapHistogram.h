/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface ARGPUCubemapHistogram : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _cubemapHistogramPipelineState;
    _Bool _gpuFamilyAtleast4;
}

- (id)init;
- (struct ARLabHistogram)colorHistogramForCubemap:(id)arg1;

@end
