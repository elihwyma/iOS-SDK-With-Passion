/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLRasterizationRateSampleArray;

@interface MTLRasterizationRateLayerDescriptor : NSObject

@property (nonatomic, readonly) CDStruct_da2e99ad sampleCount;
@property (nonatomic, readonly) float *horizontalSampleStorage;
@property (nonatomic, readonly) float *verticalSampleStorage;
@property (nonatomic, readonly) MTLRasterizationRateSampleArray *horizontal;
@property (nonatomic, readonly) MTLRasterizationRateSampleArray *vertical;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1;
- (id)initWithSampleCount:(CDStruct_da2e99ad)arg1 horizontal:(const float *)arg2 vertical:(const float *)arg3;

@end
