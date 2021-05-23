/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUAnimationSettings.h>

@class CASpringAnimation;

@interface HUSpringAnimationSettings : HUAnimationSettings

{
    double _completionEpsilon;
    CASpringAnimation *_springAnimation;
}

@property (nonatomic, readonly) CASpringAnimation *springAnimation;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double initialVelocity;
@property (nonatomic) double completionEpsilon;

+ (id)criticallyDampedSpringSettings;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)setRepeatCount:(float)arg1;
- (float)repeatCount;
- (void)_updateDuration;
- (double)interpolatedProgressForProgress:(double)arg1;
- (id)_initWithSpringAnimation:(id)arg1 completionEpsilon:(double)arg2;

@end
