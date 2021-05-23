/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLArrayType.h>

@class MTLType;

__attribute__((visibility("hidden")))
@interface MTLArrayTypeInternal : MTLArrayType

{
    unsigned long long _dataType;
    unsigned int _arrayLength:32;
    unsigned int _stride:32;
    id _details;
    unsigned long long _elementType;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
    MTLType *_elementTypeInfo;
    _Bool _isIndirectArgumentBuffer;
    unsigned long long _argumentIndexStride;
}

@property _Bool isIndirectArgumentBuffer;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (nonatomic) unsigned long long argumentIndexStride;
@property (nonatomic) unsigned long long indirectArgumentIndexStride;

- (void)dealloc;
- (unsigned long long)dataType;
- (unsigned long long)arrayLength;
- (unsigned long long)elementType;
- (void)setStride:(unsigned long long)arg1;
- (unsigned long long)stride;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)elementStructType;
- (id)elementArrayType;
- (id)elementTypeDescription;
- (id)elementIndirectArgumentType;
- (id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 details:(id)arg6;
- (_Bool)isArrayLayoutThreadSafeWith:(id)arg1;
- (id)elementTextureReferenceType;
- (id)elementPointerType;

@end
