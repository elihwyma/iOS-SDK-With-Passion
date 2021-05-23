/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/Swift-Protocol.h>

@class CADisplayLink, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SBAppPlatterDragPreview, SBApplicationDropSession, SBApplicationSceneUpdateTransaction, SBDeviceApplicationSceneHandle, SBFluidSwitcherGesture, SBFluidSwitcherViewController, SBLayoutElement, SBMainDisplayLayoutState, SBMainDisplaySceneLayoutViewController, SBMainWorkspaceTransitionRequest, SBMedusaSettings, SBToAppsWorkspaceTransaction, SBTouchHistory, UIView, UIViewFloatAnimatableProperty;

@protocol BSInvalidatable, SBAppPlatterDragSourceViewProviding, SBDragAndDropAppActivationWorkspaceTransactionDelegate;

@interface SBDragAndDropAppActivationWorkspaceTransaction : SBMainWorkspaceTransaction <Swift>

{
    SBFluidSwitcherViewController *_mainSwitcherContentController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBFluidSwitcherViewController *_floatingSwitcherContentController;
    id <SBDragAndDropAppActivationWorkspaceTransactionDelegate> _delegate;
    SBMainDisplayLayoutState *_initialLayoutState;
    SBMainDisplayLayoutState *_currentLayoutState;
    SBMainDisplayLayoutState *_finalLayoutState;
    SBApplicationDropSession *_dropSession;
    unsigned long long _sessionState;
    SBDeviceApplicationSceneHandle *_draggingApplicationSceneHandle;
    _Bool _beganTrackingDropSession;
    SBMainWorkspaceTransitionRequest *_dropTransitionRequest;
    SBToAppsWorkspaceTransaction *_currentWorkspaceTransaction;
    long long _currentDropAction;
    SBMainDisplayLayoutState *_currentDropActionProposedLayoutState;
    _Bool _performedDrop;
    _Bool _dropAnimationCompleted;
    _Bool _layoutStateTransitionCompleted;
    _Bool _dragExitedDropZone;
    struct CGSize _cachedSizeForFloatingApplication;
    SBLayoutElement *_layoutElementForWindowDrag;
    _Bool _windowDragEnteredPlatterZone;
    _Bool _windowLiftAnimationCompleted;
    SBApplicationSceneUpdateTransaction *_sceneUpdateTransactionForWindowDrag;
    CADisplayLink *_displayLinkForWindowDrag;
    long long _windowDragPauseCounter;
    unsigned long long _blurState;
    long long _blurringElementViewControllers;
    long long _resizingElementViewControllers;
    UIViewFloatAnimatableProperty *_resizeAnimatableProperty;
    NSMutableSet *_pendingSceneUpdatesTransactions;
    SBAppPlatterDragPreview *_activePlatterPreview;
    id <SBAppPlatterDragSourceViewProviding> _activeSourceViewProvider;
    unsigned long long _numberOfAttemptsRequestingVisibleItems;
    UIView *_contentDragPreview;
    long long _animatingPlatterPreview;
    id <BSInvalidatable> _deferOrientationUpdatesForDragAndDropAssertion;
    SBTouchHistory *_touchHistory;
    SBMedusaSettings *_medusaSettings;
    NSMutableDictionary *_statusBarAssertions;
    NSUUID *_gestureID;
    SBFluidSwitcherGesture *_dragAndDropGesture;
}

@property (nonatomic, readonly, getter=isDragging) _Bool dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2;
+ (_Bool)shouldTrackLocationOfDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2 isCurrentlyTracking:(_Bool)arg3;
+ (_Bool)isDragOverFullscreenRegionAtLocation:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2;
+ (_Bool)isDragOverSideGutterRegionsAtLocation:(struct CGPoint)arg1 inBounds:(struct CGRect)arg2 totalContentDragGutterWidth:(double)arg3;
+ (double)prototypeSettingsContentDraggingSideActivationWidth;
+ (double)prototypeSettingsContentDraggingFloatingActivationWidth;
+ (double)prototypeSettingsContentDraggingCommandeerWidth;
+ (double)prototypeSettingsWindowTearOffDraggingSideActivationWidth;
+ (double)prototypeSettingsWindowTearOffDraggingFloatingActivationWidth;
+ (struct CGRect)sourceSceneInterfaceOrientedBoundsForDropSession:(id)arg1 inSceneLayoutViewController:(id)arg2;
+ (struct CGSize)prototypeSettingsFullscreenActivationRegionSize;
+ (double)prototypeSettingsSideActivationGutterSize;

- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (_Bool)_shouldComplete;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (void)transaction:(id)arg1 didCommitSceneUpdate:(id)arg2;
- (long long)_gestureType;
- (void)_invalidateStatusBarAssertions;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_handleSessionDidEnd:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)_currentGestureEventForGesture:(id)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (double)_platterScale;
- (void)_willInterruptForTransitionRequest:(id)arg1;
- (_Bool)matchesUIDragDropSession:(id)arg1;
- (_Bool)matchesApplicationDropSession:(id)arg1;
- (id)initWithTransitionRequest:(id)arg1 mainSwitcherContentController:(id)arg2 floatingSwitcherContentController:(id)arg3 sceneLayoutViewController:(id)arg4 dropSession:(id)arg5 delegate:(id)arg6;
- (void)_setupPlatterPreviewForContentDrag;
- (id)_createPlatterPreviewForApplication:(id)arg1 withSourceView:(id)arg2 dropSession:(id)arg3;
- (void)_configurePlatterPreview:(id)arg1 forSceneHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateActiveSourceViewProviderWithDragState:(unsigned long long)arg1;
- (void)_updateAnchorPointForPlatterPreview:(id)arg1 dragPreview:(id)arg2 withSourceViewBounds:(struct CGRect)arg3 location:(struct CGPoint)arg4;
- (void)_updatePlatterPreviewForSetDown:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_handleSessionDidUpdate:(id)arg1;
- (void)_handleSessionDidPerformDrop:(id)arg1;
- (long long)_layoutRoleForDropAction:(long long)arg1;
- (id)_dragPreviewForDroppingItem:(id)arg1 withDefault:(id)arg2;
- (void)_handleWillAnimateDropWithAnimator:(id)arg1;
- (void)_updateCurrentDropActionProposedLayoutState;
- (void)_cleanUpAndCompleteTransactionIfNecessary;
- (void)_interruptForDragExitedDropZoneIfNecessary;
- (void)_updateForWindowDragForSession:(id)arg1;
- (void)_updateCurrentDropActionForSession:(id)arg1;
- (void)_updateLayoutElementViewControllersWithCompletion:(CDUnknownBlockType)arg1;
- (id)_transitionRequestForDropAction:(long long)arg1;
- (_Bool)_shouldFailLayoutStateTransitionForWindowDrag;
- (void)_fadeOutPreviousLayoutElementViewControllersIfNecessary;
- (void)_runFinalLayoutStateTransaction;
- (void)_updateLayoutElementViewControllerForDropCompletion;
- (void)_uncommandeerContentDrag;
- (id)resizeUIAnimationFactory;
- (_Bool)_shouldPushInSceneLayoutViewControllerForDropAction:(long long)arg1;
- (void)_setStatusBarsHidden:(_Bool)arg1;
- (void)_updateLayoutElementViewControllerDarkeningWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerCornerRadiusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerBlurringWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateLayoutElementViewControllerStatusBars;
- (void)_updateSeparatorViewWithCompletion:(CDUnknownBlockType)arg1;
- (id)_primaryApplicationLayoutElementViewController;
- (id)_sideApplicationLayoutElementViewController;
- (_Bool)_showResizeUI;
- (_Bool)_areLayoutElementViewControllersCorrectlySizedForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2;
- (void)_setupResizeAnimatableProperty;
- (void)_beginRequiringSceneViewMatchMoveAnimation;
- (void)_updateLayoutElementViewControllerFrames;
- (void)_endRequiringSceneViewMatchMoveAnimation;
- (id)_primaryLayoutElementViewController;
- (id)_sideLayoutElementViewController;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6;
- (void)_getPrimaryLayoutElementViewFrame:(struct CGRect *)arg1 sideLayoutElementViewFrame:(struct CGRect *)arg2 separatorViewFrame:(struct CGRect *)arg3 forDropAction:(long long)arg4 proposedDropLayoutState:(id)arg5 state:(unsigned long long)arg6 spaceConfiguration:(long long)arg7;
- (struct CGSize)_sizeForFloatingApplication;
- (struct CGSize)_platterSizeForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(_Bool)arg3;
- (id)_cornerRadiusConfigurationForDropAction:(long long)arg1 proposedDropLayoutState:(id)arg2 setDown:(_Bool)arg3 mode:(unsigned long long)arg4;
- (void)_getPlatterDiffuseShadowParameters:(struct SBDragPreviewShadowParameters *)arg1 rimShadowParameters:(struct SBDragPreviewShadowParameters *)arg2 diffuseFilters:(id *)arg3 rimFilters:(id *)arg4 forDropAction:(long long)arg5 setDown:(_Bool)arg6 mode:(unsigned long long)arg7 userInterfaceStyle:(long long)arg8;
- (void)_endDragAndDropFluidGesture;
- (void)_acquireStatusBarAssertions;
- (void)_updatePlatterPreviewWithUpdatedSourceView;
- (struct CGRect)_platterFrameInSwitcherView;
- (_Bool)_canInterruptForCurrentDropAction;
- (_Bool)_areLayoutElementViewControllersBlurred;
- (unsigned long long)_gestureModifierPhaseForGestureState:(long long)arg1;

@end
