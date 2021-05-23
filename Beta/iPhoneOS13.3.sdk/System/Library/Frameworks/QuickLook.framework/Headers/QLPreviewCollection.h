/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h>

#import <QuickLook/Swift-Protocol.h>

@class NSString, QLAppearance, QLItemViewController, QLPageViewController, QLPinchRotationTracker, QLPreviewItemStore, QLSwipeDownTracker, QLTransitionContext, QLTransitionDriver, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;

@protocol QLPreviewControllerStateProtocol, QLTransitionControllerProtocol;

__attribute__((visibility("hidden")))
@interface QLPreviewCollection : UIViewController <Swift>

{
    struct _NSRange _previewItemRange;
    long long _currentItemIndex;
    QLPreviewItemStore *_itemStore;
    UIView *_localAccessoryViewContainer;
    UIView *_remoteAccessoryViewContainer;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_verticalPanGesture;
    UISwipeGestureRecognizer *_pageSwipeGesture;
    UIPanGestureRecognizer *_pagePanGesture;
    QLAppearance *_appearance;
    NSString *_loadingString;
    unsigned long long _visibilityState;
    _Bool _previewCollectionIsPartOfViewHierarchy;
    unsigned long long _appearanceActions;
    _Bool _isAvailable;
    _Bool _allowInteractiveTransitions;
    _Bool _fullScreen;
    _Bool _isEditing;
    _Bool _isTransitioningPage;
    _Bool _hasTriggeredInteractiveTransitionAnimation;
    QLPageViewController *_pageViewController;
    id <QLPreviewControllerStateProtocol> _stateManager;
    CDUnknownBlockType _prepareForInvalidationCompletionHandler;
    UIPanGestureRecognizer *_slideGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    QLSwipeDownTracker *_swipeDownTracker;
    QLPinchRotationTracker *_pinchRotationTracker;
    QLTransitionContext *_transitionContext;
    id <QLTransitionControllerProtocol> _transitionController;
    QLTransitionDriver *_transitionDriver;
    NSString *_hostApplicationBundleIdentifier;
}

@property (nonatomic) _Bool fullScreen;
@property (nonatomic) _Bool isEditing;
@property (nonatomic) _Bool isTransitioningPage;
@property (copy, nonatomic) CDUnknownBlockType prepareForInvalidationCompletionHandler;
@property (retain) UIPanGestureRecognizer *slideGesture;
@property (retain) UIPinchGestureRecognizer *pinchGesture;
@property (retain) UIRotationGestureRecognizer *rotationGesture;
@property (retain) QLSwipeDownTracker *swipeDownTracker;
@property (retain) QLPinchRotationTracker *pinchRotationTracker;
@property (retain) QLTransitionContext *transitionContext;
@property (retain) id <QLTransitionControllerProtocol> transitionController;
@property (retain) QLTransitionDriver *transitionDriver;
@property (copy, nonatomic) NSString *hostApplicationBundleIdentifier;
@property _Bool hasTriggeredInteractiveTransitionAnimation;
@property (retain) QLPageViewController *pageViewController;
@property (retain) id <QLPreviewControllerStateProtocol> stateManager;
@property (readonly) QLItemViewController *currentPreviewItemViewController;
@property (nonatomic) _Bool isAvailable;
@property (nonatomic) _Bool allowInteractiveTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)previewCollectionUsingRemoteViewController:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)quickLookExtension;
+ (void)remotePreviewCollectionWithCompletionHandler:(CDUnknownBlockType)arg1;

- (id)init;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updatePreferredContentSize;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)accessoryView;
- (_Bool)_isBeingDismissed;
- (_Bool)_isVisible;
- (void)setIsContentManaged:(_Bool)arg1;
- (_Bool)isRemote;
- (_Bool)transitionInProgress;
- (void)keyCommandWasPerformed:(id)arg1;
- (id)gestureTracker;
- (void)saveCurrentPreviewEditsSynchronously:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)hostApplicationDidEnterBackground:(_Bool)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)invalidateService;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyFirstTimeAppearanceWithActions:(unsigned long long)arg1;
- (void)setLoadingString:(id)arg1;
- (void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4;
- (void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)prepareForActionSheetPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)toolbarButtonsForTraitCollection:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)keyCommandsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)tearDownTransition:(_Bool)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_setUpTransitionDriverForPresenting:(_Bool)arg1 duration:(double)arg2;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)triggerInteractiveTransitionAnimationIfNeeded;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)startNonInteractiveTransitionPresenting:(_Bool)arg1;
- (void)_tearDownTransition:(_Bool)arg1;
- (void)rotationOrPinchGestureRecognized:(id)arg1;
- (void)slideToDismissGestureRecognized:(id)arg1;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)previewItemViewController:(id)arg1 wantsFullScreen:(_Bool)arg2;
- (void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2;
- (void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(_Bool)arg3 useInteractiveTransition:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)previewItemViewControllerDidChangeCurrentPreviewController:(id)arg1;
- (long long)dragDataOwnerForPreviewItemViewController:(id)arg1;
- (void)toolbarButtonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setRemoteAccessoryContainer:(id)arg1;
- (void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2;
- (id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3;
- (void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6;
- (void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(_Bool)arg6;
- (void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5;
- (id)loadingTextForPreviewItemViewController:(id)arg1;
- (void)previewItemViewControllerWantsUpdateOverlay:(id)arg1 animated:(_Bool)arg2;
- (void)previewItemViewController:(id)arg1 didEnableEditMode:(_Bool)arg2;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1;
- (void)previewItemViewControllerWantsToDismissQuickLook:(id)arg1;
- (void)previewItemViewControllerDidEditCopyOfPreviewItem:(id)arg1 editedCopy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)previewItemViewController:(id)arg1 hasUnsavedEdits:(_Bool)arg2;
- (void)previewItemViewControllerDidUpdateTitle:(id)arg1;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewItemViewController:(id)arg1 wantsToShowShareSheetWithPopoverTracker:(id)arg2 customSharedURL:(id)arg3 dismissCompletion:(CDUnknownBlockType)arg4;
- (void)previewItemViewController:(id)arg1 wantsToForwardMessageToHost:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1;
- (void)_installGestures;
- (void)updateCurrentPreviewConfiguration;
- (void)_updatePreviewVisibility:(_Bool)arg1;
- (void)_cleanAccessoryViewContainer;
- (void)_updateOverlay:(_Bool)arg1;
- (void)_updateFullscreenBackgroundColor;
- (void)_updateFullscreen;
- (void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1;
- (void)_updateWhitePointAdaptivityStyle;
- (void)_updatePrinter;
- (void)_updateTitleFromController;
- (void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;
- (void)_setCurrentPreviewItemIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)_defaultKeyCommands;
- (_Bool)_toggleFullscreenIfPossible;
- (void)_updateOverlayVisibility;
- (void)_tapGestureRecognized;
- (_Bool)pinchDismissGestureInProgress;
- (_Bool)_itemViewControllerIsCurrentlyPresentedItemViewController:(id)arg1;
- (void)_updateCanChangeCurrentPage;
- (void)previewItemViewControllerWantsToShowShareSheet:(id)arg1;
- (void)previewItemViewControllerWantsUpdatePrinter:(id)arg1;
- (void)expandContentOfPreviewItemViewController:(id)arg1 unarchivedItemsURL:(id)arg2;
- (id)_sandboxExtensionForEditedFileAtURL:(id)arg1;

@end
