/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPassAttachmentDescriptor.h>

@interface MTLRenderPassStencilAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) unsigned int clearStencil;
@property (nonatomic) unsigned long long stencilResolveFilter;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
