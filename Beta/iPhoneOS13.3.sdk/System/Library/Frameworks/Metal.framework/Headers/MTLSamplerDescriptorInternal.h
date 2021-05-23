/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLSamplerDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLSamplerDescriptorInternal : MTLSamplerDescriptor

{
    struct MTLSamplerDescriptorPrivate _private;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setSAddressMode:(unsigned long long)arg1;
- (void)setTAddressMode:(unsigned long long)arg1;
- (void)setNormalizedCoordinates:(_Bool)arg1;
- (void)setMaxAnisotropy:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setRAddressMode:(unsigned long long)arg1;
- (void)setLodMinClamp:(float)arg1;
- (void)setLodMaxClamp:(float)arg1;
- (void)setCompareFunction:(unsigned long long)arg1;
- (void)setSupportArgumentBuffers:(_Bool)arg1;
- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (unsigned long long)minFilter;
- (unsigned long long)magFilter;
- (unsigned long long)mipFilter;
- (id)formattedDescription:(unsigned long long)arg1;
- (_Bool)forceResourceIndex;
- (void)setForceResourceIndex:(_Bool)arg1;
- (const struct MTLSamplerDescriptorPrivate *)descriptorPrivate;
- (_Bool)lodAverage;
- (void)setLodAverage:(_Bool)arg1;
- (unsigned long long)maxAnisotropy;
- (unsigned long long)sAddressMode;
- (unsigned long long)tAddressMode;
- (unsigned long long)rAddressMode;
- (_Bool)normalizedCoordinates;
- (float)lodMinClamp;
- (float)lodMaxClamp;
- (float)lodBias;
- (void)setLodBias:(float)arg1;
- (unsigned long long)compareFunction;
- (_Bool)supportArgumentBuffers;

@end
