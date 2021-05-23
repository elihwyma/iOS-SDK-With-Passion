/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;

@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIEdgeFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration

{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_userInteractingThresholdFeedback;
    CDUnknownBlockType _userInteractingThresholdFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_userInteractingBeyondEdgeFeedback;
    CDUnknownBlockType _userInteractingBeyondEdgeFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_userInteractingReleaseFeedback;
    CDUnknownBlockType _userInteractingReleaseFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_animatingThresholdFeedback;
    CDUnknownBlockType _animatingThresholdFeedbackUpdateBlock;
    _UIFeedback<_UIFeedbackDiscretePlayable> *_animatingMaximumExtentFeedback;
    CDUnknownBlockType _animatingMaximumExtentFeedbackUpdateBlock;
    long long _defaultAxis;
    double _minDistanceFromEdge;
}

@property (nonatomic, getter=_defaultAxis, setter=_setDefaultAxis:) long long defaultAxis;
@property (nonatomic) double minDistanceFromEdge;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingThresholdFeedback;
@property (copy, nonatomic) CDUnknownBlockType userInteractingThresholdFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *userInteractingBeyondEdgeFeedback;
@property (copy, nonatomic) CDUnknownBlockType userInteractingBeyondEdgeFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *userInteractingReleaseFeedback;
@property (copy, nonatomic) CDUnknownBlockType userInteractingReleaseFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingThresholdFeedback;
@property (copy, nonatomic) CDUnknownBlockType animatingThresholdFeedbackUpdateBlock;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *animatingMaximumExtentFeedback;
@property (copy, nonatomic) CDUnknownBlockType animatingMaximumExtentFeedbackUpdateBlock;

+ (id)defaultConfiguration;
+ (id)sliderConfiguration;
+ (id)verticalScrollConfiguration;
+ (id)horizontalScrollConfiguration;
+ (id)swipePresentationConfiguration;
+ (id)_zoomConfiguration;
+ (id)_scrollConfigurationWithAxis:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackKeyPaths;
- (long long)requiredSupportLevel;

@end
