/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLVertexAttributeDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor

{
    unsigned long long _vertexFormat;
    unsigned long long _offset;
    unsigned long long _bufferIndex;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)format;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (void)setFormat:(unsigned long long)arg1;
- (void)setBufferIndex:(unsigned long long)arg1;
- (unsigned long long)bufferIndex;

@end
