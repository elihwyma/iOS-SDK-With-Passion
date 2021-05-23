/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIViewControllerTransition.h>

@class PXPinchTracker, PXRegionOfInterest, UIPinchGestureRecognizer, UIView;

@protocol UIViewControllerContextTransitioning;

@interface PXUIViewControllerPinchTransition : PXUIViewControllerTransition

{
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    long long __state;
    id <UIViewControllerContextTransitioning> __transitionContext;
    UIView *__fromView;
    UIView *__toView;
    UIView *__fromSnapshotView;
    UIView *__toSnapshotView;
    UIView *__dimmingView;
    PXRegionOfInterest *__regionOfInterest;
    PXPinchTracker *__pinchTracker;
}

@property (nonatomic, setter=_setState:) long long _state;
@property (retain, nonatomic, setter=_setTransitionContext:) id <UIViewControllerContextTransitioning> _transitionContext;
@property (retain, nonatomic, setter=_setFromView:) UIView *_fromView;
@property (retain, nonatomic, setter=_setToView:) UIView *_toView;
@property (retain, nonatomic, setter=_setFromSnapshotView:) UIView *_fromSnapshotView;
@property (retain, nonatomic, setter=_setToSnapshotView:) UIView *_toSnapshotView;
@property (retain, nonatomic, setter=_setDimmingView:) UIView *_dimmingView;
@property (retain, nonatomic, setter=_setRegionOfInterest:) PXRegionOfInterest *_regionOfInterest;
@property (retain, nonatomic, setter=_setPinchTracker:) PXPinchTracker *_pinchTracker;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;

+ (_Bool)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2;

- (void)_update;
- (_Bool)isInteractive;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)pinchGestureRecognizerDidChange;

@end
