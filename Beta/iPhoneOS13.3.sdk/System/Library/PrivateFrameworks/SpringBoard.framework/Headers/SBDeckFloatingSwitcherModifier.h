/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBFluidSwitcherScrollProvidingDelegate;

@interface SBDeckFloatingSwitcherModifier : SBSwitcherModifier <Swift>

{
    unsigned long long _ongoingAppLayoutRemovals;
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;

- (struct CGSize)contentSize;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (_Bool)isScrollEnabled;
- (unsigned long long)_numberOfItems;
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
- (struct UIEdgeInsets)_contentInsetsWithContainerViewBounds:(struct CGRect)arg1 switcherViewBounds:(struct CGRect)arg2;
- (struct CGSize)_contentSizeWithWithCardSize:(struct CGSize)arg1 contentInsets:(struct UIEdgeInsets)arg2 switcherViewBounds:(struct CGRect)arg3 numberOfItems:(unsigned long long)arg4;
- (double)_adjustedIndexForScaleForIndex:(unsigned long long)arg1 withCardSize:(struct CGSize)arg2 contentOffset:(struct CGPoint)arg3 contentSize:(struct CGSize)arg4 contentInsets:(struct UIEdgeInsets)arg5 switcherViewBounds:(struct CGRect)arg6;
- (double)_scaleForScaleAdjustedIndex:(double)arg1;
- (struct CGRect)_frameForIndex:(unsigned long long)arg1 withCardSize:(struct CGSize)arg2 scale:(double)arg3 adjustedIndexForScale:(double)arg4 contentOffset:(struct CGPoint)arg5 contentSize:(struct CGSize)arg6 contentInsets:(struct UIEdgeInsets)arg7 switcherViewBounds:(struct CGRect)arg8;
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1 withCardSize:(struct CGSize)arg2 contentOffset:(struct CGPoint)arg3 contentSize:(struct CGSize)arg4 contentInsets:(struct UIEdgeInsets)arg5 switcherViewBounds:(struct CGRect)arg6;
- (double)_distanceFromPreviousCardForCardAtIndex:(unsigned long long)arg1;
- (struct CGSize)_fittedContentSizeWithCardSize:(struct CGSize)arg1 contentInsets:(struct UIEdgeInsets)arg2 switcherViewBounds:(struct CGRect)arg3 numberOfItems:(unsigned long long)arg4;

@end
