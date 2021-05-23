/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineColorAttachmentDescriptorInternal : MTLRenderPipelineColorAttachmentDescriptor

{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)pixelFormat;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setDestinationRGBBlendFactor:(unsigned long long)arg1;
- (void)setSourceRGBBlendFactor:(unsigned long long)arg1;
- (void)setRgbBlendOperation:(unsigned long long)arg1;
- (void)setDestinationAlphaBlendFactor:(unsigned long long)arg1;
- (void)setSourceAlphaBlendFactor:(unsigned long long)arg1;
- (void)setAlphaBlendOperation:(unsigned long long)arg1;
- (void)setBlendingEnabled:(_Bool)arg1;
- (void)setWriteMask:(unsigned long long)arg1;
- (unsigned long long)writeMask;
- (_Bool)isBlendingEnabled;
- (unsigned long long)rgbBlendOperation;
- (unsigned long long)alphaBlendOperation;
- (unsigned long long)sourceRGBBlendFactor;
- (unsigned long long)sourceAlphaBlendFactor;
- (unsigned long long)destinationRGBBlendFactor;
- (unsigned long long)destinationAlphaBlendFactor;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;

@end
