/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSAtomicSignal, CADisplay, CADisplayMode, FBSDisplayConfiguration, FBSDisplayIdentity, FBSDisplayLayoutPublisher, FBScene, NSString, SBApplication, SBApplicationSceneHandle, SBSExternalDisplayLayoutElement, _UIRootWindow;

@protocol BSInvalidatable, OS_dispatch_queue;

@interface SBExternalDisplayPresenter : NSObject <Swift>

{
    FBSDisplayLayoutPublisher *_layoutPublisher;
    FBSDisplayIdentity *_identity;
    CADisplay *_caDisplay;
    _Bool _invalidated;
    FBSDisplayConfiguration *_currentConfiguration;
    FBSDisplayConfiguration *_currentReportedConfiguration;
    SBApplication *_foregroundApp;
    SBApplicationSceneHandle *_foregroundAppSceneHandle;
    FBScene *_foregroundAppScene;
    BSAtomicSignal *_foregroundAppSceneTransactionInvalidator;
    NSObject<OS_dispatch_queue> *_displayMutationQueue;
    unsigned long long _displayMutationEnqueuedCount;
    unsigned long long _displayMutationCompletedCount;
    CADisplayMode *_requestedMode;
    NSString *_requestedOverscanAdjustment;
    _UIRootWindow *_rootWindow;
    FBSDisplayConfiguration *_rootWindowConfiguration;
    SBApplicationSceneHandle *_presentationSceneHandle;
    FBScene *_presentationScene;
    BSAtomicSignal *_presentationSceneActivationInvalidator;
    _Bool _hasEnqueuedPresentationUpdate;
    _Bool _presentationSceneHasActivated;
    SBSExternalDisplayLayoutElement *_presentedLayoutElement;
    id <BSInvalidatable> _presentedLayoutElementAssertion;
    NSString *_preventIdleSleepReason;
    SBApplication *_preventIdleSleepApp;
    _Bool _preventIdleSleepPresenting;
    long long _powerMode;
    BSAtomicSignal *_idleOffTimerInvalidation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (id)initWithLayoutPublisher:(id)arg1 displayConfiguration:(id)arg2;
- (id)updateToConfiguration:(id)arg1 withForegroundApp:(id)arg2;
- (void)_setPreventIdleSleepForApp:(id)arg1 presenting:(_Bool)arg2;
- (id)_createUpdateTransaction;
- (void)_enqueuePresentationUpdate;
- (void)_ensureMode:(id)arg1 overscanCompensation:(long long)arg2;
- (void)_updateHostingIfNecessary;

@end
