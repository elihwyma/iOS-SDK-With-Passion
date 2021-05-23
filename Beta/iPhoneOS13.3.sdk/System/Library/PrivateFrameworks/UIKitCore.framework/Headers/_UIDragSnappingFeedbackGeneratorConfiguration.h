/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDragFeedbackGeneratorConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackDiscretePlayable;

@interface _UIDragSnappingFeedbackGeneratorConfiguration : _UIDragFeedbackGeneratorConfiguration

{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_objectSnappedFeedback;
}

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *objectSnappedFeedback;

+ (id)defaultConfiguration;

- (id)feedbackKeyPaths;

@end
