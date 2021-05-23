/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CAAnimation.h>

@interface CAAnimation (TSDCAAnimationAdditions)

+ (id)TSD_supportedKeyPaths;

- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (id)TSD_valueAtTime:(double)arg1 initialValue:(id)arg2;
- (void)p_getValue:(id *)arg1 animationPercent:(double *)arg2 atTime:(double)arg3 initialValue:(id)arg4;
- (id)TSD_valueForKeyPath:(id)arg1 atTime:(double)arg2;
- (double)TSD_animationPercentByApplyingTimingFunctionForKeyPath:(id)arg1 atTime:(double)arg2;
- (_Bool)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;

@end
