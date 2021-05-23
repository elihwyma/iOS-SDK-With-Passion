/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class KeychainSyncCountryInfo, KeychainSyncDevicePINController, KeychainSyncPhoneSettingsFragment, NSArray, NSString, PSKeychainSyncManager, PSSetupController, PSSpecifier;

@interface PSAccountSecurityController

{
    PSSpecifier *_recoverySwitch;
    NSArray *_passcodeSpecifiers;
    PSSetupController *_devicePasscodeChangeSetupController;
    KeychainSyncDevicePINController *_devicePINController;
    KeychainSyncPhoneSettingsFragment *_phoneSettingsFragment;
    NSString *_SMSTarget;
    KeychainSyncCountryInfo *_SMSTargetCountryInfo;
    _Bool _secureBackupEnabled;
    PSKeychainSyncManager *_manager;
    int _securityCodeType;
    NSString *_securityCode;
}

@property (nonatomic) int securityCodeType;
@property (retain, nonatomic) NSString *securityCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)phoneSettingsFragment:(id)arg1 didChangePhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (id)specifiers;
- (void)reloadSpecifiers;
- (void)cancelPressed;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)handleBurnedRecord;
- (void)changeSecurityCode:(id)arg1;
- (void)setUseRecovery:(id)arg1 specifier:(id)arg2;
- (id)useRecoveryForSepecifier:(id)arg1;
- (id)passcodeSpecifiers;
- (void)_setShowsDoneButton:(_Bool)arg1;
- (void)_showSecurityCodeChangeSheetOnSpecifier:(id)arg1;
- (void)disableRecovery;
- (void)saveSMSTargetChanges;
- (void)navCancelPressed;
- (void)navDonePressed;

@end
