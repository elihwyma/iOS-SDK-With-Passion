/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARGPUCubemapConverter, ARGPUCubemapHistogram, ARGPUCubemapProjector, ARGPUWarper;

@protocol OS_dispatch_queue;

@interface ARCubemapGenerator : NSObject

{
    ARGPUCubemapProjector *_cubemapProjector;
    ARGPUCubemapConverter *_cubemapConverter;
    ARGPUCubemapHistogram *_cubemapHistogram;
    ARGPUWarper *_gpuWarper;
    NSObject<OS_dispatch_queue> *_cubemapQueue;
}

- (id)init;
- (void)cubemapWithTransform:(CDStruct_14d5dc5e)arg1 extent:(struct ARLabHistogram)arg2 lastHistogram:(vector_f1799d67)arg3 fromPlanes:(struct __CVBuffer *)arg4 cameraImage:(CDStruct_14d5dc5e)arg5 cameraTransform:(CDStruct_8e0628e6)arg6 cameraIntrinsics:(double)arg7 cameraExposure:(float)arg8 cameraExposureOffset:(CDUnknownBlockType)arg9 completionHandler: /* Error: Ran out of types for this method. */;

@end
