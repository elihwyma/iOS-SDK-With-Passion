/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <Foundation/NSObject.h>

@class MCProfileConnection, NSHashTable, NSMutableOrderedSet, NSString, SBFCredentialSet, SBFMobileKeyBag, _SBUIBiometricKitInterface;

@protocol SBUIBiometricAuthenticationPolicy;

@interface SBUIBiometricResource : NSObject

{
    _SBUIBiometricKitInterface *_biometricInterface;
    MCProfileConnection *_profileConnection;
    id <SBUIBiometricAuthenticationPolicy> _authPolicy;
    SBFMobileKeyBag *_keybag;
    unsigned long long _lastEvent;
    _Bool _hasMesaHardware;
    _Bool _hasPearlHardware;
    _Bool _isMatchingAllowed;
    _Bool _isMatchingEnabled;
    _Bool _isPresenceDetectionAllowed;
    _Bool _isForegroundFingerDetectionEnabled;
    _Bool _isBackgroundFingerDetectionEnabled;
    _Bool _isFingerDetectionEnabledThroughHIDChannel;
    _Bool _isFaceDetectionEnabled;
    _Bool _screenIsOn;
    _Bool _isAuthenticated;
    _Bool _shouldSendFingerOffNotification;
    _Bool _shouldSendFaceOutOfViewNotification;
    _Bool _wasMatchingBeforeKeybagStateChangeOccurred;
    SBFCredentialSet *_unlockCredentialSet;
    NSHashTable *_observers;
    NSMutableOrderedSet *_matchAssertions;
    NSMutableOrderedSet *_normalFingerDetectAssertions;
    NSMutableOrderedSet *_HIDEventsOnlyFingerDetectAssertions;
    NSMutableOrderedSet *_faceDetectAssertions;
    NSMutableOrderedSet *_simulatedLockoutAssertions;
    Class _bkMatchPearlOperationClass;
    id <SBUIBiometricAuthenticationPolicy> _authenticationPolicy;
}

@property (retain, nonatomic, getter=_keybagInterface, setter=_setKeybagInterface:) SBFMobileKeyBag *keybagInterface;
@property (retain, nonatomic, getter=_biometricKitInterface, setter=_setBiometricKitInterface:) _SBUIBiometricKitInterface *biometricKitInterface;
@property (retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection;
@property (retain, nonatomic) id <SBUIBiometricAuthenticationPolicy> authenticationPolicy;
@property (retain, nonatomic) SBFCredentialSet *unlockCredentialSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasEnrolledIdentities;
@property (nonatomic, readonly) _Bool hasBiometricAuthenticationCapabilityEnabled;
@property (nonatomic, readonly, getter=isFingerOn) _Bool fingerOn;
@property (nonatomic, readonly, getter=isFingerDetectEnabled) _Bool fingerDetectEnabled;
@property (nonatomic, readonly) _Bool hasMesaSupport;
@property (nonatomic, readonly) _Bool hasPearlSupport;
@property (nonatomic, readonly, getter=isPearlDetectEnabled) _Bool pearlDetectEnabled;
@property (nonatomic, readonly, getter=isMatchingEnabled) _Bool matchingEnabled;
@property (nonatomic, readonly, getter=isMatchingAllowed) _Bool matchingAllowed;
@property (nonatomic, readonly) unsigned long long biometricLockoutState;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (void)biometricKitInterface:(id)arg1 enrolledIdentitiesDidChange:(_Bool)arg2;
- (void)biometricKitInterface:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (void)resumeMatchingAdvisory:(_Bool)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1 HIDEventsOnly:(_Bool)arg2;
- (id)acquireFaceDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)refreshMatchMode;
- (void)resumeMatchingForAssertion:(id)arg1 advisory:(_Bool)arg2;
- (id)initWithBiometricKitInterface:(id)arg1;
- (void)_profileSettingsChanged:(id)arg1;
- (void)_removeMatchingAssertion:(id)arg1;
- (void)_addMatchingAssertion:(id)arg1;
- (void)_reevaluateMatching;
- (void)_reallyResumeMatchingForAssertion:(id)arg1 advisory:(_Bool)arg2;
- (void)_removeFingerDetectionWantedAssertion:(id)arg1 HIDEventsOnly:(_Bool)arg2;
- (void)_addFingerDetectionWantedAssertion:(id)arg1 HIDEventsOnly:(_Bool)arg2;
- (void)_removeFaceDetectionWantedAssertion:(id)arg1;
- (void)_addFaceDetectionWantedAssertion:(id)arg1;
- (void)_removeSimulatedLockoutAssertion:(id)arg1;
- (void)_addSimulatedLockoutAssertion:(id)arg1;
- (void)_reallySetAuthenticated:(_Bool)arg1 keybagState:(id)arg2;
- (void)_matchingAllowedStateMayHaveChangedForReason:(id)arg1;
- (void)_presenceDetectAllowedStateMayHaveChangedForReason:(id)arg1;
- (void)_deactivateAssertion:(id)arg1;
- (void)_deactivateAllPearlAssertions;
- (void)_updateHandlersForEvent:(unsigned long long)arg1;
- (void)_clearFinishedOperationsIfNeededForAssertion:(id)arg1;
- (void)_reevaluateFingerDetection;
- (void)_reevaluateFaceDetection;
- (void)_activateMatchAssertion:(id)arg1;
- (void)_activateFingerDetectAssertion:(id)arg1;
- (void)_activateFaceDetectAssertion:(id)arg1;
- (void)_notifyObserversOfEvent:(unsigned long long)arg1;
- (void)_setAuthenticated:(_Bool)arg1;
- (void)_forceBioLockout;
- (void)noteScreenWillTurnOff;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOn;
- (void)_deviceWillWake;

@end
