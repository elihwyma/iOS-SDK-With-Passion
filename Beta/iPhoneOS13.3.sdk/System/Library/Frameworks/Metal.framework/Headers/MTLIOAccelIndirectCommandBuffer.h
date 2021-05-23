/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLIOAccelResource.h>

@class MTLIOAccelBuffer, MTLIndirectCommandBufferDescriptor;

@protocol MTLIndirectComputeCommandEncoder, MTLIndirectRenderCommandEncoder;

@interface MTLIOAccelIndirectCommandBuffer : MTLIOAccelResource

{
    MTLIOAccelBuffer *_privateICBuffer;
    unsigned long long _maxCommandCount;
    unsigned long long _commandBufferType;
    id <MTLIndirectComputeCommandEncoder> _privateIndirectComputeEncoder;
    id <MTLIndirectRenderCommandEncoder> _privateIndirectRenderEncoder;
    MTLIndirectCommandBufferDescriptor *_descriptor;
    struct MTLIndirectCommandBufferHeader _internalHeader;
}

@property (readonly) MTLIOAccelBuffer *privateICBuffer;
@property (readonly) unsigned long long commandBufferType;
@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) unsigned long long storageMode;
@property (readonly) unsigned long long size;

- (void)dealloc;
- (unsigned long long)uniqueIdentifier;
- (_Bool)isComplete;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)waitUntilComplete;
- (_Bool)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (_Bool)doesAliasResource:(id)arg1;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 maxCommandCount:(unsigned long long)arg3;
- (void)getHeader:(void **)arg1 headerSize:(unsigned long long *)arg2;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (void)resetWithRange:(struct _NSRange)arg1;
- (_Bool)isAliasable;
- (void)makeAliasable;

@end
