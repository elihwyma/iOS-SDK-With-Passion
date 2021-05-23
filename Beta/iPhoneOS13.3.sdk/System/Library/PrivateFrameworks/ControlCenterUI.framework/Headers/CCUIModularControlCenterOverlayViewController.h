/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/CCUIModularControlCenterViewController.h>

@class CCUIAnimationRunner, CCUIFlickGestureRecognizer, CCUIHeaderPocketView, CCUIModuleCollectionView, CCUIOverlayTransitionState, CCUIScrollView, CCUIStatusBarStyleSnapshot, CCUIStatusLabelViewController, FBSDisplayLayoutMonitor, MTMaterialView, NSHashTable, NSString, NSUUID, UIPanGestureRecognizer, UIScrollView, UIStatusBar, UIStatusBar_Modern, UITapGestureRecognizer, UIView;

@protocol CCUIHostStatusBarStyleProvider, CCUIModularControlCenterOverlayViewControllerDelegate, CCUIOverlayPresentationProvider;

@interface CCUIModularControlCenterOverlayViewController : CCUIModularControlCenterViewController

{
    id <CCUIOverlayPresentationProvider> _presentationProvider;
    CCUIAnimationRunner *_primaryAnimationRunner;
    CCUIAnimationRunner *_secondaryAnimationRunner;
    MTMaterialView *_backgroundView;
    CCUIHeaderPocketView *_headerPocketView;
    CCUIScrollView *_scrollView;
    UIView *_containerView;
    UIStatusBar_Modern *_compactLeadingStatusBar;
    _Bool _presentationPanGestureActive;
    UIPanGestureRecognizer *_headerPocketViewDismissalPanGesture;
    UITapGestureRecognizer *_headerPocketViewDismissalTapGesture;
    CCUIFlickGestureRecognizer *_collectionViewDismissalFlickGesture;
    UIPanGestureRecognizer *_collectionViewDismissalPanGesture;
    UITapGestureRecognizer *_collectionViewDismissalTapGesture;
    UIPanGestureRecognizer *_collectionViewScrollPanGesture;
    NSHashTable *_blockingGestureRecognizers;
    NSUUID *_currentTransitionUUID;
    CCUIOverlayTransitionState *_previousTransitionState;
    CCUIStatusBarStyleSnapshot *_hostStatusBarStyleSnapshot;
    FBSDisplayLayoutMonitor *_layoutMonitor;
    _Bool _reachabilityActive;
    unsigned long long _presentationState;
    unsigned long long _transitionState;
    id <CCUIHostStatusBarStyleProvider> _hostStatusBarStyleProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long presentationState;
@property (nonatomic, readonly) unsigned long long transitionState;
@property (weak, nonatomic) id <CCUIModularControlCenterOverlayViewControllerDelegate> delegate;
@property (weak, nonatomic) id <CCUIHostStatusBarStyleProvider> hostStatusBarStyleProvider;
@property (nonatomic, getter=isReachabilityActive) _Bool reachabilityActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MTMaterialView *overlayBackgroundView;
@property (nonatomic, readonly) UIScrollView *overlayScrollView;
@property (nonatomic, readonly) UIView *overlayContainerView;
@property (nonatomic, readonly) CCUIModuleCollectionView *overlayModuleCollectionView;
@property (nonatomic, readonly) CCUIStatusLabelViewController *overlayStatusLabelViewController;
@property (nonatomic, readonly) CCUIHeaderPocketView *overlayHeaderView;
@property (nonatomic, readonly) UIStatusBar *overlayLeadingStatusBar;
@property (nonatomic, readonly) struct CGRect overlayBackgroundFrame;
@property (nonatomic, readonly) struct CGRect overlayContainerFrame;
@property (nonatomic, readonly) long long overlayInterfaceOrientation;
@property (copy, nonatomic, readonly) CCUIStatusBarStyleSnapshot *overlayStatusBarStyle;
@property (nonatomic, readonly) double overlayReachabilityHeight;

+ (id)_controlCenterBringupEventStream;
+ (id)_controlCenterDismissEventStream;
+ (void)_executeAndCleanupBlocksForAllSignposts;
+ (void)_addBlockForSignpost:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
+ (id)_blocksBySignpost;
+ (void)_executeBlocksForSignpost:(unsigned long long)arg1;
+ (id)_presentationProviderForDevice;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (unsigned long long)__supportedInterfaceOrientations;
- (void)dismissControlCenterForContentModuleContext:(id)arg1;
- (id)initWithSystemAgent:(id)arg1;
- (void)moduleCollectionViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)moduleCollectionViewController:(id)arg1 didAddModuleContainerViewController:(id)arg2;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)setOverlayStatusBarHidden:(_Bool)arg1;
- (void)dismissAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)runTest:(id)arg1 subtests:(id)arg2 eventStream:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)presentAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)runTest:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)didReceiveSignpost:(unsigned long long)arg1;
- (id)_statusLabelViewContainerView;
- (id)_moduleCollectionViewContainerView;
- (void)_reparentAndBecomeActive;
- (id)_initWithSystemAgent:(id)arg1 presentationProvider:(id)arg2;
- (void)_updateHotPocket:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_beginPresentationAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)_endPresentationWithUUID:(id)arg1 success:(_Bool)arg2;
- (void)_updatePresentationForTransitionState:(id)arg1 withCompletionHander:(CDUnknownBlockType)arg2;
- (void)_cancelDismissalPanGestures;
- (id)_beginDismissalAnimated:(_Bool)arg1 interactive:(_Bool)arg2;
- (void)_endDismissalWithUUID:(id)arg1 animated:(_Bool)arg2 success:(_Bool)arg3;
- (void)_updateHotPocketAnimated:(_Bool)arg1;
- (void)_updateChevronStateForTransitionState:(id)arg1;
- (void)_setupPanGestureFailureRequirements;
- (void)_handleDismissalPanGestureRecognizer:(id)arg1;
- (void)_handleDismissalTapGestureRecognizer:(id)arg1;
- (void)_handleDismissalFlickGestureRecognizer:(id)arg1;
- (_Bool)_dismissalFlickGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_dismissalTapGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_dismissalPanGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)_dismissalFlickGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_scrollPanGestureRecognizerShouldBegin:(id)arg1;
- (void)_willPresentView;
- (void)_willDismissView;
- (void)updatePresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)_updatePresentationForTransitionType:(unsigned long long)arg1 translation:(struct CGPoint)arg2 interactive:(_Bool)arg3;
- (_Bool)_scrollViewIsScrollable;
- (_Bool)_scrollPanGestureRecognizerCanBeginForGestureVelocity:(struct CGPoint)arg1;
- (_Bool)_scrollViewCanAcceptDownwardsPan;
- (_Bool)_gestureRecognizerIsActive:(id)arg1;
- (void)_dismissalPanGestureRecognizerBegan:(id)arg1;
- (void)_dismissalPanGestureRecognizerChanged:(id)arg1;
- (void)_dismissalPanGestureRecognizerEnded:(id)arg1;
- (void)_dismissalPanGestureRecognizerCancelled:(id)arg1;
- (void)_dismissalPanGestureRecognizerFailed:(id)arg1;
- (_Bool)scrollView:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(id)arg1;
- (void)statusLabelViewControllerDidFinishStatusUpdates:(id)arg1;
- (id)compactTrailingStyleRequestForStatusBar:(id)arg1;
- (struct CGRect)compactAvoidanceFrameForStatusBar:(id)arg1;
- (struct UIEdgeInsets)overlayAdditionalEdgeInsets;
- (void)beginPresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)endPresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)cancelPresentationWithLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;

@end
