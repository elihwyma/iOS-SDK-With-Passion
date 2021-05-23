/*
 Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

#import <Preferences/PSListController.h>

@class HMHomeManager, NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUIPasscodeLockController : PSListController

{
    int _policyDictatedMaxFailedAttempts;
    PSSpecifier *_voiceDialSpecifier;
    PSSpecifier *_voiceDialGroupSpecifier;
    _Bool _canUnlockWatch;
    HMHomeManager *_homeManager;
}

@property (nonatomic) _Bool canUnlockWatch;
@property (retain, nonatomic) HMHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)passcodeGracePeriod;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (_Bool)isPasscodeSet;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)specifiers;
- (_Bool)canBeShownFromSuspendedState;
- (void)showPINSheet:(id)arg1;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)didAcceptRemovePIN;
- (void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)isWalletRestricted;
- (void)profileNotification:(id)arg1;
- (void)updateGracePeriodSpecifier;
- (long long)fingerprintCount;
- (void)_showDeleteSavedFingerprintsAlert;
- (void)presentAppleIDAuthenticationController;
- (void)_updateGracePeriodForSpecifier:(id)arg1;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)arg1;
- (_Bool)shouldShowVoiceDial;
- (_Bool)isVoiceDialRestricted;
- (void)updateVoiceDialGroup;
- (void)_setWipeEnabled:(_Bool)arg1;
- (void)_didUpdatePasscode:(id)arg1;
- (void)showKeychainAlert;
- (void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2;
- (id)enabledInLockScreen:(id)arg1;
- (void)setEnabledInLockScreenForUSB:(id)arg1 specifier:(id)arg2;
- (id)enabledInLockScreenForUSB:(id)arg1;
- (_Bool)isAssistantRestricted;
- (id)_makeWipeDeviceGroupFooter;
- (void)disablePasscodeRequiredSpecifiers:(id)arg1;
- (void)togglePasscode:(id)arg1;
- (id)graceValue:(id)arg1;
- (void)setGraceValue:(id)arg1 specifier:(id)arg2;
- (id)voiceDial:(id)arg1;
- (void)setVoiceDial:(id)arg1 specifier:(id)arg2;
- (id)assistantUnderLockEnabled:(id)arg1;
- (void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)homeControlAccessAllowedWhenLocked:(id)arg1;
- (void)setHomeControlAccessAllowedWhenLocked:(id)arg1 specifier:(id)arg2;
- (id)wallet:(id)arg1;
- (void)setWallet:(id)arg1 specifier:(id)arg2;
- (_Bool)showReplyWithMessage;
- (id)wipeEnabled:(id)arg1;
- (void)setWipeEnabled:(id)arg1 specifier:(id)arg2;

@end
