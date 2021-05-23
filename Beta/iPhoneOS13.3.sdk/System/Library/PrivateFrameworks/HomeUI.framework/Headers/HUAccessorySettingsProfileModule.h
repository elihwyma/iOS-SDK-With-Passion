/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemModule.h>

@class HFAccessorySettingGroupItem, HFAccessorySettingManagedConfigurationAdapter, HUAccessorySettingsProfileItemProvider, NSString;

@protocol HUAccessorySettingsProfileModuleDelegate;

@interface HUAccessorySettingsProfileModule : HFItemModule

{
    id <HUAccessorySettingsProfileModuleDelegate> _delegate;
    HUAccessorySettingsProfileItemProvider *_profileItemProvider;
    HFAccessorySettingGroupItem *_settingGroupItem;
    HFAccessorySettingManagedConfigurationAdapter *_adapter;
}

@property (weak, nonatomic) id <HUAccessorySettingsProfileModuleDelegate> delegate;
@property (nonatomic, readonly) HUAccessorySettingsProfileItemProvider *profileItemProvider;
@property (nonatomic, readonly) HFAccessorySettingGroupItem *settingGroupItem;
@property (nonatomic, readonly) HFAccessorySettingManagedConfigurationAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (void)managedConfigurationAdapterSettingsWereUpdated:(id)arg1;
- (id)_actuallyRemoveProfileItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 settingGroupItem:(id)arg2;
- (id)promptForRemoveProfileItem:(id)arg1;

@end
