/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/CCUICASpringAnimationParameters.h>

@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUIMutableCASpringAnimationParameters : CCUICASpringAnimationParameters

@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
