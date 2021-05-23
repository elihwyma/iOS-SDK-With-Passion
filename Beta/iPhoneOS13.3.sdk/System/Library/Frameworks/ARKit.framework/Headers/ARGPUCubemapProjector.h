/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLDepthStencilState, MTLDevice, MTLRenderPipelineState;

@interface ARGPUCubemapProjector : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderPipelineState> _cubemapPipelineStateSRGB;
    id <MTLRenderPipelineState> _cubemapPipelineStateHDR;
    id <MTLDepthStencilState> _cubemapDepthState;
}

- (id)init;
- (void)projectToCube:(id)arg1 transformWorldFromCube:(CDStruct_14d5dc5e)arg2 planes:(const vector_f1799d67 *)arg3 blend:(_Bool)arg4;

@end
