/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLPointerType, MTLStructType, NSString;

@interface MTLArgument : NSObject

@property (readonly) MTLArgument *bufferIndirectArgumentType;
@property (readonly) unsigned long long indirectConstantAlignment;
@property (readonly) unsigned long long indirectConstantDataSize;
@property (readonly) unsigned long long indirectConstantDataType;
@property (readonly) NSString *name;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly, getter=isActive) _Bool active;
@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long textureDataType;
@property (readonly) _Bool isDepthTexture;
@property (readonly) unsigned long long arrayLength;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;

@end
