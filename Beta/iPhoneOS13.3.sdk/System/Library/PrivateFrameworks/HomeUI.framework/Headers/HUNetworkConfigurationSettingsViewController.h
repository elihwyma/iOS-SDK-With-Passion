/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUNetworkConfigurationSettingsItemManager, HUNetworkConfigurationSettingsModuleController;

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController

{
    HUNetworkConfigurationSettingsModuleController *_networkConfigurationSettingsModuleController;
}

@property (nonatomic, readonly) HUNetworkConfigurationSettingsItemManager *itemManager;
@property (retain, nonatomic) HUNetworkConfigurationSettingsModuleController *networkConfigurationSettingsModuleController;

- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)itemManagerDidFinishUpdate:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithNetworkConfigurationGroupItem:(id)arg1;
- (void)updateNetworkConfigurationSettingsModuleFooter;
- (id)buildItemModuleControllerForModule:(id)arg1;

@end
