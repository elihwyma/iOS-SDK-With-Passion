/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLArgumentInternal.h>

__attribute__((visibility("hidden")))
@interface MTLBufferArgument : MTLArgumentInternal

{
    unsigned int _dataType:15;
    unsigned int _vertexDescriptorBuffer:1;
    unsigned short _alignment;
    unsigned int _dataSize;
    unsigned long long _pixelFormat;
    unsigned long long _aluType;
}

- (void)dealloc;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setDataSize:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)structType;
- (id)bufferStructType;
- (unsigned long long)bufferDataType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 isActive:(_Bool)arg4 locationIndex:(unsigned long long)arg5 arraySize:(unsigned long long)arg6 dataType:(unsigned long long)arg7 pixelFormat:(unsigned long long)arg8 aluType:(unsigned long long)arg9 isConstantBuffer:(_Bool)arg10 dataSize:(unsigned long long)arg11 alignment:(unsigned long long)arg12;
- (void)setVertexDescriptorBuffer:(_Bool)arg1;
- (_Bool)isVertexDescriptorBuffer;
- (void)setStructType:(id)arg1 doRetain:(_Bool)arg2;
- (void)setStructType:(id)arg1;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferPixelFormat;
- (unsigned long long)bufferALUType;
- (unsigned long long)bufferDataSize;
- (id)bufferPointerType;
- (id)bufferIndirectArgumentType;

@end
