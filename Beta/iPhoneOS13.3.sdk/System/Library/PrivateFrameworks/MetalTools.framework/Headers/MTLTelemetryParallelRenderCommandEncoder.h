/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor, MTLTelemetryCommandBuffer, MTLTelemetryDevice;

@interface MTLTelemetryParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder

{
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    MTLRenderPassDescriptor *_descriptor;
    unsigned int _encoderCount;
}

- (void)endEncoding;
- (id)renderCommandEncoder;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;

@end
