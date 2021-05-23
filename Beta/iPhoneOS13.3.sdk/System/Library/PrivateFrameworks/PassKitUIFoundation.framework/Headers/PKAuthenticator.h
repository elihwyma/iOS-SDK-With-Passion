/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <Foundation/NSObject.h>

@class PKAuthenticatorEvaluationContext;

@protocol PKAuthenticatorDelegate;

@interface PKAuthenticator : NSObject

{
    unsigned long long _authenticationIdentifier;
    struct os_unfair_lock_s _lock;
    _Bool _invalidated;
    PKAuthenticatorEvaluationContext *_context;
    id <PKAuthenticatorDelegate> _delegate;
    double _fingerPresentTimeout;
}

@property (weak, nonatomic) id <PKAuthenticatorDelegate> delegate;
@property (nonatomic) double fingerPresentTimeout;
@property (nonatomic, readonly) unsigned long long authenticationIdentifier;
@property (nonatomic, readonly) long long faceIDState;
@property (nonatomic, readonly) long long coachingState;
@property (nonatomic, readonly) _Bool fingerPresent;
@property (nonatomic, readonly) _Bool passcodeActive;
@property (nonatomic, readonly) _Bool passphraseActive;
@property (nonatomic, readonly) _Bool passcodeWasPresented;
@property (nonatomic, readonly) _Bool fingerPresentTimeoutRequired;
@property (nonatomic, readonly) _Bool fingerPresentTimeoutExpired;

+ (_Bool)canPerformPSD2StyleBuyForAccessControlRef:(struct __SecAccessControl *)arg1;
+ (unsigned long long)currentStateForPolicy:(long long)arg1;
+ (unsigned long long)cachedStateForPolicy:(long long)arg1;
+ (void)resetSharedRootContextWithCompletion:(CDUnknownBlockType)arg1;
+ (id)viewServiceBundleID;
+ (void)removeUserIntentAvailable;
+ (unsigned long long)currentStateForAccessControl:(struct __SecAccessControl *)arg1;
+ (_Bool)isUserIntentAvailable;
+ (unsigned long long)_currentStateForMechanisms:(id)arg1;
+ (void)preheatAuthenticator;
+ (void)delayCoachingStateTransition;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)_context;
- (id)initWithDelegate:(id)arg1;
- (void)cancelEvaluationWithOptions:(unsigned long long)arg1;
- (void)evaluateRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fallbackToSystemPasscodeUI;
- (void)cancelEvaluation;
- (void)restartEvaluation;
- (void)setFingerPresentTimeout:(double)arg1 preventRestart:(_Bool)arg2;
- (_Bool)_delegateSupportsPasscodePresentation;
- (_Bool)_delegateSupportsPassphrasePresentation;
- (id)_swapContext:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)_optionsForEvaluationRequest:(id)arg1;
- (id)_swapContext:(id)arg1;
- (void)_evaluateEvaluationContext:(id)arg1;
- (void)_handleInstructionsForRequest:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accessExternalizedContextWithCompletion:(CDUnknownBlockType)arg1;

@end
