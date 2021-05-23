/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRasterizationRateSampleArray.h>

@interface MTLRasterizationRateSampleArrayInternal : MTLRasterizationRateSampleArray

{
    float *_data;
    unsigned long long _count;
}

- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)initWithData:(float *)arg1 numElements:(unsigned long long)arg2;
- (float *)__getRawArray:(unsigned long long *)arg1;

@end
