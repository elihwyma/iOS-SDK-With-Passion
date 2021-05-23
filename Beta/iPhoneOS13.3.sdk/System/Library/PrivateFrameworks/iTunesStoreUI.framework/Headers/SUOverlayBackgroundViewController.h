/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUViewController.h>

@class NSArray, NSMutableArray, NSString, SUOverlayViewController, SUScalingFlipView, SUTouchCaptureView, UISwipeGestureRecognizer;

@protocol SUOverlayBackgroundDelegate;

@interface SUOverlayBackgroundViewController : SUViewController

{
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    _Bool _askingToDismissEverything;
    _Bool _askingToDismissSelection;
    SUTouchCaptureView *_captureView;
    id <SUOverlayBackgroundDelegate> _delegate;
    struct CGRect _keyboardFrame;
    long long _selectedViewControllerIndex;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property (nonatomic) id <SUOverlayBackgroundDelegate> delegate;
@property (nonatomic, readonly) SUOverlayViewController *selectedViewController;
@property (nonatomic, readonly) NSArray *viewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_sendDidDismiss;
- (void)_swipe:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)_selectedViewController;
- (void)_performNextAction;
- (void)_removeViewController:(id)arg1;
- (void)storePage:(id)arg1 finishedWithSuccess:(_Bool)arg2;
- (id)copyArchivableContext;
- (void)restoreArchivableContext:(id)arg1;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (_Bool)shouldExcludeFromNavigationHistory;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (id)copyArchivableJetsamContext;
- (void)dismissOverlay:(id)arg1 animated:(_Bool)arg2;
- (void)populateNavigationHistoryWithItems:(id)arg1;
- (id)viewControllerForScriptWindowContext:(id)arg1;
- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (void)_tearDownFlipView;
- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;
- (void)_enqueueAction:(id)arg1;
- (double)_viewControllerKeyboardOffset;
- (struct CGRect)_centeredFrameForViewController:(id)arg1;
- (double)_viewControllerHorizontalPadding;
- (void)layoutViewControllers;
- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;
- (void)_captureViewAction:(id)arg1;
- (void)_reloadGestureRecognizers;
- (void)_addViewController:(id)arg1;
- (void)_shouldDismissFinishedWithValue:(id)arg1;
- (void)_overlayAnimationDidFinish;
- (void)_finishDismissOfViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_finishDismissAction:(id)arg1;
- (void)_finishDismissEverythingAction:(id)arg1;
- (void)_finishPresentAction:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (struct CGRect)_frameForSlideFromBottomForViewController:(id)arg1;
- (void)_performFlipForAction:(id)arg1;
- (void)_performDismissAction:(id)arg1;
- (void)_performDismissEverythingAction:(id)arg1;
- (void)_performPresentAction:(id)arg1;
- (void)overlayPageViewTapped:(id)arg1;

@end
