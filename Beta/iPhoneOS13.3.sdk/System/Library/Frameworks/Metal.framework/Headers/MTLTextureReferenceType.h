/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLType.h>

@interface MTLTextureReferenceType : MTLType

@property (readonly) unsigned long long textureDataType;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long access;
@property (readonly) _Bool isDepthTexture;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
