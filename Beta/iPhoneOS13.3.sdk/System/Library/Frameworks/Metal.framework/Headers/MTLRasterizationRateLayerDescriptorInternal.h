/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRasterizationRateLayerDescriptor.h>

@class MTLRasterizationRateSampleArrayInternal;

@interface MTLRasterizationRateLayerDescriptorInternal : MTLRasterizationRateLayerDescriptor

{
    float *_data;
    CDStruct_da2e99ad _size;
    MTLRasterizationRateSampleArrayInternal *_horizontal;
    MTLRasterizationRateSampleArrayInternal *_vertical;
}

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_da2e99ad)sampleCount;
- (id)horizontal;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1 horizontal:(const float *)arg2 vertical:(const float *)arg3;
- (float *)horizontalSampleStorage;
- (float *)verticalSampleStorage;
- (id)vertical;

@end
