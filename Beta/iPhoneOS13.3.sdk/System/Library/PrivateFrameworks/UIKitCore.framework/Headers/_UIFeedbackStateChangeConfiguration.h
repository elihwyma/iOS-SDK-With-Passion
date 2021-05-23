/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class _UIFeedback;

@protocol _UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable;

@interface _UIFeedbackStateChangeConfiguration : NSObject <Swift>

{
    _UIFeedback<_UIFeedbackDiscretePlayable> *_thresholdFeedback;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_approachFeedback;
    double _approachStart;
    double _approachEnd;
    double _approachCurvature;
    double _approachVolumeMax;
}

@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *thresholdFeedback;
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *approachFeedback;
@property (nonatomic) double approachStart;
@property (nonatomic) double approachEnd;
@property (nonatomic) double approachCurvature;
@property (nonatomic) double approachVolumeMax;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
