/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/CCUIContentModuleContainerTransition.h>

@class UIView, UIWindow;

@interface CCUIContentModuleContainerReducedMotionTransition : CCUIContentModuleContainerTransition

{
    UIWindow *_snapshotHostWindow;
    UIView *_snapshotView;
    struct CGAffineTransform _snapshotCorrectiveTransform;
}

@property (weak, nonatomic) UIWindow *snapshotHostWindow;
@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) struct CGAffineTransform snapshotCorrectiveTransform;

- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (id)customAnimator;

@end
