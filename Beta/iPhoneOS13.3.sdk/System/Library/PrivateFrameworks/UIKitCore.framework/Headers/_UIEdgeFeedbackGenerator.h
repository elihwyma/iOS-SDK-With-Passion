/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIEdgeFeedbackGeneratorConfiguration, _UIFeedback, _UIFeedbackEngine;

@protocol _UIFeedbackContinuousPlayable;

@interface _UIEdgeFeedbackGenerator : UIFeedbackGenerator

{
    _UIFeedbackEngine *_feedbackEngine;
    _Bool _playedOvershotThresholdFeedback;
    _Bool _closeToEdge;
    double _distance;
    long long _axis;
    double _extentBeyondDistance;
    double _closeToEdgeUpdateTime;
    double _value;
    double _previousValue;
    long long _lastState;
    double _lastValueUpdateTime;
    double _previousValueUpdateTime;
    double _velocity;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
    long long _state;
}

@property (nonatomic, readonly, getter=_edgeConfiguration) _UIEdgeFeedbackGeneratorConfiguration *edgeConfiguration;
@property (nonatomic, getter=_isCloseToEdge, setter=_setCloseToEdge:) _Bool closeToEdge;
@property (nonatomic, getter=_closeToEdgeUpdateTime, setter=_setCloseToEdgeUpdateTime:) double closeToEdgeUpdateTime;
@property (nonatomic, getter=_value, setter=_setValue:) double value;
@property (nonatomic, getter=_previousValue, setter=_setPreviousValue:) double previousValue;
@property (nonatomic, getter=_lastState, setter=_setLastState:) long long lastState;
@property (nonatomic, getter=_lastValueUpdateTime, setter=_setLastValueUpdateTime:) double lastValueUpdateTime;
@property (nonatomic, getter=_previousValueUpdateTime, setter=_setPreviousValueUpdateTime:) double previousValueUpdateTime;
@property (nonatomic, getter=_velocity, setter=_setVelocity:) double velocity;
@property (nonatomic, readonly, getter=_isOvershot) _Bool overshot;
@property (nonatomic, readonly, getter=_percentBeyondDistance) float percentBeyondDistance;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;
@property (nonatomic, readonly, getter=_effectiveDistance) double effectiveDistance;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (nonatomic) long long axis;
@property (nonatomic) double distance;
@property (nonatomic) double extentBeyondDistance;

+ (Class)_configurationClass;

- (id)initWithStyle:(long long)arg1;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)userInteractionCancelled;
- (void)positionUpdated:(double)arg1;
- (void)_deactivate;
- (id)_stats_key;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (void)_cancelStopAnimatingTimeout;
- (void)_animationEnded;
- (void)_animationStartedUsingTimeout:(_Bool)arg1;
- (void)_stopAnimatingWithTimeout:(double)arg1;
- (_Bool)_valueIsOvershot:(double)arg1;
- (void)_positionUpdated:(double)arg1 withVelocity:(double)arg2;
- (void)_updateCloseToEdge;
- (void)_animationStarted;

@end
