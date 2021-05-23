/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSystemPolicyForApp;

@interface PSAppListController

{
    PSSystemPolicyForApp *_systemPolicy;
}

@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy;

+ (id)specifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)onBoardingKitBundleIDDict;
+ (id)allowedPrivacyBundles;
+ (id)groupSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)localizedTitlesFromUnlocalizedTitles:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3;
+ (_Bool)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)arg1;
+ (id)textFieldSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)toggleSwitchSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)sliderSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)titleValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)multiValueSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)childPaneSpecifierFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;
+ (id)radioGroupSpecifiersFromDictionary:(id)arg1 stringsTable:(id)arg2 parentSpecifier:(id)arg3 target:(id)arg4;

- (id)bundle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)_uiValueFromValue:(id)arg1 specifier:(id)arg2;
- (id)_valueFromUIValue:(id)arg1 specifier:(id)arg2;
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg1;
- (id)_readToggleSwitchSpecifierValue:(id)arg1;
- (void)_setToggleSwitchSpecifierValue:(id)arg1 specifier:(id)arg2;
- (void)showPrivacyControllerForSpecifier:(id)arg1;

@end
