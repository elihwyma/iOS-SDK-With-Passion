/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/_PXValueAnimation.h>

@interface _PXValueSpringAnimation : _PXValueAnimation

{
    double _A;
    double _B;
    double _omega0;
}

+ (double)durationOfSpringAnimationWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5;

- (double)currentValue;
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;
- (id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;

@end
