/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLStencilDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLStencilDescriptorInternal : MTLStencilDescriptor

{
    struct MTLStencilDescriptorPrivate _private;
}

@property (readonly) const struct MTLStencilDescriptorPrivate *stencilPrivate;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setWriteMask:(unsigned int)arg1;
- (unsigned int)writeMask;
- (void)setStencilFailureOperation:(unsigned long long)arg1;
- (void)setDepthFailureOperation:(unsigned long long)arg1;
- (void)setDepthStencilPassOperation:(unsigned long long)arg1;
- (void)setStencilCompareFunction:(unsigned long long)arg1;
- (void)setReadMask:(unsigned int)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)stencilCompareFunction;
- (unsigned long long)stencilFailureOperation;
- (unsigned long long)depthFailureOperation;
- (unsigned long long)depthStencilPassOperation;
- (unsigned int)readMask;

@end
