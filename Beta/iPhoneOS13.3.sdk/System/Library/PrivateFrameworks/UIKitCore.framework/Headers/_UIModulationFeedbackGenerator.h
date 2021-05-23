/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIFeedback, _UIModulationFeedbackGeneratorConfiguration;

@protocol _UIFeedbackContinuousPlayable;

@interface _UIModulationFeedbackGenerator : UIFeedbackGenerator

{
    double _currentValue;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

@property (nonatomic, readonly, getter=_modulationConfiguration) _UIModulationFeedbackGeneratorConfiguration *modulationConfiguration;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback;

+ (Class)_configurationClass;

- (void)deactivate;
- (void)activateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)valueUpdated:(double)arg1;
- (id)_stats_key;
- (void)activateWithInitialValue:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
