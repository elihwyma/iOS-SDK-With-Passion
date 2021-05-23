/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFAccessorySettingGroupItem, HFAccessorySettingItem, HUAccessorySettingsItemModuleController, NSString;

@interface HUAccessorySettingsDetailsViewController : HUItemTableViewController

{
    HFAccessorySettingGroupItem *_groupItem;
    HUAccessorySettingsItemModuleController *_accessorySettingsItemModuleController;
    HFAccessorySettingItem *_fileUploadItem;
}

@property (retain, nonatomic) HFAccessorySettingGroupItem *groupItem;
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController;
@property (retain, nonatomic) HFAccessorySettingItem *fileUploadItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)itemModuleControllers;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (id)accessorySettingsItemManager;

@end
