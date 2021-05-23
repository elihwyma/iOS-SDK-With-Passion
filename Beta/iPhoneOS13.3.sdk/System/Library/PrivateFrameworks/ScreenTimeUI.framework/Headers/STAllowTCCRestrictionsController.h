/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <PrivacySettingsUI/PUITCCAccessController.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STAllowTCCRestrictionsController : PUITCCAccessController

{
    PSSpecifier *_allowedGroup;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;

@end
