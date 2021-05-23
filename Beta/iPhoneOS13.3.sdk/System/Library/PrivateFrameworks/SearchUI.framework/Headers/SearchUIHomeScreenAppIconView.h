/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SpringBoardHome/SBIconView.h>

@class LSApplicationProxy, NSString, NSURL, SFSearchResult;

@protocol SearchUIHomeScreenEngagementDelegate;

@interface SearchUIHomeScreenAppIconView : SBIconView

{
    id <SearchUIHomeScreenEngagementDelegate> _engagementDelegate;
    unsigned long long _variant;
    LSApplicationProxy *_applicationProxy;
    SFSearchResult *_searchResult;
    NSURL *_applicationBundleURL;
    NSString *_applicationShortcutWidgetBundleIdentifier;
}

@property (retain) LSApplicationProxy *applicationProxy;
@property (retain) SFSearchResult *searchResult;
@property (copy, nonatomic) NSURL *applicationBundleURL;
@property (copy, nonatomic) NSString *applicationShortcutWidgetBundleIdentifier;
@property (weak, nonatomic) id <SearchUIHomeScreenEngagementDelegate> engagementDelegate;
@property (nonatomic) unsigned long long variant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cacheForVariant:(unsigned long long)arg1;
+ (struct CGPath *)shadowPathForIconFrame:(struct CGRect)arg1 cornerRadius:(double)arg2;
+ (id)applicationShortcutService;

- (id)init;
- (void)dealloc;
- (void)deviceManagementPolicyDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)setIcon:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateWithResult:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (_Bool)iconViewShouldBeginShortcutsPresentation:(id)arg1;
- (id)applicationBundleURLForShortcutsWithIconView:(id)arg1;
- (id)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(id)arg1;
- (_Bool)iconView:(id)arg1 shouldActivateApplicationShortcutItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)iconView:(id)arg1 applicationShortcutItemsWithProposedItems:(id)arg2;
- (long long)iconView:(id)arg1 draggingStartLocationWithProposedStartLocation:(long long)arg2;
- (_Bool)iconViewCanBeginDrags:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (void)iconTapped:(id)arg1;
- (unsigned long long)priorityForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo)arg2;
- (_Bool)isTimedOutForIcon:(id)arg1;
- (_Bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)appIconsChanged:(id)arg1;
- (void)resetImageWithAppIcon:(id)arg1;
- (void)fetchIconImageForIcon:(id)arg1;
- (void)fetchApplicationShortcutInfoForIcon:(id)arg1;
- (_Bool)shouldHideShortcutsForAppIcon:(id)arg1;
- (void)launchIcon;
- (_Bool)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg1;
- (id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg1;

@end
