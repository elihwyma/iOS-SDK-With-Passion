/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSGContinuityController : PSListController

- (id)init;
- (id)specifiers;
- (void)profileNotification:(id)arg1;
- (_Bool)isContinuityRestricted;
- (void)updateContinuitySpecifiers;
- (id)isContinuityEnabled:(id)arg1;
- (void)setContinuityEnabled:(id)arg1 specifier:(id)arg2;
- (id)airplayToTV:(id)arg1;
- (void)setAirplayToTV:(id)arg1 specifier:(id)arg2;

@end
