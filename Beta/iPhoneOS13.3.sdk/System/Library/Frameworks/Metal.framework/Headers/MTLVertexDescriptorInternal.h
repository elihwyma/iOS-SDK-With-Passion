/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLVertexDescriptor.h>

@class MTLVertexAttributeDescriptorArrayInternal, MTLVertexBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLVertexDescriptorInternal : MTLVertexDescriptor

{
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}

+ (id)vertexDescriptor;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributes;
- (void)reset;
- (id)layouts;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newSerializedDescriptor;
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2;

@end
