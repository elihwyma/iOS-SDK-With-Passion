/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFNetworkConfigurationItemProvider, HMHome;

@interface HUNetworkRouterManualReconfigurationItemManager : HFItemManager

{
    HMHome *_overrideHome;
    HFNetworkConfigurationItemProvider *_networkConfigurationItemProvider;
}

@property (nonatomic, readonly) HMHome *overrideHome;
@property (retain, nonatomic) HFNetworkConfigurationItemProvider *networkConfigurationItemProvider;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (_Bool)isItemNetworkConfigurationItem:(id)arg1;
- (id)networkConfigurationItemForProfile:(id)arg1;

@end
