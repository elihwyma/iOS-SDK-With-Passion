/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>

@class NSMutableArray, NSSet, SBBlurViewCoordinator, SBLayoutElementViewController, SBMainDisplaySceneLayoutViewController, SBMainWorkspaceTransaction, UIApplicationSceneDeactivationAssertion;

@protocol BSInvalidatable;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction

{
    double _previousSlideOffPercent;
    NSSet *_fromApplicationSceneEntities;
    NSSet *_toApplicationSceneEntitiesSuspendPrimary;
    NSSet *_toApplicationSceneEntitiesSuspendSide;
    _Bool _isSceneLayoutViewControllerPushedIn;
    id <BSInvalidatable> _deferOrientationUpdatesForResizeAssertion;
    NSMutableArray *_statusBarAssertions;
    SBMainDisplaySceneLayoutViewController *_layoutViewController;
    SBLayoutElementViewController *_primaryLayoutElementController;
    SBLayoutElementViewController *_sideLayoutElementController;
    UIApplicationSceneDeactivationAssertion *_appDeactivationAssertion;
    SBBlurViewCoordinator *_blurCoordinator;
    SBMainWorkspaceTransaction *_currentWorkspaceTransaction;
    unsigned long long _currentGestureIdentifier;
}

@property (nonatomic, readonly) SBMainDisplaySceneLayoutViewController *layoutViewController;
@property (nonatomic, readonly) SBLayoutElementViewController *primaryLayoutElementController;
@property (nonatomic, readonly) SBLayoutElementViewController *sideLayoutElementController;
@property (nonatomic, readonly) UIApplicationSceneDeactivationAssertion *appDeactivationAssertion;
@property (retain, nonatomic) SBBlurViewCoordinator *blurCoordinator;
@property (retain, nonatomic) SBMainWorkspaceTransaction *currentWorkspaceTransaction;
@property (nonatomic) unsigned long long currentGestureIdentifier;

+ (double)_rubberbandingStartScreenEdgeMarginInOrientation:(long long)arg1;

- (void)dealloc;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_didInterruptWithReason:(id)arg1;
- (double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(_Bool *)arg5;
- (id)initWithTransitionRequest:(id)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (struct CGRect)_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(struct CGRect)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 layoutViewController:(id)arg2;
- (void)_unhideLayoutElementViewControllerStatusBars;
- (long long)_spaceConfigurationForGestureRegion:(long long)arg1;
- (long long)_layoutModeForGestureRegion:(long long)arg1;
- (double)_maxRubberBandOffset;
- (_Bool)_canResizeToHalfHalf;
- (void)_restartResizeUI;
- (void)_updateResizeUIFromGestureRecognizer:(id)arg1;
- (double)_dividerPositionFromPanGestureRecognizer:(id)arg1;
- (double)_normalizedVelocityFromPanGestureRecognizer:(id)arg1;
- (void)_resizeGestureFinishedWithState:(long long)arg1 gestureDividerPosition:(double)arg2 normalizedVelocity:(double)arg3;
- (void)_hideLayoutElementViewControllerStatusBars;
- (void)_pushInSceneLayoutViewController;
- (long long)_resizeGestureRegionForLocation:(double)arg1 velocity:(double)arg2;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forResizeGestureRegion:(long long)arg4 location:(double)arg5 allowRubberbanding:(_Bool)arg6;
- (long long)_finalActionForGestureRegion:(long long)arg1;
- (void)_updateElementViewsAlphaAndGrabberForFinalAction:(long long)arg1;
- (void)_resizeGestureFinishedWithFinalAction:(long long)arg1;
- (id)_transitionContextForFinalAction:(long long)arg1;
- (id)_transactionForExecutingApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2;
- (void)_dismissResizeUIAnimated:(_Bool)arg1;
- (void)_animateElementViewsForFinalAction:(long long)arg1 forLayoutState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct CGRect)_appFrameForElementWithRole:(long long)arg1 inLayoutState:(id)arg2 spaceConfiguration:(long long)arg3 inCoordinateSpace:(id)arg4;
- (void)_popOutSceneLayoutViewController;
- (void)_resizeGestureDidUpdate:(id)arg1;

@end
