/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STContentPrivacyListController : STPINListViewController

{
    PSSpecifier *_enableRestrictionsSwitchSpecifier;
}

@property (copy, readonly) NSArray *storeDetailSpecifiers;
@property (retain) PSSpecifier *enableRestrictionsSwitchSpecifier;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (void)setItemSpecifierValue:(id)arg1 specifier:(id)arg2;
- (id)getItemSpecifierValue:(id)arg1;
- (void)_isLoadedDidChange:(_Bool)arg1;
- (id)_enableRestrictionsSwitchSpecifier;
- (id)_topLevelSpecifiers;
- (id)_allowChangesSpecifiers;
- (void)setRestrictionsEnabled:(id)arg1 specifier:(id)arg2;
- (id)getRestrictionsEnabled:(id)arg1;
- (void)showiTunesPurchasesRestrictions:(id)arg1;
- (id)_topLevelSpecifierWithAction:(SEL)arg1 name:(id)arg2;
- (void)showAllowedAppsRestrictions:(id)arg1;
- (void)showMediaRestrictions:(id)arg1;
- (id)_privacySpecifiers;
- (id)defaultLinkListSpecifierWithConfiguration:(id)arg1 key:(id)arg2;
- (id)radioGroupSpecifierWithName:(id)arg1 footerText:(id)arg2 item:(id)arg3;
- (id)defaultRadioItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)tccSpecifierWithCapabilityKey:(id)arg1 id:(id)arg2;
- (id)defaultLinkListSpecifierWithItem:(id)arg1;
- (id)_topLevelExternalSpecifierWithClass:(Class)arg1 name:(id)arg2 idTitle:(id)arg3;

@end
