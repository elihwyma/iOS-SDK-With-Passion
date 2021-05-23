/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFAccessorySettingGroupItem, HUAccessorySettingsItemModule;

@interface HUAccessorySettingsItemManager : HFItemManager

{
    HFAccessorySettingGroupItem *_groupItem;
    HUAccessorySettingsItemModule *_accessorySettingsSectionItemModule;
}

@property (retain, nonatomic) HUAccessorySettingsItemModule *accessorySettingsSectionItemModule;
@property (retain, nonatomic) HFAccessorySettingGroupItem *groupItem;

- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2;

@end
