/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class NSString, SBAppLayout, SBCoplanarSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier;

@interface SBReduceMotionHomeGestureSwitcherModifier : SBGestureSwitcherModifier

{
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    _Bool _continuingGesture;
    _Bool _lastGestureWasAnArcSwipe;
    _Bool _scrunchInitiated;
    struct CGPoint _initialTouchLocation;
    struct CGPoint _lastTouchLocation;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    struct CGPoint _translationAdjustmentForStartingFromHomeScreen;
    _Bool _gestureHasBegun;
    _Bool _gestureHasEnded;
    unsigned long long _reduceMotionAxis;
    _Bool _endingGestureForAppSwitcher;
    _Bool _didWarmupReduceMotionHaptic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleGestureEvent:(id)arg1;
- (long long)wallpaperStyle;
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
- (long long)liveContentRasterizationStyle;
- (_Bool)wantsMinificationFilter;
- (void)didMoveToParentModifier:(id)arg1;
- (_Bool)shouldRubberbandHomeGrabberView;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (id)handleMainTransitionEvent:(id)arg1;
- (void)_applyPrototypeSettings;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (long long)currentFinalDestination;
- (id)_actionForActivatingFinalDestination:(long long)arg1;
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1;
- (double)unconditionalDistanceThresholdForHome;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (id)_updateReduceMotionAxisIfNecessaryWithEvent:(id)arg1;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 continuingGesture:(_Bool)arg4 lastGestureWasAnArcSwipe:(_Bool)arg5;

@end
