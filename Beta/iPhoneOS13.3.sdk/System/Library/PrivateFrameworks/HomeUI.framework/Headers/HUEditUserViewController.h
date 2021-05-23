/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUUserTableViewController.h>

@class HFUserItem, HUAboutResidentDeviceFooterView, HUAccessorySettingsItemModuleController, HUEditUserItemManager, HUPendingAccessoriesGridViewController, NSString;

@interface HUEditUserViewController : HUUserTableViewController

{
    HFUserItem *_userItem;
    HUEditUserItemManager *_editUserItemManager;
    HUPendingAccessoriesGridViewController *_pendingAccessoriesViewController;
    HUAccessorySettingsItemModuleController *_userSettingsItemModuleController;
    HUAboutResidentDeviceFooterView *_aboutResidentDeviceFooterView;
}

@property (copy, nonatomic, readonly) HFUserItem *userItem;
@property (nonatomic, readonly) HUEditUserItemManager *editUserItemManager;
@property (nonatomic, readonly) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController;
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController;
@property (retain, nonatomic) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)doneButtonTapped:(id)arg1;
- (id)userHandle;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (id)itemModuleControllers;
- (id)initWithItem:(id)arg1 home:(id)arg2;
- (void)_removeUser;
- (id)_lazyAboutResidentDeviceFooterView;
- (void)learnMoreLinkTapped:(id)arg1;
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;
- (_Bool)moduleController:(id)arg1 shouldDisableItem:(id)arg2;
- (void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;

@end
