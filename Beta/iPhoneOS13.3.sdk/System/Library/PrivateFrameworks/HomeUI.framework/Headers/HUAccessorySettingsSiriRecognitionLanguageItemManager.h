/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFAccessorySettingGroupItem, HFAccessorySettingSiriLanguageAdapter, HUSiriLanguageOptionItemProvider, NSString;

@interface HUAccessorySettingsSiriRecognitionLanguageItemManager : HFItemManager

{
    HFAccessorySettingSiriLanguageAdapter *_adapter;
    HUSiriLanguageOptionItemProvider *_optionItemProvider;
}

@property (retain, nonatomic) HUSiriLanguageOptionItemProvider *optionItemProvider;
@property (copy, nonatomic, readonly) HFAccessorySettingGroupItem *groupItem;
@property (nonatomic, readonly) HFAccessorySettingSiriLanguageAdapter *adapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDelegate:(id)arg1;
- (void)siriLanguageAdapter:(id)arg1 availableLanguageOptionsDidChange:(id)arg2;
- (void)siriLanguageAdapter:(id)arg1 selectedLanguageOptionDidChange:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;
- (id)updateSelectionWithOptionItem:(id)arg1;

@end
