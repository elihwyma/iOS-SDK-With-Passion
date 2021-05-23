/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface MTLStencilDescriptor : NSObject

@property (readonly) const struct MTLStencilDescriptorPrivate *stencilPrivate;
@property (nonatomic) unsigned long long stencilCompareFunction;
@property (nonatomic) unsigned long long stencilFailureOperation;
@property (nonatomic) unsigned long long depthFailureOperation;
@property (nonatomic) unsigned long long depthStencilPassOperation;
@property (nonatomic) unsigned int readMask;
@property (nonatomic) unsigned int writeMask;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
