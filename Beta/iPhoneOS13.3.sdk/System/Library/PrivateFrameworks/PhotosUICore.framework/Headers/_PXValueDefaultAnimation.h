/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/_PXValueAnimation.h>

@interface _PXValueDefaultAnimation : _PXValueAnimation

{
    double _initialValue;
    long long _curve;
}

- (double)currentValue;
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;
- (id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec)arg3;

@end
