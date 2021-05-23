/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class HFAccessorySettingsEntity, HFItem, HMAccessorySelectionSettingItem, HMSetting, HMSettingGroup, NSDictionary, NSString;

@protocol HFHomeKitSettingsVendor;

@interface _HomeKitSettingToHFItem_CacheItem : NSObject <Swift>

{
    HFItem *_outputItem;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    HMSetting *_singleSetting;
    HMSettingGroup *_settingGroup;
    HMAccessorySelectionSettingItem *_optionItem;
    HFAccessorySettingsEntity *_accessoryGroupEntity;
    NSDictionary *_usageOptions;
}

@property (nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) HMSetting *singleSetting;
@property (nonatomic, readonly) HMSettingGroup *settingGroup;
@property (nonatomic, readonly) HMAccessorySelectionSettingItem *optionItem;
@property (nonatomic, readonly) HFAccessorySettingsEntity *accessoryGroupEntity;
@property (nonatomic, readonly) HFItem *outputItem;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSDictionary *usageOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)na_identity;
+ (_Bool)_checkSettingGroupForSettingsThatNeedToBeDisplayed:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 group:(id)arg3;
- (_Bool)shouldBeDisplayed;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 accessoryGroupEntity:(id)arg3;

@end
