/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFAccessorySettingItem.h>

@class HMAccessorySelectionSettingItem, NSDictionary;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem

{
    HMAccessorySelectionSettingItem *_optionItem;
    NSDictionary *_usageOptions;
}

@property (retain, nonatomic) HMAccessorySelectionSettingItem *optionItem;
@property (retain, nonatomic) NSDictionary *usageOptions;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)value;
- (id)homeKitObject;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 optionItem:(id)arg4;
- (id)settingKeyPath;
- (void)_decorateOutcomeWithDependencies:(id)arg1;
- (id)toggleSelection;

@end
