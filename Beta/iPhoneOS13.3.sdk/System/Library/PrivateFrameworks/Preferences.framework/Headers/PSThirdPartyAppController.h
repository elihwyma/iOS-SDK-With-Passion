/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PSSpecifierController.h>

@class PSSystemPolicyForApp;

@interface PSThirdPartyAppController : PSSpecifierController

{
    PSSystemPolicyForApp *_systemPolicy;
}

@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy;

- (id)bundle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;
- (id)_readToggleSwitchSpecifierValue:(id)arg1;
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;
- (void)showPrivacyControllerForSpecifier:(id)arg1;
- (id)loadSpecifiers;

@end
