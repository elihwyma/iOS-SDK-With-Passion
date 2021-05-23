/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HUNetworkConfigurationItemListModule;

@interface HUNetworkConfigurationGroupItemManager : HFItemManager

{
    HUNetworkConfigurationItemListModule *_networkConfigurationItemListModule;
}

@property (nonatomic, readonly) HUNetworkConfigurationItemListModule *networkConfigurationItemListModule;

- (id)_buildItemModulesForHome:(id)arg1;

@end
