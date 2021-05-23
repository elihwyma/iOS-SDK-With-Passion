/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLVertexBufferLayoutDescriptorArray.h>

@class MTLVertexBufferLayoutDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLVertexBufferLayoutDescriptorArrayInternal : MTLVertexBufferLayoutDescriptorArray

{
    MTLVertexBufferLayoutDescriptorInternal *_descriptors[31];
}

- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
