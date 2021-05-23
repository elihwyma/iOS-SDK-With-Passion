/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBDisplayLayoutElement, FBDisplayLayoutTransition, FBSDisplayIdentity, NSArray, NSMutableDictionary, NSMutableSet, NSString, SBLayoutState, SBSceneManager, SBWorkspaceApplicationSceneTransitionContext, UIView;

@protocol SBSceneLayoutViewControllerDelegate;

@interface SBSceneLayoutViewController : UIViewController <Swift>

{
    FBDisplayLayoutElement *_homescreenLayoutElement;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    NSMutableDictionary *_layoutElementControllersByRole;
    NSMutableDictionary *_previousLayoutElementControllersByRole;
    NSMutableDictionary *_reusableLayoutElementControllers;
    NSMutableSet *_elementViewControllerUpdatesSuspensionReasons;
    _Bool _userResizing;
    _Bool _elementViewControllerUpdatesSuspended;
    SBLayoutState *_transitioningFromLayoutState;
    SBLayoutState *_transitioningToLayoutState;
    SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
    SBWorkspaceApplicationSceneTransitionContext *_previousSuccessfulTransitionContext;
    SBSceneManager *_sceneManager;
    id <SBSceneLayoutViewControllerDelegate> _delegate;
    UIView *_sceneContainerView;
}

@property (weak, nonatomic, readonly) SBSceneManager *sceneManager;
@property (weak, nonatomic) id <SBSceneLayoutViewControllerDelegate> delegate;
@property (nonatomic, getter=isUserResizing) _Bool userResizing;
@property (nonatomic, getter=_areElementViewControllerUpdatesSuspended, setter=_setElementViewControllerUpdatesSuspended:) _Bool elementViewControllerUpdatesSuspended;
@property (nonatomic, readonly) UIView *sceneContainerView;
@property (nonatomic, readonly) SBLayoutState *_transitioningFromLayoutState;
@property (nonatomic, readonly) SBLayoutState *_transitioningToLayoutState;
@property (nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *_transitionContext;
@property (nonatomic, readonly) SBWorkspaceApplicationSceneTransitionContext *_previousSuccessfulTransitionContext;
@property (nonatomic, readonly, getter=_isCurrentlyTransitioning) _Bool _currentlyTransitioning;
@property (copy, nonatomic, readonly) NSArray *_transitioningLayoutElementControllers;
@property (copy, nonatomic, readonly) NSArray *_transitioningAppViewControllers;
@property (nonatomic, readonly) long long _layoutOrientation;
@property (nonatomic, readonly) long long _transitioningFromLayoutOrientation;
@property (nonatomic, readonly) long long _transitioningToLayoutOrientation;
@property (nonatomic, readonly, getter=_isCurrentlyRotating) _Bool _currentlyRotating;
@property (nonatomic, readonly) NSArray *layoutElementControllers;
@property (nonatomic, readonly) NSArray *appViewControllers;
@property (nonatomic, readonly) _Bool hasVisibleElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) SBLayoutState *layoutState;

+ (id)mainDisplaySceneLayoutViewController;
+ (id)sceneLayoutViewControllerForDisplayIdentity:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)loadView;
- (id)coordinateSpace;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)_displayConfiguration;
- (long long)sceneViewPresentationPriority:(id)arg1;
- (id)sceneViewPresentationIdentifier:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 maskDisplayCorners:(_Bool)arg4;
- (id)initWithSceneManager:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)coordinateSpaceForInterfaceOrientation:(long long)arg1;
- (id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3;
- (id)animationControllerForRotatingWithTransitionRequest:(id)arg1;
- (id)_layoutElementControllerForLayoutRole:(long long)arg1;
- (id)_transitioningFromLayoutElementControllerForLayoutRole:(long long)arg1;
- (struct CGRect)referenceFrameForUniqueIdentifier:(id)arg1 inLayoutState:(id)arg2;
- (struct CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2;
- (void)_enqueueLayoutViewControllerForReuse:(id)arg1;
- (id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3 hostRequester:(id)arg4;
- (id)coordinateSpaceForLayoutState:(id)arg1;
- (id)_previousLayoutElementControllerWithElementIdentifier:(id)arg1;
- (id)_dequeueLayoutElementControllerForReuseOfClass:(Class)arg1;
- (void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3;
- (_Bool)_isLayoutElementViewControllerOccluded:(id)arg1;
- (void)_updateAuxiliaryViews;
- (void)_configureVisibilityForCurrentLayoutState;
- (_Bool)_shouldConsiderHomeScreenAsActive;
- (void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(_Bool)arg1;
- (void)_cleanupDisappearedLayoutElementController:(id)arg1;
- (_Bool)_shouldRepositionViewAfterTransition;
- (void)_verifyLayoutElementControllersAreValidForCurrentLayoutState;
- (void)_beginLayoutStateTransitionWithTransitionContext:(id)arg1;
- (void)_willEndLayoutStateTransition;
- (void)_endLayoutStateTransitionForFailure;
- (void)_endLayoutStateTransitionWithInterruption:(_Bool)arg1;
- (struct CGRect)sceneEntityFrameForWorkspaceEntity:(id)arg1 inLayoutState:(id)arg2;
- (id)appViewForWorkspaceEntity:(id)arg1 inLayoutRole:(long long)arg2 withLayoutState:(id)arg3;
- (id)coordinateSpaceForLayoutElement:(id)arg1 layoutState:(id)arg2;
- (struct CGPoint)convertPointToInterfaceOrientationCoordinateSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectToInterfaceOrientationCoordinateSpace:(struct CGRect)arg1;
- (struct CGPoint)convertPointFromInterfaceOrientationCoordinateSpace:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromInterfaceOrientationCoordinateSpace:(struct CGRect)arg1;
- (_Bool)_shouldAdjustViewAffordancesAfterTransition;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (_Bool)_shouldRotateToLayoutOrientation:(long long)arg1;
- (id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3;

@end
