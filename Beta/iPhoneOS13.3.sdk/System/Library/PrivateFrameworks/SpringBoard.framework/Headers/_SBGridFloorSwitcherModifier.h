/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@interface _SBGridFloorSwitcherModifier : SBSwitcherModifier

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (_Bool)isScrollEnabled;
- (double)wallpaperScale;
- (double)dimmingAlpha;
- (double)contentViewScale;
- (long long)wallpaperStyle;
- (double)containerStatusBarAnimationDuration;
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
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (_Bool)wantsMinificationFilter;
- (double)homeScreenScale;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (_Bool)shouldRubberbandHomeGrabberView;
- (_Bool)shouldTetherTransitionCompletion;
- (_Bool)shouldPerformRotationAnimationForOrientationChange;
- (id)appLayoutToScrollToBeforeReopeningClosedWindows;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (long long)layoutUpdateMode;
- (_Bool)shouldTruncateAnimationsUponTransitionCompletion;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (_Bool)shouldAnimateInsertionOrRemovalAtIndex:(unsigned long long)arg1;
- (_Bool)shouldConfigureInAppDockHiddenAssertion;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
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
- (long long)preferredSnapshotOrientation;
- (unsigned long long)numberOfDefaultAppLayoutsToCacheSnapshots;
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
- (unsigned long long)insertionStyleForInsertingAppLayout:(id)arg1;
- (_Bool)shouldBringCardToFrontDuringInsertionOrRemoval;
- (unsigned long long)indexToScrollToAfterInsertingAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexToScrollToAfterRemovingIndex:(unsigned long long)arg1;

@end
