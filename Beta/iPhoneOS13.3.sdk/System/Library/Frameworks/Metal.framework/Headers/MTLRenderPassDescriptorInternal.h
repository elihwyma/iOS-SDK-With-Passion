/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPassDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor

{
    struct MTLRenderPassDescriptorPrivate _private;
}

+ (id)renderPassDescriptor;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)imageblockSampleLength;
- (void)setImageblockSampleLength:(unsigned long long)arg1;
- (id)colorAttachments;
- (void)setDefaultColorSampleCount:(unsigned long long)arg1;
- (void)setRenderTargetWidth:(unsigned long long)arg1;
- (void)setRenderTargetHeight:(unsigned long long)arg1;
- (unsigned long long)tileWidth;
- (unsigned long long)tileHeight;
- (void)setFineGrainedBackgroundVisibilityEnabled:(_Bool)arg1;
- (id)depthAttachment;
- (id)stencilAttachment;
- (void)setVisibilityResultBuffer:(id)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;
- (void)setSamplePositions:(const CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)getSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)threadgroupMemoryLength;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1;
- (void)setTileWidth:(unsigned long long)arg1;
- (void)setTileHeight:(unsigned long long)arg1;
- (void)setDepthAttachment:(id)arg1;
- (void)setStencilAttachment:(id)arg1;
- (id)visibilityResultBuffer;
- (void)setRenderTargetArrayLength:(unsigned long long)arg1;
- (unsigned long long)renderTargetArrayLength;
- (unsigned long long)renderTargetWidth;
- (unsigned long long)renderTargetHeight;
- (unsigned long long)defaultColorSampleCount;
- (_Bool)fineGrainedBackgroundVisibilityEnabled;
- (void)setDitherEnabled:(_Bool)arg1;
- (_Bool)isDitherEnabled;
- (void)setOpenGLModeEnabled:(_Bool)arg1;
- (_Bool)openGLModeEnabled;
- (void)setDefaultRasterSampleCount:(unsigned long long)arg1;
- (unsigned long long)defaultRasterSampleCount;
- (id)rasterizationRateMap;
- (void)setRasterizationRateMap:(id)arg1;
- (_Bool)validate:(id)arg1 width:(unsigned long long *)arg2 height:(unsigned long long *)arg3;

@end
