/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <PlatterKit/PLViewControllerAnimator.h>

@interface PLViewControllerEdgeAnimator : PLViewControllerAnimator

+ (_Bool)drivesAnimation;

- (id)_newPropertyAnimator;
- (void)_performTransitionWithContext:(id)arg1;
- (void)_animateTransitionToEdge:(unsigned long long)arg1 withTransitionContext:(id)arg2;

@end
