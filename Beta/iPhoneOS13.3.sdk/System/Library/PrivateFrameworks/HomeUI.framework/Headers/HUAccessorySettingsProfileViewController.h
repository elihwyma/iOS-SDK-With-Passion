/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsProfileModule, HUAccessorySettingsProfileModuleController, NSString;

@interface HUAccessorySettingsProfileViewController : HUItemTableViewController

{
    HFAccessorySettingGroupItem *_item;
    HUAccessorySettingsProfileModule *_profileModule;
    HUAccessorySettingsProfileModuleController *_profileModuleController;
}

@property (retain, nonatomic) HUAccessorySettingsProfileModule *profileModule;
@property (retain, nonatomic) HUAccessorySettingsProfileModuleController *profileModuleController;
@property (copy, nonatomic, readonly) HFAccessorySettingGroupItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)hu_preloadContent;
- (id)itemModuleControllers;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (void)accessorySettingsProfileModuleController:(id)arg1 needsNavigationToController:(id)arg2;
- (id)settingsProfileModule:(id)arg1 wantsProfileItemDeleted:(id)arg2;

@end
