/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBDeckSwitcherModifier : SBSwitcherModifier <Swift>

{
    long long _grabbedDraggingIndex;
    double _outputContentOffsetAdjustmentForIndexChange;
    double _inputContentOffsetAdjustmentForIndexChange;
    struct CGPoint _start;
    struct CGPoint _originalLocationInView;
    double _initialTranslationAdjustment;
    _Bool _useTitleOpacityPrototypeSettings;
    unsigned long long _ongoingAppLayoutRemovals;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;

- (id)init;
- (struct CGSize)contentSize;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (_Bool)isScrollEnabled;
- (unsigned long long)numberOfItems;
- (double)decelerationRate;
- (struct CGPoint)pagingOrigin;
- (double)wallpaperScale;
- (double)dimmingAlpha;
- (unsigned long long)scrollAxis;
- (double)contentViewScale;
- (long long)wallpaperStyle;
- (double)containerStatusBarAnimationDuration;
- (double)switcherCardScale;
- (id)opacitySettings;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (struct _NSRange)fullSizeSnapshotsRange;
- (_Bool)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (long long)plusButtonStyle;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)backdropBlurProgress;
- (id)topMostAppLayouts;
- (double)plusButtonAlpha;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (_Bool)isContainerStatusBarVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (id)appLayoutToScrollToBeforeTransitioning;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreenWithVisibleIndexToStartSearch:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (_Bool)wantsMinificationFilter;
- (double)homeScreenScale;
- (void)didMoveToParentModifier:(id)arg1;
- (double)snapshotScale;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (_Bool)shouldRubberbandHomeGrabberView;
- (_Bool)shouldTetherTransitionCompletion;
- (_Bool)shouldPerformRotationAnimationForOrientationChange;
- (struct CGSize)fittedContentSize;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (long long)layoutUpdateMode;
- (_Bool)shouldTruncateAnimationsUponTransitionCompletion;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (struct CGPoint)contentOffsetForIndex:(unsigned long long)arg1 centered:(_Bool)arg2;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (_Bool)shouldConfigureInAppDockHiddenAssertion;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
- (double)minimumTranslationToKillIndex:(unsigned long long)arg1;
- (_Bool)scrollViewPagingEnabled;
- (struct CGSize)interpageSpacingForPaging;
- (_Bool)dimmingViewBlocksTouches;
- (id)appLayoutsForInsertionOrRemoval;
- (double)homeScreenAlpha;
- (double)shadowOffsetForIndex:(unsigned long long)arg1;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (_Bool)itemContainersUseBrightMaterial;
- (_Bool)itemContainersAllowContentViewTouches;
- (_Bool)isIndexKillable:(unsigned long long)arg1;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)arg1;
- (struct CGPoint)restingOffsetForScrollOffset:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)resetAdjustedScrollingState;
- (struct CGPoint)adjustedOffsetForOffset:(struct CGPoint)arg1 translation:(struct CGPoint)arg2 startPoint:(struct CGPoint)arg3 locationInView:(struct CGPoint)arg4 horizontalVelocity:(inout double *)arg5 verticalVelocity:(inout double *)arg6;
- (long long)preferredSnapshotOrientation;
- (unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
- (_Bool)cardsNeedBackgroundWallpaperTreatment;
- (_Bool)isHomeGrabberVisible;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (_Bool)wantsDockBehaviorAssertion;
- (long long)dockUpdateMode;
- (double)dockProgress;
- (_Bool)wantsDockWindowLevelAssertion;
- (unsigned long long)dockWindowLevelPriority;
- (double)dockWindowLevel;
- (_Bool)isTetheredScrollingEnabled;
- (void)_applyPrototypeSettings;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)handleRemovalEvent:(id)arg1;
- (id)handleTapAppLayoutEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (_Bool)interpolatesDuringSwipeToKill;
- (double)centerYOffsetWhenPresented;
- (double)cardCornerRadiusInSwitcher;
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;
- (double)scrollProgressForIndex:(unsigned long long)arg1;
- (double)desiredXOriginForQuantizedTopPage;
- (double)scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 frameOrigin:(double)arg3;
- (double)scrollRange;
- (double)titleOpacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)opacityForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (double)depthForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)leadingOffsetForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3;
- (double)_scrollProgress;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 scrollProgress:(double)arg3 ignoringScrollOffset:(_Bool)arg4;
- (double)_scaleForTransformForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;
- (struct CGRect)_scaleTransformedFrameForIndex:(unsigned long long)arg1 withUntransformedFrame:(struct CGRect)arg2 scrollProgress:(double)arg3;
- (_Bool)_priorIndex:(unsigned long long)arg1 fullyObscuresCardForIndex:(unsigned long long)arg2;
- (double)_valueAlongDepthCurveForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2 aCoefficient:(double)arg3 bCoefficient:(double)arg4;
- (double)_unscaledCardCornerRadius;
- (unsigned long long)_indexOfCurrentCenteredCard;
- (unsigned long long)_directionForRemovingIndex:(unsigned long long)arg1 centeredIndex:(unsigned long long)arg2;
- (unsigned long long)_newIndexOfItemAtIndex:(unsigned long long)arg1 afterRemovingItemAtIndex:(unsigned long long)arg2;
- (struct CGPoint)_contentOffsetForScrollProgress:(double)arg1;
- (double)_scrollProgressForContentOffset:(struct CGPoint)arg1;
- (double)_restingScrollProgressForProgress:(double)arg1 velocity:(struct CGPoint)arg2;
- (long long)_topIndexForLocationInContainerCoordinateSpace:(struct CGPoint)arg1;
- (struct CGPoint)_adjustedOffsetForIndex:(long long)arg1 offset:(struct CGPoint)arg2 start:(struct CGPoint)arg3 originalLocationInView:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5;
- (double)_scrollMin;
- (double)_counteractScrollingForOffset:(double)arg1 scrollProgress:(double)arg2;
- (double)_scrollProgressForIndex:(unsigned long long)arg1 displayItemsCount:(unsigned long long)arg2 depth:(double)arg3;
- (double)_preferredVisibleMarginForTopPage;
- (double)_scaleTransformedXOrigin:(double)arg1 scrollProgress:(double)arg2;
- (double)_scaleInSwitcherViewForIndex:(unsigned long long)arg1 scrollProgress:(double)arg2;

@end
