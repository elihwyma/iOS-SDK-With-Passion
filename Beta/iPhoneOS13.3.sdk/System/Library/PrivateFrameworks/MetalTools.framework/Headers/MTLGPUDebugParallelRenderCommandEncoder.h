/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLGPUDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder

{
    unsigned int _encoderID;
    MTLRenderPassDescriptor *_descriptor;
}

- (void)dealloc;
- (id)renderCommandEncoder;
- (id)initWithParallelRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;

@end
