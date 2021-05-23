/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackContinuousPlayable;

@interface _UIModulationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

{
    _UIFeedback<_UIFeedbackContinuousPlayable> *_feedback;
    CDUnknownBlockType _feedbackUpdateBlock;
}

@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *feedback;
@property (copy, nonatomic) CDUnknownBlockType feedbackUpdateBlock;

+ (id)defaultConfiguration;
+ (id)sliderConfiguration;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end
