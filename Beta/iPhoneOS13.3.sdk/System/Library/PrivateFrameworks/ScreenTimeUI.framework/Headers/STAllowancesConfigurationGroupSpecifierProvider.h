/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STAllowancesConfigurationGroupSpecifierProvider : STRootGroupSpecifierProvider

{
    PSSpecifier *_deviceBedtimeSpecifier;
    PSSpecifier *_appLimitsSpecifier;
    PSSpecifier *_alwaysAllowedSpecifier;
    PSSpecifier *_communicationLimitsSpecifier;
    PSSpecifier *_contentPrivacySpecifier;
}

@property (retain, nonatomic) PSSpecifier *deviceBedtimeSpecifier;
@property (retain, nonatomic) PSSpecifier *appLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *alwaysAllowedSpecifier;
@property (retain, nonatomic) PSSpecifier *communicationLimitsSpecifier;
@property (retain, nonatomic) PSSpecifier *contentPrivacySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (void)showDeviceBedtimeViewController:(id)arg1;
- (id)appLimitsDetailText;
- (void)showAppLimitsViewController:(id)arg1;
- (id)_communicationLimitsDetailText;
- (void)_showCommunicationLimitsViewController:(id)arg1;
- (id)alwaysAllowedDetailText;
- (void)showAlwaysAllowedViewController:(id)arg1;
- (id)contentPrivacyDetailText;
- (void)showContentPrivacyViewController:(id)arg1;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_deviceBedtimeDidChange:(id)arg1;
- (void)_userTypeDidChange:(unsigned long long)arg1;
- (void)_isRemoteUserDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;
- (id)_subtitleTextForDeviceBedtime:(id)arg1;
- (_Bool)showDemoModeAlertIfNeeded;
- (void)_resetCommunicationLimitsDetailText;
- (void)alwaysAllowListController:(id)arg1 didFinishEditingAlwaysAllowList:(id)arg2;
- (void)bedtimeListController:(id)arg1 didFinishEditingBedtime:(id)arg2;

@end
