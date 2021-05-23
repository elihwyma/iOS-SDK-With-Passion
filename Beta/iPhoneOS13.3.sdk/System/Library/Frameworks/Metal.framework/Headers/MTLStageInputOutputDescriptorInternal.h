/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLStageInputOutputDescriptor.h>

@class MTLAttributeDescriptorArrayInternal, MTLBufferLayoutDescriptorArrayInternal;

__attribute__((visibility("hidden")))
@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor

{
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    unsigned long long _indexBufferIndex;
    unsigned long long _indexType;
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
- (unsigned long long)indexType;
- (void)setIndexType:(unsigned long long)arg1;
- (id)layouts;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)indexBufferIndex;
- (void)setIndexBufferIndex:(unsigned long long)arg1;
- (id)newSerializedDescriptor;
- (_Bool)validateWithVertexFunction:(id)arg1 error:(id *)arg2;

@end
