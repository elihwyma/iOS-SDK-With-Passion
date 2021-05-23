/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

#import <Home/Swift-Protocol.h>

@class HFAccessorySettingsEntity, HMAccessorySelectionSetting, HMSettingGroup, NSDictionary, NSString;

@protocol HFHomeKitObject, HFHomeKitSettingsVendor;

@interface HFAccessorySettingGroupItem : HFItem <Swift>

{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    HFAccessorySettingsEntity *_entity;
    NSDictionary *_usageOptions;
    HMSettingGroup *_settingGroup;
    HMAccessorySelectionSetting *_selectionSetting;
}

@property (retain, nonatomic) NSDictionary *usageOptions;
@property (nonatomic, readonly) HMSettingGroup *settingGroup;
@property (nonatomic, readonly) HMAccessorySelectionSetting *selectionSetting;
@property (nonatomic, readonly) HFAccessorySettingsEntity *entity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (nonatomic, readonly) NSString *settingKeyPath;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_displayTitle;
- (id)_subclass_updateWithOptions:(id)arg1;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (_Bool)_validateKeyPathDependencies;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 entity:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 selectionSetting:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2;

@end
