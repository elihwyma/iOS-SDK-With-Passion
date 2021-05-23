/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class CADisplayLink, NSString, SBAppLayout, SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBHomeGestureSwitcherModifier : SBGestureSwitcherModifier

{
    _Bool _inMultitasking;
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;
    struct CGPoint _touchOffset;
    double _lastFrameOffsetX;
    double _lastTranslationXForRubberbanding;
    double _translationXLostToRubberbanding;
    _Bool _hasTriggeredCardFlyIn;
    double _translationYWhenTriggeredCardFlyIn;
    _Bool _hasBecomeCoplanarSinceGestureFromSwitcherBegan;
    struct CGPoint _gestureLiftOffVelocity;
    struct CGPoint _gestureLiftOffTranslation;
    struct CGPoint _translationAdjustmentForStartingFromSwitcher;
    struct CGPoint _translationAdjustmentForStartingFromHomeScreen;
    double _progressToInSwitcherCardScale;
    double _progressToMaxTranslation;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    double _stackedProgress;
    struct CGPoint _initialCentroid;
    struct CGPoint _centroid;
    double _absoluteScale;
    struct CGPoint _translationWithoutScale;
    CADisplayLink *_displayLink;
    double _lastTouchTimestamp;
    long long _gestureHoldTimer;
    struct CGPoint _initialTouchLocation;
    struct CGPoint _lastTouchLocation;
    _Bool _everTranslatedUpwards;
    _Bool _cancelledGestureForEmptySwitcher;
    double _toHomeScreenAlpha;
    double _toHomeScreenBlurProgress;
    double _toDimmingAlpha;
    _Bool _didWarmupFlyInHaptic;
    _Bool _didPlayFlyInHaptic;
    _Bool _gestureHasBegun;
    _Bool _gestureHasEnded;
    SBSwitcherModifier *_multitaskingModifier;
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    double _centerYOffsetWhenPresentedInSwitcher;
    _Bool _scrunchInitiated;
    _Bool _continuingGesture;
    _Bool _lastGestureWasAnArcSwipe;
    _Bool _shouldResignActive;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (void)_displayLinkFired:(id)arg1;
- (double)wallpaperScale;
- (double)dimmingAlpha;
- (id)handleGestureEvent:(id)arg1;
- (long long)wallpaperStyle;
- (double)_switcherCardScale;
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
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)backdropBlurProgress;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (_Bool)isContainerStatusBarVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (double)shadowOpacityForIndex:(unsigned long long)arg1;
- (_Bool)wantsMinificationFilter;
- (double)homeScreenScale;
- (void)didMoveToParentModifier:(id)arg1;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (id)handleMainTransitionEvent:(id)arg1;
- (double)_distanceYToInSwitcherCardScale;
- (void)_applyPrototypeSettings;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1;
- (void)_updateShouldResignActiveWithEvent:(id)arg1;
- (void)_updateStackedProgress;
- (id)_actionForUpdatingLayoutForGestureBegan;
- (id)_actionForUpdatingIconViewVisibility:(_Bool)arg1;
- (id)_actionForStudyLogDidBeginGesture;
- (id)_actionForSBEventGestureBeganWithTimeDelta:(double)arg1;
- (struct CGPoint)_unadjustedGestureTranslation;
- (_Bool)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;
- (id)_updateInMultitaskingIfNeededWithLocation:(struct CGPoint)arg1;
- (double)_scaleForAdjacentCards;
- (void)_updateFrameOffsetForXRubberbandingForTranslation:(struct CGPoint)arg1;
- (long long)currentFinalDestination;
- (id)_actionForActivatingFinalDestination:(long long)arg1;
- (id)_actionForActivatingReachabilityIfNeededWithFinalDestination:(long long)arg1;
- (id)_actionForStudyLogDidEndGestureWithEvent:(id)arg1 finalDestination:(long long)arg2 destinationReason:(id)arg3;
- (id)_actionForSBEventGestureEndWithEvent:(id)arg1 finalDestination:(long long)arg2;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1;
- (double)_gestureProgressToMaxTranslationForTranslation:(double)arg1;
- (_Bool)_isSelectedAppLayoutAtIndex:(unsigned long long)arg1;
- (struct CGPoint)_frameOffsetForTranslation:(struct CGPoint)arg1;
- (_Bool)_shouldPositionAdjacentCardsOffscreenForFlyIn;
- (struct CGPoint)_rubberbandedTranslationForAdjacentCards;
- (double)_scaleForTranslation:(struct CGPoint)arg1;
- (unsigned long long)_selectedAppLayoutIndex;
- (double)_coplanarSpacing;
- (double)_inSwitcherCenterYOffsetWhenPresented;
- (double)_centerYOffsetDuringGesture;
- (double)_scaleForOffscreenAdjacentCardsForFlyIn;
- (double)unconditionalDistanceThresholdForHome;
- (_Bool)_shouldResignActiveBasedOnCardScale;
- (_Bool)_hasPausedEnoughForFlyIn;
- (_Bool)_inMultitaskingForLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (_Bool)_preventPositioningCardsOffscreenForFlatBottomEdgeSwipe;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2;
- (_Bool)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (double)_distanceYToMaxTranslation;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 centerYOffsetWhenPresentedInSwitcher:(double)arg4 multitaskingModifier:(id)arg5 continuingGesture:(_Bool)arg6 lastGestureWasAnArcSwipe:(_Bool)arg7;
- (struct CGPoint)liftOffVelocityForGestureEnd;
- (struct CGPoint)liftOffTranslationForGestureEnd;
- (_Bool)isShowingOrAnimatingCardsForFlyIn;

@end
