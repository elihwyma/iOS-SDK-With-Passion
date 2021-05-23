/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <Preferences/PSListController.h>

__attribute__((visibility("hidden")))
@interface PSUIFingerprintController : PSListController

{
    id _effectiveSettingsChangedNotificationObserver;
}

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)shouldSelectResponderOnAppearance;
- (id)passcodeController;
- (id)representedBiometricIdentity;
- (void)setFingerprintName:(id)arg1;
- (id)fingerprintName;
- (void)deleteFingerprint:(id)arg1;

@end
