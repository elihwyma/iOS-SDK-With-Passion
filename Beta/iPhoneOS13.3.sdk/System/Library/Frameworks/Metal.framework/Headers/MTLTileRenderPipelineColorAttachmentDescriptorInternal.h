/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLTileRenderPipelineColorAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineColorAttachmentDescriptorInternal : MTLTileRenderPipelineColorAttachmentDescriptor

{
    struct MTLTileRenderPipelineAttachmentDescriptorPrivate _private;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLTileRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;

@end
