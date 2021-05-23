/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

@class MTLIndirectCommandBufferDescriptor, NSMutableArray;

@protocol MTLIndirectCommandBuffer;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer

{
    NSMutableArray *_optimizedRangeList;
    MTLIndirectCommandBufferDescriptor *_desc;
    unsigned long long _maxCommandCount;
    id <MTLIndirectCommandBuffer> _iCB;
    _Bool isRender;
}

@property (readonly) NSMutableArray *optimizedRangeList;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;

- (void)dealloc;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5;

@end
