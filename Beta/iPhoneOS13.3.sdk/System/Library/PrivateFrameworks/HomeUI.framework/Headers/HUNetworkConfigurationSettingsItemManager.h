/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFNetworkConfigurationGroupItem, HUNetworkConfigurationSettingsModule;

@interface HUNetworkConfigurationSettingsItemManager : HFItemManager

{
    HUNetworkConfigurationSettingsModule *_networkConfigurationSettingsModule;
}

@property (nonatomic, readonly) HFNetworkConfigurationGroupItem *sourceNetworkConfigurationGroupItem;
@property (retain, nonatomic) HUNetworkConfigurationSettingsModule *networkConfigurationSettingsModule;

- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemModulesForHome:(id)arg1;
- (id)initWithDelegate:(id)arg1 networkConfigurationGroupItem:(id)arg2;

@end
