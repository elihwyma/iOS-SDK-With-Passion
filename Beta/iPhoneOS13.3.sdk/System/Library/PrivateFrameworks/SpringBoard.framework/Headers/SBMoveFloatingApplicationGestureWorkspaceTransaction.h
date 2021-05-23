/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherGestureWorkspaceTransaction.h>

@class NSMutableDictionary, SBApplicationSceneUpdateTransaction;

@interface SBMoveFloatingApplicationGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction

{
    _Bool _tryPreemptiveFloatingApplicationActivation;
    _Bool _didAddActivateFloatingApplicationTransaction;
    SBApplicationSceneUpdateTransaction *_activateFloatingApplicationTransaction;
    NSMutableDictionary *_statusBarAssertions;
    struct CGRect _initialFloatingApplicationFrame;
}

- (void)_begin;
- (void)_didComplete;
- (long long)_gestureType;
- (void)_invalidateStatusBarAssertions;
- (void)_beginWithGesture:(id)arg1;
- (void)_updateWithGesture:(id)arg1;
- (void)_finishWithGesture:(id)arg1;
- (void)_acquireStatusBarAssertions;
- (void)_startSuppressingKeyboardForFloatingApplication;
- (void)_stopSuppressingKeyboard;
- (void)_tryPreemptiveFloatingApplicationActivationIfNecessaryWithGesture:(id)arg1;
- (void)_updateStatusBarAssertionsForGesture;
- (void)_performBlockWithLiveContentOverlayUpdatesSuspended:(CDUnknownBlockType)arg1;
- (void)_updateStatusBarAssertionsForLayoutState;
- (id)_transitionRequestForPreemptiveFloatingApplicationActivation;

@end
