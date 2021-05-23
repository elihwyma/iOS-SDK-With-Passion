/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@protocol SBHomeGestureDockSwitcherModifierDelegate;

@interface SBHomeGestureDockSwitcherModifier : SBSwitcherModifier

{
    struct CGPoint _lastTouchLocation;
    struct CGPoint _unadjustedGestureTranslation;
    struct CGPoint _velocity;
    struct CGPoint _translationAdjustmentForFloatingDock;
    _Bool _currentlyTrackingDock;
    _Bool _wasTrackingDockWhenGestureBegan;
    _Bool _hadOpenDockFolderWhenGestureBegan;
    _Bool _hadOpenHomeScreenFolderWhenGestureBegan;
    _Bool _verticallyRubberbandedOutOfDock;
    _Bool _wantsDockAssertion;
    _Bool _highEnoughToShowDock;
    _Bool _gestureHasBegun;
    _Bool _gestureHasEnded;
    id <SBHomeGestureDockSwitcherModifierDelegate> _delegate;
    long long _startingEnvironmentMode;
    _Bool _requireVerticalSwipeToTrackDock;
}

@property (nonatomic, readonly, getter=isCurrentlyTrackingDock) _Bool currentlyTrackingDock;

- (id)debugDescription;
- (id)handleGestureEvent:(id)arg1;
- (_Bool)_shouldPresentDockForFinalDestination:(long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (_Bool)wantsDockBehaviorAssertion;
- (long long)dockUpdateMode;
- (double)dockProgress;
- (_Bool)wantsDockWindowLevelAssertion;
- (unsigned long long)dockWindowLevelPriority;
- (double)dockWindowLevel;
- (id)studyLogData;
- (void)_applyPrototypeSettings;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;
- (id)_updateForGestureDidEndWithEvent:(id)arg1;
- (id)initWithDelegate:(id)arg1 startingEnvironmentMode:(long long)arg2 requireVerticalSwipeToTrackDock:(_Bool)arg3;
- (struct CGPoint)translationForAdjustedTranslation:(struct CGPoint)arg1;
- (struct CGPoint)adjustedTranslationForTranslation:(struct CGPoint)arg1;
- (_Bool)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (long long)adjustedFinalDestinationForDestination:(long long)arg1 withTranslation:(struct CGPoint)arg2 velocity:(struct CGPoint)arg3;
- (void)_updateGestureTranslationAndVelocityWithEvent:(id)arg1;
- (_Bool)_rubberbandedOutOfDockHorizontally;

@end
