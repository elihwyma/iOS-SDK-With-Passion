/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIBarButtonItem, UIColor, UIDimmingView, UIPanGestureRecognizer, UIPopoverPresentationController, UIView, UIViewController, _UIPopoverLayoutInfo, _UIPopoverView;

@protocol UIPopoverControllerDelegate;

@interface UIPopoverController : NSObject <Swift>

{
    id _delegate;
    UIViewController *_contentViewController;
    UIViewController *_splitParentController;
    _UIPopoverView *_popoverView;
    UIDimmingView *_dimmingView;
    UIView *_layoutConstraintView;
    struct CGRect _targetRectInEmbeddingView;
    UIBarButtonItem *_targetBarButtonItem;
    unsigned long long _requestedArrowDirections;
    unsigned long long _currentArrowDirection;
    long long _popoverBackgroundStyle;
    UIColor *_backgroundColor;
    _UIPopoverLayoutInfo *_preferredLayoutInfo;
    Class _popoverBackgroundViewClass;
    struct CGSize _popoverContentSize;
    struct CGRect _targetRectInDimmingView;
    struct CGRect _embeddedTargetRect;
    long long _popoverControllerStyle;
    _Bool _ignoresKeyboardNotifications;
    UIView *_currentPresentationView;
    struct CGRect _currentPresentationRectInView;
    unsigned long long _originalArrowDirections;
    unsigned int draggingChildScrollViewCount;
    id _target;
    SEL _didEndSelector;
    UIViewController *_modalPresentationFromViewController;
    UIViewController *_modalPresentationToViewController;
    unsigned long long _toViewAutoResizingMask;
    UIViewController *_slidingViewController;
    UIView *_presentingView;
    unsigned long long _presentationEdge;
    long long _presentationDirection;
    int _presentationState;
    _Bool _didPresentInActiveSequence;
    unsigned long long _slideTransitionCount;
    UIPanGestureRecognizer *_vendedGestureRecognizer;
    UIPanGestureRecognizer *_dimmingViewGestureRecognizer;
    UIPopoverController *_retainedSelf;
    NSArray *_passthroughViews;
    struct {
        unsigned int isPresentingModalViewController:1;
        unsigned int isPresentingActionSheet:1;
        unsigned int wasIgnoringDimmingViewTouchesBeforeScrolling:1;
        unsigned int isInTextEffectsWindow:1;
        unsigned int isEmbeddingInView:1;
        unsigned int embeddedPresentationBounces:1;
        unsigned int isWaitingToPresentShimmedPopover:1;
    } _popoverControllerFlags;
    _Bool _dismissesOnRotation;
    _Bool _showsTargetRect;
    _Bool _showsOrientationMarker;
    _Bool _showsPresentationArea;
    _Bool _retainsSelfWhilePresented;
    _Bool _allowsPopoverPresentationToAdapt;
    unsigned long long _popoverArrowDirection;
    UIPopoverPresentationController *_presentationController;
    struct UIEdgeInsets _popoverLayoutMargins;
}

