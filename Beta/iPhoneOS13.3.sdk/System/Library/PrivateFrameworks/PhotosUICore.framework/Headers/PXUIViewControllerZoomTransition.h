/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIViewControllerTransition.h>

@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (_Bool)supportsEdgeSwipeBackGesture;
- (long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1;
- (void)animateZoomTransition:(id)arg1 withInitialVelocity:(struct PXDisplayVelocity)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
