/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLPointerType.h>

@class MTLType;

__attribute__((visibility("hidden")))
@interface MTLPointerTypeInternal : MTLPointerType

{
    unsigned long long _dataType;
    unsigned long long _elementType;
    MTLType *_elementTypeInfo;
    unsigned long long _access;
    unsigned long long _alignment;
    unsigned long long _dataSize;
    _Bool _elementIsArgumentBuffer;
    _Bool _isConstantBuffer;
    _Bool _doRetain;
}

- (void)dealloc;
- (unsigned long long)alignment;
- (unsigned long long)access;
- (unsigned long long)dataType;
- (unsigned long long)elementType;
- (unsigned long long)dataSize;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)structType;
- (id)elementStructType;
- (id)elementArrayType;
- (_Bool)elementIsArgumentBuffer;
- (id)elementTypeDescription;
- (_Bool)isConstantBuffer;
- (void)setAlignment:(unsigned long long)arg1 dataSize:(unsigned long long)arg2;
- (id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(_Bool)arg6 isConstantBuffer:(_Bool)arg7;
- (id)initWithElementType:(unsigned long long)arg1 elementTypeDescription:(id)arg2 access:(unsigned long long)arg3 alignment:(unsigned long long)arg4 dataSize:(unsigned long long)arg5 elementIsIndirectArgumentBuffer:(_Bool)arg6 isConstantBuffer:(_Bool)arg7 doRetain:(_Bool)arg8;
- (_Bool)elementIsIndirectArgumentBuffer;

@end
