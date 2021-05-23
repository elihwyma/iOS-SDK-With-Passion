/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUServiceDetailsItemModule.h>

@class HFAccessorySettingsEntity, HFAccessorySettingsItemProvider, HMAccessory, HMSettingGroup, HMSettings, NATreeNode, NSSet, NSString;

@protocol HFHomeKitSettingsVendor;

@interface HUAccessorySettingsItemModule : HUServiceDetailsItemModule

{
    HFAccessorySettingsItemProvider *_accessorySettingsItemProvider;
    NSSet *_itemProviders;
    HMAccessory *_accessory;
    HMSettings *_settings;
    NATreeNode *_codex;
    HFAccessorySettingsEntity *_parentEntity;
    HMSettingGroup *_parentSettingGroup;
    NSSet *_settingItemsToBeDisplayed;
    NSSet *_groupItemsToBeDisplayed;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMSettings *settings;
@property (nonatomic, readonly) NATreeNode *codex;
@property (nonatomic, readonly) HFAccessorySettingsEntity *parentEntity;
@property (nonatomic, readonly) HMSettingGroup *parentSettingGroup;
@property (retain, nonatomic) NSSet *settingItemsToBeDisplayed;
@property (retain, nonatomic) NSSet *groupItemsToBeDisplayed;
@property (nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (nonatomic, readonly) HFAccessorySettingsItemProvider *accessorySettingsItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)itemProviders;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (void)settingsDidUpdate:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)settings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (void)updateItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 homeKitSettingsVendor:(id)arg2 usageOptions:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2 usageOptions:(id)arg3;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (id)updateItem:(id)arg1 withValue:(id)arg2;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3 usageOptions:(id)arg4;
- (void)_registerForAccessorySettingsUpdates;
- (void)_unregisterForAccessorySettingsUpdates;
- (void)_resetIfNeeded;
- (id)_itemSectionsForParentGroupWithItems;
- (id)_itemSectionsForGroupKeyPaths:(id)arg1;
- (id)_itemSectionsForShowInSeperateSectionItems:(id)arg1;
- (id)_itemSectionWithEntity:(id)arg1 items:(id)arg2;
- (id)_itemSectionForGroup:(id)arg1 entity:(id)arg2 settingItems:(id)arg3 groupItems:(id)arg4;
- (id)initWithItemUpdater:(id)arg1 mediaAccessoryItem:(id)arg2;
- (void)updateItems:(id)arg1 matchingDependency:(id)arg2;
- (void)updateItemsForKeyPath:(id)arg1;

@end
