/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class NSString, _UIFeedback, _UIStatesFeedbackGeneratorConfiguration;

@protocol _UIFeedbackContinuousPlayable;

@interface _UIStatesFeedbackGenerator : UIFeedbackGenerator

{
    _Bool _approachActivated;
    NSString *_currentState;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

@property (nonatomic, getter=_approachActivated, setter=_setApproachActivated:) _Bool approachActivated;
@property (nonatomic, readonly, getter=_statesConfiguration) _UIStatesFeedbackGeneratorConfiguration *statesConfiguration;
@property (retain, nonatomic) NSString *currentState;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (id)initWithStyle:(long long)arg1;
- (id)initWithConfiguration:(id)arg1 coordinateSpace:(id)arg2;
- (id)_stats_key;
- (id)initWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (void)_stopPlayingContinuousFeedback;
- (id)_configurationFromState:(id)arg1 toState:(id)arg2;
- (void)transitionToState:(id)arg1 updated:(double)arg2;
- (void)transitionToState:(id)arg1 ended:(_Bool)arg2;

@end
