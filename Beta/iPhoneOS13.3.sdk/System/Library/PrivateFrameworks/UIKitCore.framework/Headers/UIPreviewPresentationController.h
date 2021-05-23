/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPresentationController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSHashTable, NSString, UIResponder, UITapGestureRecognizer, UIView, UIVisualEffectView, UIWindow;

@protocol UIPreviewPresentationControllerDelegate;

@interface UIPreviewPresentationController : UIPresentationController <Swift>

{
    _Bool _appliesVisualEffectsToPresentingView;
    id <UIPreviewPresentationControllerDelegate> _previewPresentationDelegate;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    UIVisualEffectView *_presentationContainerEffectView;
    UIView *_localStatusBar;
    NSArray *_keyboardSnapshotters;
    NSHashTable *_keyboardWindows;
    UIResponder *_currentPinnedResponder;
    UIWindow *_presentationWindow;
    CDUnknownBlockType _containerViewConfigurationBlock;
    CDUnknownBlockType _dismissalTransitionDidEndBlock;
}

@property (weak, nonatomic) id <UIPreviewPresentationControllerDelegate> previewPresentationDelegate;
@property (retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer;
@property (nonatomic) _Bool appliesVisualEffectsToPresentingView;
@property (retain, nonatomic) UIVisualEffectView *presentationContainerEffectView;
@property (retain, nonatomic) UIView *localStatusBar;
@property (copy, nonatomic) NSArray *keyboardSnapshotters;
@property (copy, nonatomic) NSHashTable *keyboardWindows;
@property (weak, nonatomic) UIResponder *currentPinnedResponder;
@property (weak, nonatomic) UIWindow *presentationWindow;
@property (copy, nonatomic) CDUnknownBlockType containerViewConfigurationBlock;
@property (copy, nonatomic) CDUnknownBlockType dismissalTransitionDidEndBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(_Bool)arg2;
+ (_Bool)_shouldApplyVisualEffectsToPresentingView;
+ (_Bool)_shouldInterdictServiceViewTouches;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (long long)presentationStyle;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)presentationTransitionWillBegin;
- (_Bool)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (_Bool)_presentationPotentiallyUnderlapsStatusBar;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (_Bool)_shouldKeepCurrentFirstResponder;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)_shouldSavePresentedViewControllerForStateRestoration;
- (_Bool)_allowsAutorotation;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg1;
- (id)_presentationContainerView;
- (void)_prepareContainerViewForPresentationTransition;
- (void)_prepareDismissGestureRecognizersIfNeeded;
- (void)_finalizeAfterDismissalTransition;
- (void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg1;
- (void)_prepareStatusBarForPresentationTransition;
- (void)_prepareKeyboardForPresentationTransition;
- (void)_layoutForInteractiveHighlight;
- (void)_layoutForPreview;
- (void)_animatePreviewTransitionIfNeeded:(id)arg1;
- (void)_layoutForCancel;
- (void)_handleDismissGestureRecognizer:(id)arg1;
- (void)_applyVisualEffectsForPresentationPhase:(unsigned long long)arg1;
- (void)_interactiveHighlightTransitionDidEnd:(_Bool)arg1;
- (void)_previewTransitionDidEnd:(_Bool)arg1;
- (void)_cancelTransitionDidEnd:(_Bool)arg1;

@end
