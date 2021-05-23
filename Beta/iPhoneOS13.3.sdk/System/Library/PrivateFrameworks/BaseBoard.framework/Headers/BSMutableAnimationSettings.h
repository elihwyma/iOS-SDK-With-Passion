/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class CAMediaTimingFunction;

@interface BSMutableAnimationSettings

@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (nonatomic) double frameInterval;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) float speed;

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
