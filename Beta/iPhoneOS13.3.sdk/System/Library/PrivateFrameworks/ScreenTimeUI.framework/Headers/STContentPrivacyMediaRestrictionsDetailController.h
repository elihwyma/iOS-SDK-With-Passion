/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSObject;

@protocol STContentPrivacyViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STContentPrivacyMediaRestrictionsDetailController : PSListController

{
    NSObject<STContentPrivacyViewModelCoordinator> *_coordinator;
}

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)specifiers;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2 titlesByValue:(id)arg3 sortByTitle:(_Bool)arg4;
- (id)defaultSwitchSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (void)showWebFilterRestrictions:(id)arg1;
- (id)defaultLinkListSpecifierWithItem:(id)arg1 titlesByValue:(id)arg2 sortByTitle:(_Bool)arg3;

@end
