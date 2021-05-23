/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <CABasicAnimation.h>

@interface CABasicAnimation (PKCAUtilities)

- (void)pkui_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2;
- (void)pkui_updateForAdditiveAnimationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 withLayerPoint:(struct CGPoint)arg3;
- (void)pkui_updateForAdditiveAnimationFromScalar:(double)arg1 toScalar:(double)arg2 withLayerScalar:(double)arg3;
- (void)pkui_updateForAdditiveAnimationFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2 withLayerSize:(struct CGSize)arg3;
- (void)pkui_updateForAdditiveAnimationFromTransform:(struct CATransform3D)arg1 toTransform:(struct CATransform3D)arg2 withLayerTransform:(struct CATransform3D)arg3;
- (void)pkui_updateForAdditiveAnimationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)pkui_updateForAdditiveAnimationFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)pkui_updateForAdditiveAnimationFromTransform:(struct CATransform3D)arg1 toTransform:(struct CATransform3D)arg2;

@end
