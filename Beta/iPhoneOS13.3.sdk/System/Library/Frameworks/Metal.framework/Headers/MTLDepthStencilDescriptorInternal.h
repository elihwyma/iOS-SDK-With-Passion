/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLDepthStencilDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor

{
    struct MTLDepthStencilDescriptorPrivate _private;
}

@property (readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setDepthCompareFunction:(unsigned long long)arg1;
- (void)setDepthWriteEnabled:(_Bool)arg1;
- (void)setFrontFaceStencil:(id)arg1;
- (void)setBackFaceStencil:(id)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)frontFaceStencil;
- (id)backFaceStencil;
- (unsigned long long)depthCompareFunction;
- (_Bool)isDepthWriteEnabled;

@end
