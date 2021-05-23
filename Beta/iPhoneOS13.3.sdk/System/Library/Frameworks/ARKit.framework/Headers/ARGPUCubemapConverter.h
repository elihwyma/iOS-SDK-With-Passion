/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface ARGPUCubemapConverter : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _cubemapToLatLongPipelineState;
    id <MTLComputePipelineState> _latLongToCubemapPipelineState;
    _Bool _gpuFamilyAtleast4;
}

- (id)init;
- (id)equirectangularTextureFromCubemapTexture:(id)arg1 rotation:(CDStruct_8e0628e6)arg2 size:(unsigned long long)arg3;
- (id)cubemapTextureFromEquirectangularTexture:(id)arg1 rotation:(CDStruct_8e0628e6)arg2 size:(unsigned long long)arg3;

@end
