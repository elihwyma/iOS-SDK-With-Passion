//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXUIViewControllerZoomTransition.h>

@class PXSwipeDownTracker, UIPanGestureRecognizer, UIView;
@protocol UIViewControllerContextTransitioning;

@interface PXUIViewControllerSwipeDownTransition : PXUIViewControllerZoomTransition
{
    BOOL _didAnimate;
    BOOL _shouldHandleGestureEnd;
    BOOL _didHandleGestureEnd;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_swipedView;
    UIView *_dimmingView;
    PXSwipeDownTracker *_swipeDownTracker;
    UIPanGestureRecognizer *_panGestureRecognizer;
    CGPoint _swipeViewInitialCenter;
}

+ (BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) PXSwipeDownTracker *swipeDownTracker; // @synthesize swipeDownTracker=_swipeDownTracker;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) CGPoint swipeViewInitialCenter; // @synthesize swipeViewInitialCenter=_swipeViewInitialCenter;
@property(retain, nonatomic) UIView *swipedView; // @synthesize swipedView=_swipedView;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
// - (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (BOOL)isInteractive;
- (void)_updateDimmingViewOrder;
- (void)_handleGestureEndIfNeeded;
- (void)panGestureRecognizerDidChange;

@end

