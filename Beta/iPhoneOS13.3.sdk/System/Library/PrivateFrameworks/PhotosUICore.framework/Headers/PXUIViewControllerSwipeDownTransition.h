/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIViewControllerZoomTransition.h>

@class PXSwipeDownTracker, UIPanGestureRecognizer, UIView;

@protocol UIViewControllerContextTransitioning;

@interface PXUIViewControllerSwipeDownTransition : PXUIViewControllerZoomTransition

{
    _Bool _didAnimate;
    _Bool _shouldHandleGestureEnd;
    _Bool _didHandleGestureEnd;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_swipedView;
    UIView *_dimmingView;
    PXSwipeDownTracker *_swipeDownTracker;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _swipeViewInitialCenter;
}

@property (retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext;
@property (retain, nonatomic) UIView *swipedView;
@property (nonatomic) struct CGPoint swipeViewInitialCenter;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) PXSwipeDownTracker *swipeDownTracker;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (_Bool)isInteractive;
- (void)animateTransition:(id)arg1;
- (void)panGestureRecognizerDidChange;
- (void)_handleGestureEndIfNeeded;
- (void)_updateDimmingViewOrder;

@end
