/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSObject;

@protocol STContentPrivacyViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STContentPrivacyAllowedAppsDetailController : PSListController

{
    NSObject<STContentPrivacyViewModelCoordinator> *_coordinator;
}

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)specifiers;
- (void)_addBlacklistAppSpecifier:(id)arg1 bundleID:(id)arg2;
- (void)_addBooleanAppSpecifier:(id)arg1 configuration:(id)arg2 key:(id)arg3 bundleID:(id)arg4;
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2 fallbackLabel:(id)arg3 icon:(id)arg4;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (id)nameForInstalledSystemApp:(id)arg1;

@end
