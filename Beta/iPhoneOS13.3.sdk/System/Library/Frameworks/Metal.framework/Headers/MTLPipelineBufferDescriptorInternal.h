/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLPipelineBufferDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorInternal : MTLPipelineBufferDescriptor

{
    struct MTLPipelineBufferDescriptorPrivate _private;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isDefault;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLPipelineBufferDescriptorPrivate *)_descriptorPrivate;
- (unsigned long long)mutability;
- (void)setMutability:(unsigned long long)arg1;

@end
