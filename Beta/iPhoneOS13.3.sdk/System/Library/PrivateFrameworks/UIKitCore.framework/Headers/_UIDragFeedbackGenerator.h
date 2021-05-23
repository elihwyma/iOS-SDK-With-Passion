/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIDragFeedbackGeneratorConfiguration, _UIFeedback;

@protocol _UIFeedbackContinuousPlayable;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator

{
    long long _state;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

@property (nonatomic, readonly, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (id)_stats_key;
- (void)_startPlayingContinuousFeedback;
- (void)_stopPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (void)dropTargetUpdated;

@end
