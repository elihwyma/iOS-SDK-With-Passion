/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPassStencilAttachmentDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLRenderPassStencilAttachmentDescriptorInternal : MTLRenderPassStencilAttachmentDescriptor

{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;
}

+ (id)attachmentDescriptor;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)slice;
- (unsigned long long)level;
- (void)setTexture:(id)arg1;
- (void)setStoreAction:(unsigned long long)arg1;
- (void)setLoadAction:(unsigned long long)arg1;
- (id)texture;
- (void)setLevel:(unsigned long long)arg1;
- (unsigned long long)storeAction;
- (void)setResolveTexture:(id)arg1;
- (void)setClearStencil:(unsigned int)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
- (id)resolveTexture;
- (void)setSlice:(unsigned long long)arg1;
- (void)setDepthPlane:(unsigned long long)arg1;
- (unsigned long long)depthPlane;
- (void)setResolveLevel:(unsigned long long)arg1;
- (unsigned long long)resolveLevel;
- (void)setResolveSlice:(unsigned long long)arg1;
- (unsigned long long)resolveSlice;
- (void)setResolveDepthPlane:(unsigned long long)arg1;
- (unsigned long long)resolveDepthPlane;
- (void)setYInvert:(_Bool)arg1;
- (_Bool)yInvert;
- (unsigned long long)loadAction;
- (unsigned long long)storeActionOptions;
- (void)setStoreActionOptions:(unsigned long long)arg1;
- (unsigned int)clearStencil;
- (unsigned long long)stencilResolveFilter;
- (void)setStencilResolveFilter:(unsigned long long)arg1;

@end
