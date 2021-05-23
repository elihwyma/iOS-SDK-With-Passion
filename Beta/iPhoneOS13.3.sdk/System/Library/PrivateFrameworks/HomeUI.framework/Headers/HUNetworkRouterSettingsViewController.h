/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUNetworkConfigurationItemListModuleController, HUNetworkRouterSettingsItemManager, NSString;

@interface HUNetworkRouterSettingsViewController : HUItemTableViewController

{
    HUNetworkConfigurationItemListModuleController *_networkConfigurationItemListModuleController;
}

@property (nonatomic, readonly) HUNetworkRouterSettingsItemManager *itemManager;
@property (retain, nonatomic) HUNetworkConfigurationItemListModuleController *networkConfigurationItemListModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithHome:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)presentNetworkRouterSettingsForItem:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldShowNetworkRouterDetails;
- (Class)_networkRouterDetailsViewControllerClass;
- (id)presentNetworkConfigurationSettingsForProfile:(id)arg1 animated:(_Bool)arg2;
- (id)presentNetworkRouterSettingsForProfile:(id)arg1 animated:(_Bool)arg2;

@end
