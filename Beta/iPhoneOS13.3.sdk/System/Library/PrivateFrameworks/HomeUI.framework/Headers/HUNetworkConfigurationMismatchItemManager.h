/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFNetworkConfigurationItemProvider, HMHome, NSSet;

@interface HUNetworkConfigurationMismatchItemManager : HFItemManager

{
    NSSet *_profiles;
    HMHome *_overrideHome;
    HFNetworkConfigurationItemProvider *_networkConfigurationItemProvider;
}

@property (nonatomic, readonly) HMHome *overrideHome;
@property (retain, nonatomic) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider;
@property (nonatomic, readonly) NSSet *profiles;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (_Bool)isItemNetworkConfigurationItem:(id)arg1;
- (id)initWithProfiles:(id)arg1 delegate:(id)arg2;
- (id)networkConfigurationItemForProfile:(id)arg1;

@end
