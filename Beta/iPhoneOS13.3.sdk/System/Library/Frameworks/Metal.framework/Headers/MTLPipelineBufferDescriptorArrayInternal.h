/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLPipelineBufferDescriptorArray.h>

@class MTLPipelineBufferDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLPipelineBufferDescriptorArrayInternal : MTLPipelineBufferDescriptorArray

{
    MTLPipelineBufferDescriptorInternal *_descriptors[31];
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)_descriptorAtIndex:(unsigned long long)arg1;

@end
