/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUExpandableItemModule.h>

@class HFItem, HFStaticItemProvider, HMHome, HMUser, HUCameraAccessLevelOptionItemProvider, NSArray, NSSet, NSString, UIViewController;

@interface HUCameraUserPermissionsSettingsModule : HUExpandableItemModule

{
    NSSet *_itemProviders;
    HFItem *_showOptionsItem;
    HMUser *_user;
    HMHome *_home;
    HUCameraAccessLevelOptionItemProvider *_accessLevelSettingItemProvider;
    HFStaticItemProvider *_itemProvider;
    NSArray *_optionItems;
}

@property (retain, nonatomic) HUCameraAccessLevelOptionItemProvider *accessLevelSettingItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *itemProvider;
@property (retain, nonatomic) NSArray *optionItems;
@property (nonatomic, readonly) HMUser *user;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) unsigned long long userAccessLevelSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (id)itemProviders;
- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 user:(id)arg2 home:(id)arg3;
- (_Bool)isItemHeader:(id)arg1;
- (id)showOptionsItem;
- (void)_buildItemProvider;
- (void)_dispatchUpdateForHome:(id)arg1 user:(id)arg2;
- (id)updateUserAccessLevelSetting:(unsigned long long)arg1;

@end
