/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIDragFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

{
    _UIFeedback<_UIFeedbackContinuousPlayable> *_interactionProgressingFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_interactionUpdatedFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_targetUpdatedFeedback;
    double _progressingFeedbackDelay;
}

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *interactionProgressingFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionUpdatedFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *targetUpdatedFeedback;
@property (nonatomic) double progressingFeedbackDelay;

+ (id)defaultConfiguration;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end
