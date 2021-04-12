//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMSettingGroup, NATreeNode, NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol HFHomeKitSettingsVendor;

@interface HFAccessorySettingsItemProvider : HFItemProvider
{
    HMSettingGroup *_settingGroup;
    id /* CDUnknownBlockType */ _filter;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    NSDictionary *_usageOptions;
    NSMutableDictionary *_settingToItemCache;
    NSMutableSet *_settingItems;
    NATreeNode *_parentNode;
}

+ (id)buildItemTuplesForHomeKitSettings:(id)arg1 usageOptions:(id)arg2 settingGroup:(id)arg3 underNode:(id)arg4 cache:(id)arg5;
@property(readonly, nonatomic) NATreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) NSMutableSet *settingItems; // @synthesize settingItems=_settingItems;
@property(retain, nonatomic) NSMutableDictionary *settingToItemCache; // @synthesize settingToItemCache=_settingToItemCache;
@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(readonly, nonatomic) id <HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
@property(retain, nonatomic) HMSettingGroup *settingGroup; // @synthesize settingGroup=_settingGroup;
// - (void).cxx_destruct;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 settingGroup:(id)arg2 usageOptions:(id)arg3;

@end

