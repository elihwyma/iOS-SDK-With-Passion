/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSString, SBHomeGestureDockSwitcherModifier;

@protocol SBHomeGestureFinalDestinationSwitcherModifierDelegate;

@interface SBHomeGestureFinalDestinationSwitcherModifier : SBSwitcherModifier

{
    struct CGPoint _initialTranslationAdjustment;
    struct CGPoint _translation;
    struct CGPoint _velocity;
    double _lastTouchTimestamp;
    double _lastAverageVelocityYForAcceleration;
    struct CGPoint _initialTouchLocation;
    struct CGPoint _lastTouchLocation;
    struct CGPoint _directionSwitchLocation;
    _Bool _movingTowardsNextLayoutState;
    double _adaptiveMinimumYVelocityForHome;
    double _adaptivePauseVelocityThresholdForAppSwitcher;
    double _adaptiveVelocitySlopeThresholdForArc;
    double _lastFinalDestination;
    long long _edgeRegionSampleCounter;
    _Bool _updateEdgeRegionSampleCounter;
    _Bool _gestureHasBegun;
    _Bool _gestureHasEnded;
    unsigned long long _numberOfTouchSamples;
    SBHomeGestureDockSwitcherModifier *_dockModifier;
    _Bool _scrunchInitiated;
    _Bool _startingInAppSwitcher;
    _Bool _continuingGesture;
    id <SBHomeGestureFinalDestinationSwitcherModifierDelegate> _finalDestinationDelegate;
    _Bool _hasSeenAccelerationDipForAppSwitcher;
    NSString *_finalDestinationReason;
}

@property (retain, nonatomic) SBHomeGestureDockSwitcherModifier *dockModifier;
@property (nonatomic, readonly) long long currentFinalDestination;
@property (nonatomic, readonly) NSString *finalDestinationReason;
@property (nonatomic, readonly) _Bool hasSeenAccelerationDipForAppSwitcher;

- (id)debugDescription;
- (id)handleGestureEvent:(id)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)studyLogData;
- (id)initWithDelegate:(id)arg1 initialTranslationAdjustment:(struct CGPoint)arg2 startingInAppSwitcher:(_Bool)arg3 continuingGesture:(_Bool)arg4;
- (void)_applyPrototypeSettings;
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;
- (void)_updateForGestureDidBeginWithEvent:(id)arg1;
- (void)_updateForGestureDidChangeWithEvent:(id)arg1;
- (void)_updateForGestureDidEndWithEvent:(id)arg1;
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1;
- (_Bool)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;
- (_Bool)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;
- (void)_updateAdaptiveThresholdsForCurrentFinalDestination:(long long)arg1 velocityAverage:(struct CGPoint)arg2;
- (long long)_adjustedFinalDestinationAccountingForEdgeDataDistortion:(long long)arg1 location:(struct CGPoint)arg2;
- (double)_unconditionalDistanceThresholdForHome;

@end
