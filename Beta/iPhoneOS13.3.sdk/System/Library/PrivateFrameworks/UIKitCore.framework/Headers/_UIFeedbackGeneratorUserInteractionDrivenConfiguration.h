/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackDiscretePlayable;

@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : _UIFeedbackGeneratorConfiguration

{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_interactionStartedFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_interactionEndedFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_interactionCancelledFeedback;
}

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionStartedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionEndedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionCancelledFeedback;

- (id)feedbackKeyPaths;

@end
