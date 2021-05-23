/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>

@class SBAppStatusBarSettingsAssertion, SBAppSwitcherSettings, SBAssistantController, SBAssistantRootViewController, SBMainWorkspaceTransaction, SBTransientOverlayPresentationManager, SBTransientOverlayViewController, UINotificationFeedbackGenerator;

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction

{
    SBAppSwitcherSettings *_settings;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    SBAssistantRootViewController *_assistantRootViewController;
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    SBTransientOverlayViewController *_transientOverlayViewController;
    struct CGPoint _dismissingViewTouchOffset;
    struct CGRect _originalBounds;
    struct CGPoint _originalCenter;
    _Bool _hasPreservedInputViews;
    _Bool _isDismissing;
    SBAssistantController *_assistantController;
    long long _dismissalType;
    SBMainWorkspaceTransaction *_currentTransaction;
}

@property (retain, nonatomic) SBAssistantController *assistantController;
@property (nonatomic, readonly) long long dismissalType;
@property (retain, nonatomic) SBMainWorkspaceTransaction *currentTransaction;

- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (id)_layoutSettings;
- (id)_viewForGesture;
- (id)_dismissalFeedbackGenerator;
- (void)_beginWithGesture:(id)arg1;
- (void)_updateWithGesture:(id)arg1;
- (void)_finishWithGesture:(id)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_updateDismissingViewLayoutAndStyleForGesture;
- (_Bool)_shouldDismissImmmediatelyAtFullGestureProgress;
- (double)_swipeUpGestureProgress;
- (void)_finishInteractionAndDismiss:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_dismissClientAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (double)_zoomOutDelay;
- (double)_scaleForDismissal;
- (void)_setFluidDismissalState:(id)arg1;
- (void)_cleanupHierarchyForDismissal:(_Bool)arg1;
- (double)_scaleForGestureProgress;
- (double)_yOffsetForGestureProgress;
- (double)_backgroundWeightingForGestureProgress;
- (double)_clientAnimationsDelay;
- (double)_hapticDelay;
- (long long)_notificationFeedbackType;
- (double)_swipeUpGestureTranslation;
- (id)initWithTransitionRequest:(id)arg1 assistantController:(id)arg2 dismissalType:(long long)arg3;
- (void)systemGestureStateChanged:(id)arg1;

@end
