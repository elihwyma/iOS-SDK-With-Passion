/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface ARGPUSphericalBlur : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _cubemapBlurPipelineState;
    _Bool _gpuFamilyAtleast4;
}

- (id)init;
- (id)blurCubemapTexture:(id)arg1 roughness:(id)arg2 rotation:(CDStruct_8e0628e6)arg3;

@end
