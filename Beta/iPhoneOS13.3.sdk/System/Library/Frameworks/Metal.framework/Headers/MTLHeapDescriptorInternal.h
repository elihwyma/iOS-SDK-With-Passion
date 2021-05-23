/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLHeapDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLHeapDescriptorInternal : MTLHeapDescriptor

{
    struct MTLHeapDescriptorPrivate *_private;
}

@property (nonatomic) unsigned long long sparsePageSize;
@property (nonatomic) _Bool sparsePageAccessCountersEnabled;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (unsigned long long)size;
- (void)setSize:(unsigned long long)arg1;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (unsigned long long)resourceOptions;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (unsigned long long)cpuCacheMode;
- (id)formattedDescription:(unsigned long long)arg1;
- (_Bool)validateWithDevice:(id)arg1;
- (unsigned long long)hazardTrackingMode;
- (void)setHazardTrackingMode:(unsigned long long)arg1;
- (const struct MTLHeapDescriptorPrivate *)descriptorPrivate;

@end
