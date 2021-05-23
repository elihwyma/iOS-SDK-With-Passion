/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackDiscretePlayable;

@interface _UIImpactFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_feedback;
    CDUnknownBlockType _feedbackUpdateBlock;
    double _minimumInterval;
}

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *feedback;
@property (copy, nonatomic) CDUnknownBlockType feedbackUpdateBlock;
@property (nonatomic) double minimumInterval;

+ (id)defaultConfiguration;
+ (id)lightConfiguration;
+ (id)strongConfiguration;
+ (id)softConfiguration;
+ (id)rigidConfiguration;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end
