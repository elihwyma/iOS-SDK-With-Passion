/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLType.h>

@interface MTLPointerType : MTLType

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned long long dataSize;
@property (readonly) _Bool elementIsArgumentBuffer;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)elementStructType;
- (id)elementArrayType;

@end
