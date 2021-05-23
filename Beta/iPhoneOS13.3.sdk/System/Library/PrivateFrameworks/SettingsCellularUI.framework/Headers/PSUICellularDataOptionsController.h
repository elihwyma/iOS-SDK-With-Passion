/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PSUICellularDataOptionsController : PSListController

{
    NSMutableArray *_ratSpecifiers;
}

- (id)init;
- (void)viewDidAppear:(_Bool)arg1;
- (id)specifiers;
- (id)controllerForSpecifier:(id)arg1;
- (id)roamingSpecifiers;
- (void)roamingOptionsDidChange;
- (id)roamingSettingsDescription:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getEUInternetStatus:(id)arg1;
- (void)setEUInternetCancelled:(id)arg1;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)getCDMARoamingStatus:(id)arg1;

@end
