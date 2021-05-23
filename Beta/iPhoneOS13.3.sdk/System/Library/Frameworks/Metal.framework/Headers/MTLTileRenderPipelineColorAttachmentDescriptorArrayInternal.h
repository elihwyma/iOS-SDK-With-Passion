/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLTileRenderPipelineColorAttachmentDescriptorArray.h>

@class MTLTileRenderPipelineColorAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineColorAttachmentDescriptorArrayInternal : MTLTileRenderPipelineColorAttachmentDescriptorArray

{
    MTLTileRenderPipelineColorAttachmentDescriptorInternal *_descriptors[8];
}

- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)_descriptorAtIndex:(unsigned long long)arg1;

@end
