/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSMutableOrderedSet, NSString, PKPassLibrary, SBUIBiometricResource, SBWalletPreArmController, SBWalletPrearmRecognizer, _SBPendingMesaUnlockBehaviorUnlockRequest;

@protocol BSInvalidatable, SBBiometricUnlockBehavior, SBLockScreenBiometricAuthenticationCoordinatorDelegate;

@interface SBLockScreenBiometricAuthenticationCoordinator : NSObject <Swift>

{
    SBUIBiometricResource *_biometricResource;
    id <BSInvalidatable> _fingerDetectEnabledAssertion;
    id <SBLockScreenBiometricAuthenticationCoordinatorDelegate> _delegate;
    id <SBBiometricUnlockBehavior> _autoUnlockBehavior;
    SBWalletPreArmController *_walletPreArmController;
    SBWalletPrearmRecognizer *_walletPrearmRecognizer;
    _Bool _presentingWalletInterface;
    _Bool _didMatchBeforeWalletPrearmRecognizerTimeout;
    PKPassLibrary *_passLibrary;
    unsigned long long _state;
    _Bool _isAuthenticated;
    id <BSInvalidatable> _matchingWantedAssertion;
    unsigned long long _matchingWantedAssertionMode;
    _Bool _bioAuthenticatedWhileMenuButtonDown;
    _SBPendingMesaUnlockBehaviorUnlockRequest *_pendingUnlockRequest;
    NSMutableOrderedSet *_activePasscodeMatchAssertions;
    NSHashTable *_disabledAssertions;
    NSHashTable *_disabledUnlockAssertions;
    NSHashTable *_disabledAutoUnlockAssertions;
}

@property (nonatomic, readonly, getter=_walletPrearmRecognizer) SBWalletPrearmRecognizer *walletPrearmRecognizer;
@property (nonatomic, readonly, getter=_state) unsigned long long state;
@property (retain, nonatomic, getter=_getPassLibrary, setter=_setPassLibrary:) PKPassLibrary *passLibrary;
@property (retain, nonatomic, getter=_setAutoUnlockBehavior, setter=_setAutoUnlockBehavior:) id <SBBiometricUnlockBehavior> autoUnlockBehavior;
@property (weak, nonatomic) id <SBLockScreenBiometricAuthenticationCoordinatorDelegate> delegate;
@property (nonatomic) _Bool bioAuthenticatedWhileMenuButtonDown;
@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isWalletPreArmDisabled) _Bool walletPreArmDisabled;
@property (nonatomic, readonly, getter=isUnlockingDisabled) _Bool isUnlockingDisabled;
@property (nonatomic, readonly, getter=isAutoUnlockingDisabled) _Bool autoUnlockingDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)passLibraryReceivedInterruption;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)biometricResource:(id)arg1 matchingAllowedDidChange:(_Bool)arg2;
- (id)acquireDisableAutoUnlockAssertionForReason:(id)arg1;
- (void)walletPrearmRecognizer:(id)arg1 didFailToRecognizeForReason:(unsigned long long)arg2;
- (void)walletPrearmRecognizerDidRecognize:(id)arg1;
- (void)_walletPreArmDisabledDidChange:(id)arg1;
- (void)_updateMatchingForState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_resetStateForReason:(id)arg1;
- (void)_setupPreArmRecognizerIfPossibleForReason:(id)arg1;
- (_Bool)_hasActivePasscodeViews;
- (_Bool)_isWalletPreArmAllowed;
- (void)_setState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_handlePassKitDismissalIfNecessaryWithReason:(id)arg1;
- (void)_invalidateWalletPreArmRecognizer;
- (_Bool)_isMatchingEffectivelyDisabled;
- (id)acquireDisableUnlockAssertionForReason:(id)arg1;
- (void)_pendUnlockRequest:(id)arg1;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (void)_removePasscodeMatchingAssertion:(id)arg1;
- (void)_addPasscodeMatchingAssertion:(id)arg1;
- (void)_stateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (_Bool)_stateWantsMatching:(unsigned long long)arg1 outMatchMode:(unsigned long long *)arg2;
- (void)_clearPendingUnlockRequest;
- (void)_createFingerDetectAssertion;
- (void)_toggleAutoUnlockBehaviorEnabled:(_Bool)arg1;
- (void)_clearFingerDetectAssertion;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (id)initWithBiometricResource:(id)arg1 walletPreArmController:(id)arg2;
- (id)acquireDisableCoordinatorAssertionForReason:(id)arg1;
- (id)acquireDisableWalletPreArmAssertionForReason:(id)arg1;
- (void)_noteMenuButtonSinglePress;
- (void)_noteMenuButtonDoublePress;

@end
