/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class LAContext, NSMutableArray, PKAuthenticator, PKAuthenticatorEvaluationRequest;

@protocol OS_dispatch_source, PKAuthenticatorDelegate;

@interface PKAuthenticatorEvaluationContext : NSObject

{
    PKAuthenticator *_authenticator;
    double _evaluationMinimumTime;
    CDUnknownBlockType _completionHandler;
    double _touchIDBeginTime;
    NSObject<OS_dispatch_source> *_liftFingerTimeout;
    _Bool _acquireUserIntent;
    unsigned long long _pearlFlags;
    NSObject<OS_dispatch_source> *_delayedBiometricMissFeedback;
    long long _coachingStatus;
    NSObject<OS_dispatch_source> *_delayedCoachingStateUpdate;
    NSMutableArray *_accessHandlers;
    _Bool _usingExternalContext;
    unsigned long long _externalContextInvalidationPolicy;
    unsigned long long _externalContextOptions;
    LAContext *_LAContext;
    unsigned long long _activeMechanisms;
    unsigned long long _completedMechanisms;
    _Bool _invalidated;
    _Bool _userIntentAvailable;
    _Bool _fingerPresent;
    _Bool _passcodeActive;
    _Bool _passphraseActive;
    _Bool _shouldLiftFinger;
    _Bool _fingerPresentTimeoutRequired;
    _Bool _fingerPresentTimeoutExpired;
    PKAuthenticatorEvaluationRequest *_request;
    long long _faceIDState;
    long long _coachingState;
    unsigned long long _presentationFlags;
    id <PKAuthenticatorDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isInvalidated) _Bool invalidated;
@property (nonatomic, readonly) PKAuthenticatorEvaluationRequest *request;
@property (nonatomic, readonly) _Bool userIntentAvailable;
@property (nonatomic, readonly) _Bool fingerPresent;
@property (nonatomic, readonly) long long faceIDState;
@property (nonatomic, readonly) long long coachingState;
@property (nonatomic, readonly) _Bool biometricMatch;
@property (nonatomic, readonly) _Bool passcodeActive;
@property (nonatomic, readonly) _Bool passphraseActive;
@property (nonatomic, readonly) _Bool shouldLiftFinger;
@property (nonatomic, readonly) _Bool fingerPresentTimeoutRequired;
@property (nonatomic, readonly) _Bool fingerPresentTimeoutExpired;
@property (nonatomic, readonly) unsigned long long presentationFlags;
@property (weak, nonatomic) id <PKAuthenticatorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_updateCoachingState;
- (void)_setCoachingState:(long long)arg1;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 forAuthenticator:(id)arg3;
- (void)delayCoachingTransition:(id)arg1;
- (void)_createContextWithExternalizedContext:(id)arg1;
- (CDUnknownBlockType)hoistCompletionHandler;
- (void)invalidateWithIntent:(long long)arg1;
- (void)_dismissAuthenticatorViewOfType:(long long)arg1;
- (void)accessLAContext:(CDUnknownBlockType)arg1;
- (unsigned long long)_presentationFlagForAuthenticatorViewType:(long long)arg1;
- (_Bool)_delegateSupportsPasscodeDismissal;
- (_Bool)_delegateSupportsPassphraseDismissal;
- (_Bool)_delegateSupportsPasscodePresentation;
- (_Bool)_delegateSupportsPassphrasePresentation;
- (unsigned long long)_didPresentFlagForAuthenticatorViewType:(long long)arg1 custom:(_Bool)arg2;
- (void)_requestRemoteAuthenticatorViewControllerOfType:(long long)arg1 withClassName:(id)arg2 bundleIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_presentAuthenticatorViewOfType:(long long)arg1 withParams:(id)arg2;
- (void)_updateFaceIDState;
- (void)_setFaceIDState:(long long)arg1;
- (void)fallbackToPasscode;
- (void)_clearLiftFingerTimer;
- (void)_setLiftFingerTimer;
- (void)handlePasscodeEventWithParameters:(id)arg1;
- (void)handlePassphraseEventWithParameters:(id)arg1;
- (void)handlePearlEventWithParameters:(id)arg1;
- (void)handleTouchIDEventWithParameters:(id)arg1;
- (void)handlePushButtonEventWithParameters:(id)arg1;
- (void)_handleLiftFinger;
- (void)evaluateWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
