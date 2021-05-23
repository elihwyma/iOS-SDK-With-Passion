/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemProvider.h>

@class HFAccessorySettingManagedConfigurationAdapter, HMSettingGroup, NSMutableSet;

@interface HUAccessorySettingsProfileItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMSettingGroup *_settingGroup;
    NSMutableSet *_accessorySettingsProfileItems;
    HFAccessorySettingManagedConfigurationAdapter *_adapter;
}

@property (retain, nonatomic) HMSettingGroup *settingGroup;
@property (retain, nonatomic) NSMutableSet *accessorySettingsProfileItems;
@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *adapter;
@property (copy, nonatomic) CDUnknownBlockType filter;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithAdapter:(id)arg1 settingGroup:(id)arg2;

@end
