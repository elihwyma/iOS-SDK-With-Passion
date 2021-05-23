/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFAccessorySettingsEntity, HMSetting, NSDictionary, NSString;

@protocol HFHomeKitObject, HFHomeKitSettingsVendor;

@interface HFAccessorySettingItem : HFItem

{
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    HMSetting *_setting;
    HFAccessorySettingsEntity *_entity;
    NSDictionary *_usageOptions;
}

@property (retain, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (retain, nonatomic) HMSetting *setting;
@property (retain, nonatomic) HFAccessorySettingsEntity *entity;
@property (retain, nonatomic) NSDictionary *usageOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HFHomeKitObject> homeKitObject;
@property (nonatomic, readonly) NSString *settingKeyPath;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)value;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3;
- (id)updateValue:(id)arg1;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (void)_decorateOutcomeWithResultKeys:(id)arg1;
- (void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1;
- (void)_decorateHiddenOrDisabled:(id)arg1;
- (_Bool)_validateKeyPathDependencies;

@end
