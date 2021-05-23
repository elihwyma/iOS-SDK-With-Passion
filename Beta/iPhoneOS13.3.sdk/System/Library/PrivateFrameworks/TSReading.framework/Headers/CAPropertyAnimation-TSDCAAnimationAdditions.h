/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CAPropertyAnimation.h>

@interface CAPropertyAnimation (TSDCAAnimationAdditions)

- (_Bool)TSD_containsAnimationForKeyPath:(id)arg1;
- (id)TSD_animationForKeyPath:(id)arg1 atTime:(double)arg2;
- (id)p_adjustedResultWithValue:(id)arg1;
- (id)p_interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;
- (double)TSD_animationPercentFromAnimationTime:(double)arg1;

@end
