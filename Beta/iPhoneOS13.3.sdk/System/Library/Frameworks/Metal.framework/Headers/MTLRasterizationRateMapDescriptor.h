/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLRasterizationRateLayerArray, NSString;

@interface MTLRasterizationRateMapDescriptor : NSObject

@property (nonatomic, readonly) MTLRasterizationRateLayerArray *layers;
@property (nonatomic) CDStruct_da2e99ad screenSize;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, readonly) unsigned long long layerCount;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(CDStruct_da2e99ad)arg1 layerCount:(unsigned long long)arg2 layers:(const id *)arg3;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(CDStruct_da2e99ad)arg1;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(CDStruct_da2e99ad)arg1 layer:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2;

@end
