/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLType.h>

@interface MTLArrayType : MTLType

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long stride;
@property (readonly) unsigned long long argumentIndexStride;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)elementStructType;
- (id)elementArrayType;
- (id)elementIndirectArgumentType;
- (id)elementTextureReferenceType;
- (id)elementPointerType;

@end
