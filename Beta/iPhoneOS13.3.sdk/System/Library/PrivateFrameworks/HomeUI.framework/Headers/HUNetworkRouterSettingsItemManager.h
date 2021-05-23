/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem, HFNetworkRouterItemProvider, HMHome, HUNetworkConfigurationItemListModule;

@interface HUNetworkRouterSettingsItemManager : HFItemManager

{
    HFItem *_homeProtectionItem;
    HUNetworkConfigurationItemListModule *_networkConfigurationItemListModule;
    HMHome *_overrideHome;
    HFNetworkRouterItemProvider *_networkRouterItemProvider;
}

@property (retain, nonatomic) HFItem *homeProtectionItem;
@property (retain, nonatomic) HUNetworkConfigurationItemListModule *networkConfigurationItemListModule;
@property (nonatomic, readonly) HMHome *overrideHome;
@property (retain, nonatomic) HFNetworkRouterItemProvider *networkRouterItemProvider;

+ (CDUnknownBlockType)_networkRouterItemComparator;

- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (id)networkRouterItemForProfile:(id)arg1;
- (_Bool)isItemNetworkRouterItem:(id)arg1;

@end
