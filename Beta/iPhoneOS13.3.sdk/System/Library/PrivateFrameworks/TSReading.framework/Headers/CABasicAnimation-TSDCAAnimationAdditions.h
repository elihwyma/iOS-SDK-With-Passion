/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CABasicAnimation.h>

@interface CABasicAnimation (TSDCAAnimationAdditions)

- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (void)p_getValue:(id *)arg1 animationPercent:(double *)arg2 atTime:(double)arg3 initialValue:(id)arg4;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;

@end
