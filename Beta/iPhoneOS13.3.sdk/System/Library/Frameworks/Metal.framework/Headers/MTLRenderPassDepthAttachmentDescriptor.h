/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRenderPassAttachmentDescriptor.h>

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned long long depthResolveFilter;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
