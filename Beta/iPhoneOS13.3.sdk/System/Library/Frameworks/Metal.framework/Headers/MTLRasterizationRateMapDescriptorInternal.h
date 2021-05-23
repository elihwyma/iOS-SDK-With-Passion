/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLRasterizationRateMapDescriptor.h>

@class MTLRasterizationRateLayerArrayInternal, NSString;

__attribute__((visibility("hidden")))
@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor

{
    CDStruct_da2e99ad _screenSize;
    NSString *_label;
    struct vector<MTLRasterizationRateLayerDescriptor *, std::__1::allocator<MTLRasterizationRateLayerDescriptor *>> _layers;
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;
}

- (id)init;
- (oneway void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (unsigned long long)layerCount;
- (void)setLabel:(id)arg1;
- (id)label;
- (id)layers;
- (void)setScreenSize:(CDStruct_da2e99ad)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (CDStruct_da2e99ad)screenSize;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithScreenSize:(CDStruct_da2e99ad)arg1;
- (const id *)layerPointer:(unsigned long long *)arg1;

@end