@property (nonatomic) unsigned long long popoverArrowDirection;
@property (retain, nonatomic) UIDimmingView *dimmingView;
@property (nonatomic) _Bool dismissesOnRotation;
@property (retain, nonatomic) _UIPopoverLayoutInfo *preferredLayoutInfo;
@property (weak, nonatomic, getter=_presentingView, setter=_setPresentingView:) UIView *presentingView;
@property (nonatomic, getter=_presentationEdge, setter=_setPresentationEdge:) unsigned long long presentationEdge;
@property (nonatomic, setter=_setIgnoresKeyboardNotifications:) _Bool _ignoresKeyboardNotifications;
@property (retain, nonatomic, getter=_presentationController, setter=_setPresentationController:) UIPopoverPresentationController *presentationController;
@property (nonatomic) _Bool showsTargetRect;
@property (nonatomic) _Bool showsOrientationMarker;
@property (nonatomic) _Bool showsPresentationArea;
@property (nonatomic, getter=_retainsSelfWhilePresented, setter=_setRetainsSelfWhilePresented:) _Bool retainsSelfWhilePresented;
@property (nonatomic, getter=_allowsPopoverPresentationToAdapt, setter=_setAllowsPopoverPresentationToAdapt:) _Bool allowsPopoverPresentationToAdapt;
@property (weak, nonatomic) id <UIPopoverControllerDelegate> delegate;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) struct CGSize popoverContentSize;
@property (nonatomic, readonly, getter=isPopoverVisible) _Bool popoverVisible;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) struct UIEdgeInsets popoverLayoutMargins;
@property (retain, nonatomic) Class popoverBackgroundViewClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_showTargetRectPref;
+ (_Bool)_forceAttemptsToAvoidKeyboard;
+ (struct UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(long long)arg1 andContentViewController:(id)arg2;
+ (Class)_popoverViewClass;
+ (_Bool)_popoversDisabled;
+ (_Bool)_useLegacyPopoverControllers;
+ (void)_setForceModernPopoverUse:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (id)_managingSplitViewController;
- (void)presentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)dismissPopoverAnimated:(_Bool)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)dimmingViewWasTapped:(id)arg1;
- (id)_dimmingView;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)_setPopoverBackgroundStyle:(long long)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (long long)_popoverControllerStyle;
- (Class)_defaultChromeViewClass;
- (id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1;
- (void)_swipe:(id)arg1;
- (id)_layoutInfoForCurrentKeyboardState;
- (double)_presentationAnimationDuration;
- (void)setPopoverContentSize:(struct CGSize)arg1 animated:(_Bool)arg2;
- (_Bool)_isPresenting;
- (void)setPopoverFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_setPresentationState:(int)arg1;
- (void)_setPopoverView:(id)arg1;
- (void)_stopWatchingForNotifications;
- (_Bool)_attemptsToAvoidKeyboard;
- (id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2;
- (void)_moveAwayFromTheKeyboard:(id)arg1;
- (void)_keyboardStateChanged:(id)arg1;
- (void)_scrollViewWillBeginDragging:(id)arg1;
- (void)_scrollViewDidEndDragging:(id)arg1;
- (void)_startWatchingForKeyboardNotificationsIfNecessary;
- (void)_stopWatchingForKeyboardNotifications;
- (void)_stopWatchingForScrollViewNotifications;
- (_Bool)_isDismissing;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;
- (Class)_popoverLayoutInfoForChromeClass:(Class)arg1;
- (void)_startWatchingForScrollViewNotifications;
- (CDUnknownBlockType)_completionBlockForDismissalWhenNotifyingDelegate:(_Bool)arg1;
- (void)_postludeForDismissal;
- (int)_presentationState;
- (unsigned long long)_slideTransitionCount;
- (void)_incrementSlideTransitionCount:(_Bool)arg1;
- (void)_resetSlideTransitionCount;
- (void)_invalidateLayoutInfo;
- (struct CGPoint)_centerPointForScale:(double)arg1 frame:(struct CGRect)arg2 anchor:(struct CGPoint)arg3;
- (id)popoverView;
- (struct CGSize)_currentPopoverContentSize;
- (double)_dismissalAnimationDuration;
- (void)_performHierarchyCheckOnViewController:(id)arg1;
- (_Bool)_manuallyHandlesContentViewControllerAppearanceCalls;
- (long long)_popoverBackgroundStyle;
- (void)_setContentViewController:(id)arg1 backgroundStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)_dismissPopoverAnimated:(_Bool)arg1 stateOnly:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)_setGesturesEnabled:(_Bool)arg1;
- (_Bool)isPresentingOrDismissing;
- (_Bool)_embedsInView;
- (void)_containedViewControllerModalStateChanged;
- (void)_startWatchingForNavigationControllerNotifications:(id)arg1;
- (void)_stopWatchingForNavigationControllerNotifications:(id)arg1;
- (id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(long long)arg2;
- (void)setContentViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_shimPopoverPresentationController;
- (void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1;
- (void)_startWatchingForWindowRotations;
- (void)_presentPopoverBySlidingIn:(_Bool)arg1 fromEdge:(unsigned long long)arg2 ofView:(id)arg3 animated:(_Bool)arg4 stateOnly:(_Bool)arg5 notifyDelegate:(_Bool)arg6;
- (void)_presentPopoverFromRect:(struct CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animate:(_Bool)arg5;
- (void)_presentPopoverFromEdge:(unsigned long long)arg1 ofView:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_shimPresentSlidingPopoverAnimated:(_Bool)arg1;
- (void)_setupPresentationController;
- (void)_presentShimmedPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)_commonPresentPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(struct CGRect)arg2 inView:(id)arg3 arrowDirections:(unsigned long long)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6;
- (id)_splitParentController;
- (void)_setSplitParentController:(id)arg1;
- (void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(_Bool)arg2;
- (void)_newViewControllerWasPushed:(id)arg1;
- (_Bool)_canRepresentAutomatically;
- (void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_hostingWindowWillRotate:(id)arg1;
- (void)_hostingWindowDidRotate:(id)arg1;
- (void)_stopWatchingForWindowRotations;
- (void)_modalAnimationFinishedEndIgnoringInteractiveEvents:(_Bool)arg1;
- (void)_presentPopoverFromRect:(struct CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned long long)arg4;
- (void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned long long)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4;
- (id)_gestureRecognizerForPresentationFromEdge:(unsigned long long)arg1;
- (void)_setManagingSplitViewController:(id)arg1;
- (void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5;

@end
