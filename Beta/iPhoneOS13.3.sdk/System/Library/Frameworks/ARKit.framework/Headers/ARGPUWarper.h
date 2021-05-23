/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLDevice, MTLRenderPipelineState;

@interface ARGPUWarper : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderPipelineState> _homographyPipelineState;
}

- (id)init;
- (void)warpCameraImage:(struct __CVBuffer *)arg1 withExposureOffset:(float)arg2 withCameraIntrinsics:(CDStruct_8e0628e6)arg3 withCameraTransform:(CDStruct_14d5dc5e)arg4 toPlane:(struct ARTexturedPlane)arg5 withLoadAction:(unsigned long long)arg6 synchronous:(_Bool)arg7;
- (void)warpPlane:(struct ARTexturedPlane)arg1 toPlane:(struct ARTexturedPlane)arg2 withLoadAction:(unsigned long long)arg3 synchronous:(_Bool)arg4;

@end
