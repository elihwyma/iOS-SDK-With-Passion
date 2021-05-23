/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, SBPasscodeAlertItem, SBPasscodeComplianceAlertItem;

@protocol OS_dispatch_queue;

@interface SBPasscodeController : NSObject

{
    SBPasscodeAlertItem *_passcodeAlertItem;
    int _mode;
    NSString *_previousPasscode;
    NSString *_newPasscode;
    int _unlockScreenType;
    int _simplePasscodeType;
    SBPasscodeComplianceAlertItem *_complianceAlertItem;
    NSDate *_forcedComplianceDate;
    id _manageConfigurationEffectiveSettingsObserver;
    id _telephonyNotificationObserver;
    int _restoreCompletedAlertStateChangedToken;
    _Bool _delayedComplianceAlertUntilAfterRestoreCompletedAlert;
    NSObject<OS_dispatch_queue> *_passcodeComplianceQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_passwordEntered:(id)arg1;
- (void)_abort;
- (void)_userWantsToComplyNow:(_Bool)arg1;
- (void)_startListeningToManagedConfigurationNotification;
- (void)_stopListeningToManagedConfigurationNotification;
- (void)_fetchAndSetUnlockScreenTypeForNewPasscode:(_Bool)arg1;
- (void)_presentPasscodeAlertItemWithMode:(int)arg1 alertItemErrorString:(id)arg2 unlockScreenType:(int)arg3;
- (void)_stopListeningToRestoreCompletedAlertStateChangedNotifications;
- (void)checkPasscodeCompliance;
- (void)forceUserToChangePasscode;
- (void)_stopListeningToTelephonyNotifications;
- (void)_didEndCall;
- (_Bool)_isRestoreCompletedAlertActive;
- (void)_activateComplianceAlert;
- (void)_startListeningToTelephonyNotifications;
- (void)_startListeningToRestoreCompletedAlertStateChangedNotifications;

@end
