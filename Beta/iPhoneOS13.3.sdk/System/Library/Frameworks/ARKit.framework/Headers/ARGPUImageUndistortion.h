/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLTexture;

@interface ARGPUImageUndistortion : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _pipelineState;
    id <MTLComputePipelineState> _lutGenerationPipelineState;
    id <MTLTexture> _lut;
    CDStruct_8e0628e6 _fisheyeIntrinsics;
    MISSING_TYPE *_fisheyeRadialCoefficients;
    CDStruct_8e0628e6 _rectilinearIntrinsics;
}

- (id)init;
- (void)undistortFisheyeImage:(struct __CVBuffer *)arg1 withFisheyeIntrinsics:(CDStruct_8e0628e6)arg2 withFisheyeRadialCoefficients:(struct __CVBuffer **)arg3 toRectilinearImage:(CDStruct_8e0628e6)arg4 withRectilinearIntrinsics: /* Error: Ran out of types for this method. */;

@end
