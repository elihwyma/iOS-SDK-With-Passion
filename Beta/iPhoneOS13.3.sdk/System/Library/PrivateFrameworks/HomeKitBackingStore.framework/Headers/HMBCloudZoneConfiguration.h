/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@interface HMBCloudZoneConfiguration : HMFObject

{
    _Bool _shouldRebuildOnManateeKeyLoss;
    _Bool _shouldSuppressDelegateCallbacksOnInitialFetch;
}

@property _Bool shouldRebuildOnManateeKeyLoss;
@property _Bool shouldSuppressDelegateCallbacksOnInitialFetch;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)attributeDescriptions;

@end
