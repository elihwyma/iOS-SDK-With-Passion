/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMSettingGroup, NATreeNode, NSDictionary, NSMutableDictionary, NSMutableSet;

@protocol HFHomeKitSettingsVendor;

@interface HFAccessorySettingsItemProvider : HFItemProvider

{
    HMSettingGroup *_settingGroup;
    CDUnknownBlockType _filter;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    NSDictionary *_usageOptions;
    NSMutableDictionary *_settingToItemCache;
    NSMutableSet *_settingItems;
    NATreeNode *_parentNode;
}

@property (retain, nonatomic) NSDictionary *usageOptions;
@property (retain, nonatomic) NSMutableDictionary *settingToItemCache;
@property (retain, nonatomic) NSMutableSet *settingItems;
@property (nonatomic, readonly) NATreeNode *parentNode;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (retain, nonatomic) HMSettingGroup *settingGroup;

+ (id)buildItemTuplesForHomeKitSettings:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3 underNode:(id)arg4 cache:(id)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHomeKitSettingsVendor:(id)arg1 settingGroup:(id)arg2 usageOptions:(id)arg3;

@end
