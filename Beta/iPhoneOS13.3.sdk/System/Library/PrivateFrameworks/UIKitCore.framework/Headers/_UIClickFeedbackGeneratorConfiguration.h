/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickDownAudioFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_clickUpAudioFeedback;
}

@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownPattern;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpPattern;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickDownAudioFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *clickUpAudioFeedback;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;
- (void)setclickDownFeedback:(id)arg1;

@end
