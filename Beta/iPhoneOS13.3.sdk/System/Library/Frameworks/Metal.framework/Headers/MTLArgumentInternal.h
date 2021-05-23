/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLArgument.h>

@class MTLStructType, MTLType, NSString;

__attribute__((visibility("hidden")))
@interface MTLArgumentInternal : MTLArgument

{
    NSString *_name;
    unsigned long long _type;
    unsigned long long _access;
    unsigned long long _index;
    _Bool _active;
    unsigned long long _arrayLength;
    MTLType *_typeInfo;
}

@property (readonly) unsigned long long bufferPixelFormat;
@property (readonly) unsigned long long bufferALUType;
@property (readonly) MTLStructType *structType;

- (void)dealloc;
- (id)description;
- (id)name;
- (unsigned long long)type;
- (_Bool)isActive;
- (unsigned long long)index;
- (unsigned long long)textureType;
- (unsigned long long)access;
- (id)dataTypeDescription;
- (unsigned long long)arrayLength;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)bufferStructType;
- (unsigned long long)bufferDataType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(_Bool)arg5 arrayLength:(unsigned long long)arg6;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (id)bufferPointerType;
- (id)bufferIndirectArgumentType;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataType;
- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)textureDataType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(_Bool)arg5 arrayLength:(unsigned long long)arg6 typeDescription:(id)arg7;

@end
