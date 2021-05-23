/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation

@property double velocity;
@property double mass;
@property double stiffness;
@property double damping;
@property double initialVelocity;
@property (readonly) double settlingDuration;

+ (id)defaultValueForKey:(id)arg1;

- (double)durationForEpsilon:(double)arg1;
- (float)_solveForInput:(float)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (double)_timeFunction:(double)arg1;

@end
