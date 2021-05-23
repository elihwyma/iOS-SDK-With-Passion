/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/CCUICABasicAnimationParameters.h>

@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUIMutableCABasicAnimationParameters : CCUICABasicAnimationParameters

@property (nonatomic) double duration;
@property (copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
