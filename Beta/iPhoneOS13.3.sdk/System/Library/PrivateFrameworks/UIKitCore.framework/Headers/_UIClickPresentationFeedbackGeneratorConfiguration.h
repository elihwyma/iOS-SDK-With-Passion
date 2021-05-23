/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *previewedPattern;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *poppedPattern;
@property (nonatomic, readonly) _UIFeedback<_UIFeedbackDiscretePlayable> *draggedPattern;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end
