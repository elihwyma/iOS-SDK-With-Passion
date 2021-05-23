/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSHashTable, NSMutableArray, NSString, PCPersistentTimer, SBFAuthenticationAssertion, SBFAuthenticationAssertionManager, SBFMobileKeyBag, SBFMobileKeyBagState, SBFSecureDisplayCoordinator;

@protocol SBFAuthenticationPolicy, SBFUserAuthenticationModel;

@interface SBFUserAuthenticationController : NSObject

{
    SBFMobileKeyBag *_keybag;
    NSMutableArray *_responders;
    NSHashTable *_observers;
    id <SBFUserAuthenticationModel> _model;
    long long _authenticationState;
    NSDate *_lastRevokedAuthenticationDate;
    SBFAuthenticationAssertionManager *_assertionManager;
    id <SBFAuthenticationPolicy> _policy;
    NSString *_lastIncorrectPasscodeAttempt;
    SBFAuthenticationAssertion *_transientAuthCheckingAssertion;
    struct __CFRunLoopObserver *_runLoopObserver;
    PCPersistentTimer *_unblockTimer;
    long long _cachedAuthFlag;
    SBFSecureDisplayCoordinator *_secureDisplayCoordinator;
    SBFMobileKeyBagState *_cachedExtendedState;
}

@property (retain, nonatomic, getter=_policy, setter=_setPolicy:) id <SBFAuthenticationPolicy> policy;
@property (nonatomic, readonly) NSDate *lastRevokedAuthenticationDate;
@property (nonatomic, readonly) _Bool inSecureDisplayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)isAuthenticated;
- (void)_clearBlockedState;
- (void)keybagDidUnlockForTheFirstTime:(id)arg1;
- (id)publicDescription;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (_Bool)hasPasscodeSet;
- (id)initWithAssertionManager:(id)arg1 policy:(id)arg2 keybag:(id)arg3 model:(id)arg4;
- (void)_setModel:(id)arg1;
- (void)_setupPolicy:(id)arg1;
- (void)_scheduleUnblockTimer;
- (void)_clearUnblockTimer;
- (void)_addAsFirstResponder:(id)arg1;
- (void)_removeAuthResponder:(id)arg1;
- (_Bool)_processAuthenticationRequest:(id)arg1 responder:(id)arg2;
- (_Bool)_isUserAuthenticated;
- (void)_revokeAuthenticationImmediately:(_Bool)arg1 forPublicReason:(id)arg2;
- (void)_updateAuthenticationStateImmediately:(_Bool)arg1 forPublicReason:(id)arg2;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)_notifyAboutTemporaryBlockStatusChanged;
- (_Bool)_isTemporarilyBlocked;
- (_Bool)_isPermanentlyBlocked;
- (void)_updateAuthenticationStateAndDateForLockState:(id)arg1;
- (void)_uncachePasscodeIfNecessary;
- (_Bool)isAuthenticatedCached;
- (_Bool)_authenticateIfInGracePeriod;
- (void)_updateAuthenticationStateForPublicReason:(id)arg1;
- (id)_cachedLockStateExtended;
- (id)createGracePeriodAssertionWithReason:(id)arg1;
- (void)_setup_runLoopObserverIfNecessary;
- (void)_invalidateCachedPasscodeLockState;
- (void)_updateSecureModeIfNecessaryForNewAuthState;
- (void)_setAuthState:(long long)arg1;
- (_Bool)_shouldRevokeAuthenticationNow;
- (long long)_evaluateAuthenticationAttempt:(id)arg1 outError:(id *)arg2;
- (void)_notifyClientsOfAuthenticationResult:(long long)arg1 forRequest:(id)arg2 error:(id)arg3 withResponder:(id)arg4;
- (_Bool)_boolForAuthenticationResult:(long long)arg1;
- (void)_handleSuccessfulAuthentication:(id)arg1 responder:(id)arg2;
- (void)_handleFailedAuthentication:(id)arg1 error:(id)arg2 responder:(id)arg3;
- (void)_handleInvalidAuthentication:(id)arg1 responder:(id)arg2;
- (_Bool)_isInGracePeriodState;
- (_Bool)_performNilPasscodeCheck;
- (long long)_evaluatePasscodeAttempt:(id)arg1 outError:(id *)arg2;
- (long long)_evaluateBiometricAttempt:(id)arg1;
- (_Bool)_isInBioUnlockState;
- (void)_refreshModelCacheIfNeeded;
- (void)_unblockTimerFired;
- (void)deviceLockModelRequestsDeviceWipe:(id)arg1;
- (void)deviceLockStateMayHaveChangedForModel:(id)arg1;
- (id)createKeybagUnlockAssertionWithReason:(id)arg1;
- (void)revokeAuthenticationImmediatelyForPublicReason:(id)arg1;
- (void)revokeAuthenticationImmediatelyIfNecessaryForPublicReason:(id)arg1;
- (void)revokeAuthenticationIfNecessaryForPublicReason:(id)arg1;
- (_Bool)hasAuthenticatedAtLeastOnceSinceBoot;
- (id)initWithAssertionManager:(id)arg1 policy:(id)arg2;
- (void)addAsFirstResponder:(id)arg1;
- (void)removeResponder:(id)arg1;
- (void)processAuthenticationRequest:(id)arg1 responder:(id)arg2;
- (void)processAuthenticationRequest:(id)arg1;
- (void)_addAuthenticationAssertion:(id)arg1;
- (void)_removeAuthenticationAssertion:(id)arg1;
- (_Bool)_isAssertionValid:(id)arg1;
- (void)_addPrivateAuthenticationObserver:(id)arg1;
- (void)_removePrivateAuthenticationObserver:(id)arg1;
- (double)_timeUntilUnblockedSinceReferenceDate;
- (void)_noteDeviceLockStateMayHaveChangedForExternalReasons;

@end
