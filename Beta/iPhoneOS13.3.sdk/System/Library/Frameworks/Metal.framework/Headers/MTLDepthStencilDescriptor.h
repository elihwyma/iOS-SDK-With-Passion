/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject

@property (readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate;
@property (nonatomic) unsigned long long depthCompareFunction;
@property (nonatomic, getter=isDepthWriteEnabled) _Bool depthWriteEnabled;
@property (copy, nonatomic) MTLStencilDescriptor *frontFaceStencil;
@property (copy, nonatomic) MTLStencilDescriptor *backFaceStencil;
@property (copy, nonatomic) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
