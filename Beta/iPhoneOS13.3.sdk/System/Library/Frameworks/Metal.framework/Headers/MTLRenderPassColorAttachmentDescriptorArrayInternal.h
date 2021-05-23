/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPassColorAttachmentDescriptorArray.h>

@class MTLRenderPassColorAttachmentDescriptorInternal, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorArrayInternal : MTLRenderPassColorAttachmentDescriptorArray

{
    MTLRenderPassColorAttachmentDescriptorInternal *_color_descriptors[8];
    MTLRenderPassDepthAttachmentDescriptorInternal *_depth_descriptor;
    MTLRenderPassStencilAttachmentDescriptorInternal *_stencil_descriptor;
}

- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)_descriptorAtIndex:(unsigned long long)arg1;

@end
