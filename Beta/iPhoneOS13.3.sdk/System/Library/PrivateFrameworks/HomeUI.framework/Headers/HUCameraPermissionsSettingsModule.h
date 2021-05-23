/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUExpandableItemContainerModule.h>

@class HFItemProvider, HMHome, NSArray, NSSet, NSString, UIViewController;

@interface HUCameraPermissionsSettingsModule : HUExpandableItemContainerModule

{
    NSSet *_itemProviders;
    unsigned long long _displayStyle;
    HMHome *_home;
    HFItemProvider *_headerItemProvider;
    NSArray *_userSectionModules;
}

@property (retain, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HFItemProvider *headerItemProvider;
@property (retain, nonatomic) NSArray *userSectionModules;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (retain, nonatomic) UIViewController *presentingViewController;

- (id)initWithItemUpdater:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 displayStyle:(unsigned long long)arg3;
- (id)expandableModules;
- (_Bool)isItemHeader:(id)arg1;
- (unsigned long long)accessModeSettingForUser:(id)arg1;

@end
