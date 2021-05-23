/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (JTAdditions)

- (void)jtAddChildViewController:(id)arg1 constrainRelativeToSafeAreas:(_Bool)arg2;
- (void)displaySnapshot:(id)arg1 atCenterPoint:(struct CGPoint)arg2 atIndex:(long long)arg3 forTransitionToSize:(struct CGSize)arg4 fadeOut:(_Bool)arg5 withTransitionCoordinator:(id)arg6 preTransitionBlock:(CDUnknownBlockType)arg7 postTransitionBlock:(CDUnknownBlockType)arg8;
- (void)animateCounterRotationView:(id)arg1 fadeOut:(_Bool)arg2 toWindowOrientation:(long long)arg3 fromWindowOrientation:(long long)arg4 forTransitionToSize:(struct CGSize)arg5 withTransitionCoordinator:(id)arg6 postTransitionBlock:(CDUnknownBlockType)arg7 postRemoveFromSuperviewBlock:(CDUnknownBlockType)arg8;
- (id)counterRotationViewForSnapshot:(id)arg1 atCenterPoint:(struct CGPoint)arg2 toWindowOrientation:(long long)arg3 fromWindowOrientation:(long long)arg4;
- (void)applyRotationTransformForPortrait;
- (void)jtRemoveFromParentViewController;
- (struct CGPoint)jtCenterAdjustedForOrientationForPortraitFrame:(struct CGRect)arg1;
- (void)jtAddChildViewController:(id)arg1;
- (void)jtAddChildViewController:(id)arg1 containerView:(id)arg2 constrainToContainer:(_Bool)arg3 relativeToSafeArea:(_Bool)arg4;
- (void)jtAddChildViewController:(id)arg1 containerView:(id)arg2;
- (struct CGPoint)jtCenterAdjustedForOrientationForPortraitFrameWithParentFrame:(struct CGRect)arg1 frame:(struct CGRect)arg2;
- (double)jtDisplayScale;

@end
