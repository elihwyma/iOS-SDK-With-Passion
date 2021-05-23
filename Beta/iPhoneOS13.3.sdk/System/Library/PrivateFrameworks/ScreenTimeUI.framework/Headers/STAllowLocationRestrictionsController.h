/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <PrivacySettingsUI/PUILocationServicesListController.h>

@class PSSpecifier;

__attribute__((visibility("hidden")))
@interface STAllowLocationRestrictionsController : PUILocationServicesListController

{
    PSSpecifier *_allowedGroup;
}

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;

@end
