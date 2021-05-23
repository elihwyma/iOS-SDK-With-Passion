/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLBufferLayoutDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor

{
    unsigned long long _stride;
    unsigned long long _stepFunction;
    unsigned long long _instanceStepRate;
}

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setStepFunction:(unsigned long long)arg1;
- (void)setStride:(unsigned long long)arg1;
- (unsigned long long)stride;
- (void)setStepRate:(unsigned long long)arg1;
- (unsigned long long)stepFunction;
- (unsigned long long)stepRate;

@end
