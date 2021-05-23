/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class KeychainSyncAdvancedSecurityCodeController, KeychainSyncDevicePINController, KeychainSyncPhoneNumberController, KeychainSyncSMSVerificationController, NSString, NSTimer, PSKeychainSyncSecurityCodeController, PSRootController, PSSetupController, UIView, UIViewController;

@interface PSKeychainSyncManager : NSObject

{
    _Bool _joiningCircle;
    _Bool _joiningCircleAfterRecovery;
    int _circleNotificationToken;
    int _flow;
    KeychainSyncDevicePINController *_devicePinController;
    PSKeychainSyncSecurityCodeController *_simpleSecurityCodeController;
    PSKeychainSyncSecurityCodeController *_complexSecurityCodeController;
    KeychainSyncAdvancedSecurityCodeController *_advancedSecurityCodeChoiceController;
    PSKeychainSyncSecurityCodeController *_securityCodeRecoveryController;
    KeychainSyncPhoneNumberController *_phoneNumberController;
    KeychainSyncSMSVerificationController *_smsValidationController;
    UIView *_spinningView;
    unsigned int _spinnerCount;
    NSTimer *_credentialExpirationTimer;
    NSTimer *_joinAfterRecoveryTimeoutTimer;
    _Bool _circleWasReset;
    int _stagedSecurityCodeType;
    NSString *_appleIDUsername;
    NSString *_appleIDRawPassword;
    NSString *_appleIDPasswordOrEquivalentToken;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _passwordPromptCompletion;
    CDUnknownBlockType _changeSecurityCodeCompletion;
    CDUnknownBlockType _resetCompletion;
    CDUnknownBlockType _circleJoinCompletion;
    UIViewController *_resetPromptControllerHost;
    UIViewController *_hostViewController;
    PSSetupController *_settingsSetupController;
    PSRootController *_buddyNavigationController;
    NSString *_securityCodeRecoveryAttempt;
    NSString *_stagedSecurityCode;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType passwordPromptCompletion;
@property (copy, nonatomic) CDUnknownBlockType changeSecurityCodeCompletion;
@property (copy, nonatomic) CDUnknownBlockType resetCompletion;
@property (copy, nonatomic) CDUnknownBlockType circleJoinCompletion;
@property (retain, nonatomic) UIViewController *resetPromptControllerHost;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (retain, nonatomic) PSSetupController *settingsSetupController;
@property (retain, nonatomic) PSRootController *buddyNavigationController;
@property (retain, nonatomic) NSString *securityCodeRecoveryAttempt;
@property (nonatomic, readonly) NSString *stagedSecurityCode;
@property (nonatomic, readonly) int stagedSecurityCodeType;
@property (nonatomic) _Bool circleWasReset;
@property (nonatomic, readonly, getter=isRunningInBuddy) _Bool runningInBuddy;
@property (copy, nonatomic) NSString *appleIDUsername;
@property (copy, nonatomic) NSString *appleIDRawPassword;
@property (nonatomic, readonly) NSString *appleIDPasswordOrEquivalentToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)getStatusWithCompletion:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)_cleanup;
- (id)navigationController;
- (void)showController:(id)arg1;
- (void)keychainSyncControllerCancel:(id)arg1;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)showEnableSyncFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showRecoveryFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanupAppleIDCredentials;
- (void)showNetworkReachabilityError;
- (void)joinCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)makeSettingsSetupControllerWithSpecifier:(id)arg1 parent:(id)arg2 initialController:(id)arg3;
- (void)_finishedWithStatus:(int)arg1 error:(id)arg2;
- (void)_showResetFlowOverController:(id)arg1 withEnableBackupText:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_preSetupCancelledWithCurrentStatus;
- (void)showAlert:(id)arg1;
- (void)showPinChoiceAlert;
- (void)promptForPasswordIfNeededForWritingOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_registerForCircleChangeNotifications;
- (void)startNavigationSpinnerInViewController:(id)arg1;
- (_Bool)_resetCircleAndDisableBackupWithError:(id *)arg1;
- (void)stopNavigationSpinner;
- (void)showResetAcknowledgementIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)_disableCDPKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_promptUserToDeleteSafariSavedContentWithCompletion:(CDUnknownBlockType)arg1;
- (void)_disableKeychainSyncOverController:(id)arg1 deletingSafariPasswords:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_deleteSafariAutoFillPasswords;
- (_Bool)_errorRequiresPasswordPrompt:(id)arg1;
- (void)promptForPasswordOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_registerUserCredentialsName:(id)arg1 rawPassword:(id)arg2 error:(id *)arg3;
- (void)setAppleIDRawPassword:(id)arg1 equivalentToken:(id)arg2;
- (void)_showGenericFlowErrorAlert;
- (void)promptForPasswordIfNeededOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleCircleChangedNotification;
- (void)pinChoiceAlertDidChooseToUseDevicePasscode:(_Bool)arg1;
- (id)preferencesApp;
- (_Bool)_changeSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4 username:(id)arg5 passwordOrEquivalentToken:(id)arg6 error:(id *)arg7;
- (void)_showInvalidPhoneNumberAlertWithDigits:(id)arg1 countryInfo:(id)arg2;
- (void)setStagedSecurityCode:(id)arg1 type:(int)arg2;
- (void)_showGenericFlowErrorAlertWithDismissalHandler:(CDUnknownBlockType)arg1;
- (void)promptForPasswordIfCredentialsNotCachedOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)viewControllerForPresentingAlerts;
- (void)dismissAppleSupportPane:(id)arg1;
- (void)_registerForCircleChangeNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_defaultKeychainViewSet;
- (void)joinCircleAfterRecovery:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)showContactAppleSupportPane;
- (void)_peerApprovalFromRecoveryFlow;
- (void)_resetFromRecoveryFlow;
- (void)_startCircleJoinAfterRecoveryTimer;
- (void)_stopCircleJoinAfterRecoveryTimer;
- (void)_circleJoinAfterRecoveryTimerFired:(id)arg1;
- (void)_callCompletionWithStatus:(int)arg1 error:(id)arg2;
- (void)_autoVetSMSValidationWithToken:(id)arg1;
- (void)_recoverWithSecurityCode:(id)arg1 verificationCode:(id)arg2;
- (void)_changeToNewSecurityCode:(id)arg1 type:(int)arg2 smsTarget:(id)arg3 smsTargetCountryInfo:(id)arg4;
- (void)joinCircleAndEnableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)keychainSyncPhoneNumberController:(id)arg1 didCompleteWithPhoneNumber:(id)arg2 countryInfo:(id)arg3;
- (void)_enableSecureBackupWithPhoneNumber:(id)arg1 countryInfo:(id)arg2;
- (void)showEnableEscrowFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showRecoveryFlowWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showChangeSecurityCodeFlowWithSpecifier:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showEnableFlowWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showResetAndJoinFlowOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)disableKeychainSyncOverController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)promptForPasswordIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)promptForDevicePasscodeChangeToPasscode:(id)arg1 overController:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
