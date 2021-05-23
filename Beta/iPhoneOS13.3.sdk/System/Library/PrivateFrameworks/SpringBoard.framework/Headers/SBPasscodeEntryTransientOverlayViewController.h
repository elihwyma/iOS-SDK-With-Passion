/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSLockScreenPearlSettings, NSString, SBFUserAuthenticationController, SBUIPasscodeViewWithLockScreenStyle;

@protocol SBPasscodeEntryTransientOverlayViewControllerDelegate, SBUIPasscodeLockView;

@interface SBPasscodeEntryTransientOverlayViewController : SBTransientOverlayViewController <Swift>

{
    _Bool _attemptingUnlock;
    SBFUserAuthenticationController *_authenticationController;
    id <SBUIPasscodeLockView> _passcodeRequester;
    SBUIPasscodeViewWithLockScreenStyle *_passcodeView;
    CSLockScreenPearlSettings *_pearlSettings;
    _Bool _showEmergencyCallButton;
    _Bool _useBiometricPresentation;
    id <SBPasscodeEntryTransientOverlayViewControllerDelegate> _delegate;
    NSString *_unlockDestination;
}

@property (weak, nonatomic) id <SBPasscodeEntryTransientOverlayViewControllerDelegate> delegate;
@property (nonatomic) _Bool showEmergencyCallButton;
@property (nonatomic) _Bool useBiometricPresentation;
@property (copy, nonatomic) NSString *unlockDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)isContentOpaque;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)initWithAuthenticationController:(id)arg1;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (long long)idleTimerMode;
- (long long)idleTimerDuration;
- (long long)idleWarnMode;
- (void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(_Bool)arg2;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)preferredDisplayLayoutElementIdentifier;
- (void)_updatePrototypeSettings;
- (void)_attemptUnlock:(id)arg1 passcode:(id)arg2;

@end
