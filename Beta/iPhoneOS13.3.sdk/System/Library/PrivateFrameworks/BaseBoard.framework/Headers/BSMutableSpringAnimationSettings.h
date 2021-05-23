/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/BSSpringAnimationSettings.h>

@class CAMediaTimingFunction;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings

@property (nonatomic) double delay;
@property (nonatomic) double frameInterval;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) float speed;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double epsilon;
@property (nonatomic) double initialVelocity;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
