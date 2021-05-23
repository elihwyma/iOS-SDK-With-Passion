/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIPresentationController.h>

@class UIView;

@interface SBBulletinWindowPresentationController : UIPresentationController

{
    UIView *_counterRotatedView;
    double _counterRotatedAngle;
    struct CGRect _counterRotatedOriginalBounds;
}

@property (retain, nonatomic, getter=_counterRotatedView, setter=_setCounterRotatedView:) UIView *counterRotatedView;
@property (nonatomic, getter=_counterRotatedAngle, setter=_setCounterRotatedAngle:) double counterRotatedAngle;
@property (nonatomic, getter=_counterRotatedOriginalBounds, setter=_setCounterRotatedOriginalBounds:) struct CGRect counterRotatedOriginalBounds;

- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (_Bool)shouldPresentInFullscreen;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (_Bool)_shouldDisableInteractionDuringTransitions;
- (_Bool)shouldRemovePresentersView;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (void)_removeCounterRotationIfNecessary;

@end
