/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, _UIFeedbackGeneratorConfiguration;

@protocol OS_dispatch_source, UICoordinateSpace;

@interface UIFeedbackGenerator : NSObject

{
    long long _styleActivationCount[3];
    long long _autoDeactivationCount[3];
    NSObject<OS_dispatch_source> *_autoDeactivateTimer;
    NSMutableDictionary *_preparationTimers;
    CDUnknownBlockType _feedbackWarmingBlock;
    double _currentDelay;
    NSSet *_usedFeedbacks;
    _Bool _activated;
    _Bool _usesCustomActivation;
    long long _activationCount;
    long long _externalActivationCount;
    id <UICoordinateSpace> _coordinateSpace;
    _UIFeedbackGeneratorConfiguration *_configuration;
    NSSet *_engines;
}

@property (nonatomic, getter=_isMuted, setter=_setMuted:) _Bool muted;
@property (nonatomic) long long activationCount;
@property (nonatomic) long long externalActivationCount;
@property (nonatomic) _Bool usesCustomActivation;
@property (weak, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property (retain, nonatomic, getter=_configuration, setter=_setConfiguration:) _UIFeedbackGeneratorConfiguration *configuration;
@property (nonatomic, readonly) NSSet *engines;
@property (nonatomic, readonly, getter=_effectiveCoordinateSpace) id <UICoordinateSpace> effectiveCoordinateSpace;
@property (nonatomic, readonly, getter=_isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=_autoDeactivationTimeout) double autoDeactivationTimeout;
@property (nonatomic, readonly, getter=_isAutoDeactivated) _Bool autoDeactivated;
@property (nonatomic, readonly) NSString *_stats_key;

+ (Class)_configurationClass;
+ (id)_defaultCoordinateSpace;
+ (void)_setAutoDeactivateTimeout:(double)arg1;
+ (void)_resetAutoDeactivateTimeout;
+ (void)_setPreparationTimeout:(double)arg1 forStyle:(long long)arg2;
+ (void)_resetPreparationTimeouts;
+ (void)_setRunningTests:(_Bool)arg1;
+ (id)behaviorWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
+ (id)behaviorWithCoordinateSpace:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (_Bool)isActive;
- (id)initWithConfiguration:(id)arg1;
- (void)_activated;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (void)prepare;
- (id)initWithCoordinateSpace:(id)arg1;
- (void)deactivate;
- (void)performFeedbackWithDelay:(double)arg1 insideBlock:(CDUnknownBlockType)arg2;
- (void)activateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setOutputMode:(long long)arg1;
- (long long)_outputMode;
- (void)_stopAutoDeactivateTimer;
- (void)_stopPreparationForAllStyles;
- (void)_autoDeactivate;
- (id)_ui_descriptionBuilder;
- (void)_stats_prepared;
- (id)_preparationTimerForStyle:(long long)arg1;
- (void)_prepareWithStyle:(long long)arg1;
- (double)_preparationTimeoutForStyle:(long long)arg1;
- (void)_stopPreparationForStyle:(long long)arg1;
- (void)_setPreparationTimer:(id)arg1 forStyle:(long long)arg2;
- (void)_updatePreparationTimer:(id)arg1 withTimeout:(double)arg2;
- (void)_activateWithStyle:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_deactivateWithStyle:(long long)arg1;
- (void)_setupEnginesIfNeededForFeedback:(id)arg1;
- (void)_setupForFeedback:(id)arg1;
- (void)__activateWithStyle:(long long)arg1 forFeedback:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_clientDidUpdateGeneratorWithSelector:(SEL)arg1;
- (void)_setupAutoDeactivateTimer;
- (void)_stats_activationDidChangeTo:(_Bool)arg1;
- (void)_scheduleFeedbackWarming;
- (void)_startFeedbackWarming;
- (void)__deactivateWithStyle:(long long)arg1;
- (void)_deactivated;
- (void)_stopFeedbackWarming;
- (void)_stats_activationTimedOut;
- (void)_resetAutoDeactivationTimeout;
- (void)_forceDeactivationForStyle:(long long)arg1;
- (void)_playFeedback:(id)arg1 withMinimumIntervalPassed:(double)arg2 since:(double *)arg3 prefersRegularPace:(_Bool)arg4;
- (void)_stats_playedFeedback;
- (void)_playFeedback:(id)arg1;
- (void)_stopFeedback:(id)arg1;
- (id)_statsSuffix;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (id)_activationTimeOutCountStatistics;
- (id)_preparationCountStatistics;
- (id)_playCountStatistics;

@end
