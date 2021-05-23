/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

__attribute__((visibility("hidden")))
@interface VCPCNNMetalContext : NSObject

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLCommandBuffer> _commandBuffer;
}

@property (retain) id <MTLDevice> device;
@property (retain) id <MTLCommandQueue> commandQueue;
@property (retain) id <MTLCommandBuffer> commandBuffer;

+ (_Bool)supportGPU;
+ (_Bool)supportVectorForward;
+ (id)sharedCommandQueue;

- (int)execute;
- (id)initNewContext:(_Bool)arg1;

@end
