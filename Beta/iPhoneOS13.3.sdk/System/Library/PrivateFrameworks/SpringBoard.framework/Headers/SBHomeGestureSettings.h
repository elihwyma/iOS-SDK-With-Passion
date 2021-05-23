/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <PrototypeTools/PTSettings.h>

@class SBHomeGestureExclusionTrapezoidSettings;

@interface SBHomeGestureSettings : PTSettings

{
    _Bool _homeGestureEnabled;
    _Bool _recognizeAlongEdge;
    _Bool _snapToMaxVelocityThresholdAfterAccelerationDip;
    _Bool _injectGestureVelocityForZoomDown;
    _Bool _onlyInjectVelocityForShortFlicks;
    _Bool _preventMultipleEdgesAfterAppInteraction;
    _Bool _resetSwitcherListAfterAppInteraction;
    double _hysteresis;
    double _minimumYDistanceForHomeOrAppSwitcher;
    double _minimumYDistanceToConsiderAccelerationDip;
    double _minimumXDistanceForFirstArcSwipe;
    double _minimumXDistanceToTriggerArcByDistancePortrait;
    double _minimumXDistanceToTriggerArcByDistanceLandscape;
    double _maximumYDistanceToTriggerArcByDistance;
    double _maximumYDistanceToTriggerArcByFlick;
    double _velocityYThresholdForUnconditionalHome;
    double _minimumYVelocityForHome;
    double _velocityXThresholdForUnconditionalArcSwipe;
    double _minimumYVelocityForArcSwipe;
    double _normalizedDistanceYThresholdForUnconditionalHome;
    double _normalizedDistanceYThresholdRangeForUnconditionalHome;
    double _pauseVelocityThresholdForAppSwitcher;
    double _pauseVelocityThresholdForDefiniteAppSwitcher;
    double _maximumAdaptivePauseVelocityThresholdForAppSwitcher;
    double _maximumAdaptiveVelocityThresholdForDock;
    double _appSwitcherVelocityThresholdIncreasingRateFraction;
    double _dockVelocityThresholdIncreasingRateFraction;
    double _adaptiveThresholdsDecreasingRateFraction;
    double _velocitySlopeThresholdForBottomSwipeUpArc;
    double _velocitySlopeThresholdForScrunchArc;
    double _velocitySlopeThresholdForCurrentLayout;
    double _edgeDistanceToCorrectGestureFinalDestination;
    double _cardFlyInMaximumVelocityThreshold;
    double _cardFlyInDelayAfterEnteringAppSwitcher;
    double _maximumDistanceYThresholdToPresentDock;
    double _centerYOffsetPercentOfScreenHeightPhone;
    double _centerYOffsetPercentOfScreenHeightPad;
    double _verticalRubberbandStart;
    double _verticalRubberbandEnd;
    double _verticalRubberbandDistance;
    double _verticalRubberbandExponent;
    double _horizontalRubberbandStart;
    double _horizontalRubberbandEnd;
    double _horizontalRubberbandDistance;
    double _horizontalRubberbandExponent;
    double _positionVelocityXPercentOfGestureVelocityX;
    double _positionVelocityYPercentOfGestureVelocityY;
    double _scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
    double _maximumScaleVelocity;
    double _morphSourceClipDuration;
    double _morphTargetUnclipDuration;
    double _secondsToAllowMultipleEdges;
    double _secondsToResetSwitcherListAfterTransition;
    SBHomeGestureExclusionTrapezoidSettings *_exclusionTrapezoidSettings;
}

@property (nonatomic, getter=isHomeGestureEnabled) _Bool homeGestureEnabled;
@property (nonatomic) double hysteresis;
@property (nonatomic) _Bool recognizeAlongEdge;
@property (nonatomic) double minimumYDistanceForHomeOrAppSwitcher;
@property (nonatomic) double minimumYDistanceToConsiderAccelerationDip;
@property (nonatomic) double minimumXDistanceForFirstArcSwipe;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistancePortrait;
@property (nonatomic) double minimumXDistanceToTriggerArcByDistanceLandscape;
@property (nonatomic) double maximumYDistanceToTriggerArcByDistance;
@property (nonatomic) double maximumYDistanceToTriggerArcByFlick;
@property (nonatomic) double velocityYThresholdForUnconditionalHome;
@property (nonatomic) double minimumYVelocityForHome;
@property (nonatomic) double velocityXThresholdForUnconditionalArcSwipe;
@property (nonatomic) double minimumYVelocityForArcSwipe;
@property (nonatomic) double normalizedDistanceYThresholdForUnconditionalHome;
@property (nonatomic) double normalizedDistanceYThresholdRangeForUnconditionalHome;
@property (nonatomic) double pauseVelocityThresholdForAppSwitcher;
@property (nonatomic) double pauseVelocityThresholdForDefiniteAppSwitcher;
@property (nonatomic) double maximumAdaptivePauseVelocityThresholdForAppSwitcher;
@property (nonatomic) _Bool snapToMaxVelocityThresholdAfterAccelerationDip;
@property (nonatomic) double maximumAdaptiveVelocityThresholdForDock;
@property (nonatomic) double appSwitcherVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double dockVelocityThresholdIncreasingRateFraction;
@property (nonatomic) double adaptiveThresholdsDecreasingRateFraction;
@property (nonatomic) double velocitySlopeThresholdForBottomSwipeUpArc;
@property (nonatomic) double velocitySlopeThresholdForScrunchArc;
@property (nonatomic) double velocitySlopeThresholdForCurrentLayout;
@property (nonatomic) double edgeDistanceToCorrectGestureFinalDestination;
@property (nonatomic) double cardFlyInMaximumVelocityThreshold;
@property (nonatomic) double cardFlyInDelayAfterEnteringAppSwitcher;
@property (nonatomic) double maximumDistanceYThresholdToPresentDock;
@property (nonatomic) double centerYOffsetPercentOfScreenHeightPhone;
@property (nonatomic) double centerYOffsetPercentOfScreenHeightPad;
@property (nonatomic) double verticalRubberbandStart;
@property (nonatomic) double verticalRubberbandEnd;
@property (nonatomic) double verticalRubberbandDistance;
@property (nonatomic) double verticalRubberbandExponent;
@property (nonatomic) double horizontalRubberbandStart;
@property (nonatomic) double horizontalRubberbandEnd;
@property (nonatomic) double horizontalRubberbandDistance;
@property (nonatomic) double horizontalRubberbandExponent;
@property (nonatomic) _Bool injectGestureVelocityForZoomDown;
@property (nonatomic) _Bool onlyInjectVelocityForShortFlicks;
@property (nonatomic) double positionVelocityXPercentOfGestureVelocityX;
@property (nonatomic) double positionVelocityYPercentOfGestureVelocityY;
@property (nonatomic) double scaleVelocityPercentOfGestureVelocityYDividedByViewHeight;
@property (nonatomic) double maximumScaleVelocity;
@property (nonatomic) double morphSourceClipDuration;
@property (nonatomic) double morphTargetUnclipDuration;
@property (nonatomic) double secondsToAllowMultipleEdges;
@property (nonatomic) _Bool preventMultipleEdgesAfterAppInteraction;
@property (nonatomic) double secondsToResetSwitcherListAfterTransition;
@property (nonatomic) _Bool resetSwitcherListAfterAppInteraction;
@property (retain, nonatomic) SBHomeGestureExclusionTrapezoidSettings *exclusionTrapezoidSettings;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setHomeGestureTuningDefaults;
- (void)setLatchDefaults;

@end
