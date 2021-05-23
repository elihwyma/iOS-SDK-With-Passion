/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBCloudZoneConfiguration.h>

@interface HMBMutableCloudZoneConfiguration : HMBCloudZoneConfiguration

@property _Bool shouldRebuildOnManateeKeyLoss;
@property _Bool shouldSuppressDelegateCallbacksOnInitialFetch;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
