/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLTileRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor

{
    struct MTLTileRenderPipelineDescriptorPrivate _private;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reset;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)colorAttachments;
- (void)setTileFunction:(id)arg1;
- (void)setThreadgroupSizeMatchesTileSize:(_Bool)arg1;
- (unsigned long long)sampleCount;
- (void)setSampleCount:(unsigned long long)arg1;
- (_Bool)threadgroupSizeMatchesTileSize;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (unsigned long long)rasterSampleCount;
- (unsigned long long)colorSampleCount;
- (void)setColorSampleCount:(unsigned long long)arg1;
- (id)tileBuffers;
- (id)tileFunction;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (void)validateWithDevice:(id)arg1;

@end
