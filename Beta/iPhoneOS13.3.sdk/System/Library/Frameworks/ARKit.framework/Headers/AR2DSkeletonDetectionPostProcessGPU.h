/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLTexture;

@interface AR2DSkeletonDetectionPostProcessGPU : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _pipelineStateInterpolate;
    id <MTLComputePipelineState> _pipelineStateMaxFilter;
    id <MTLTexture> _input;
    id <MTLTexture> _intermediate;
    id <MTLTexture> _output;
    float *_outputBuffer;
}

- (id)init;
- (void)dealloc;
- (float *)process:(float *)arg1 counter:(unsigned int *)arg2;

@end
