/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLBufferLayoutDescriptorArray.h>

@class MTLBufferLayoutDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLBufferLayoutDescriptorArrayInternal : MTLBufferLayoutDescriptorArray

{
    MTLBufferLayoutDescriptorInternal *_descriptors[31];
}

- (void)dealloc;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;

@end
