/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

@class NSString, VideosExtrasBorderedImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition

{
    _Bool _interactive;
    _Bool _shouldUseSpringAnimation;
    unsigned long long _itemIndex;
    double _initialPinchScale;
    VideosExtrasBorderedImageView *_zoomingImageView;
    struct CGPoint _initialPinchCenter;
}

@property (nonatomic) struct CGPoint initialPinchCenter;
@property (nonatomic) double initialPinchScale;
@property (nonatomic) unsigned long long itemIndex;
@property (nonatomic, getter=isInteractive) _Bool interactive;
@property (retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView;
@property (nonatomic) _Bool shouldUseSpringAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)_destinationScale;
- (float)_desiredSpeedForNonInteractiveAnimationWithDuration:(double)arg1 deferredTransform:(struct CGAffineTransform)arg2 finalTransform:(struct CGAffineTransform)arg3;
- (double)_maximumDistanceTravelledForPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2 currentTransform:(struct CGAffineTransform)arg3 finalTransform:(struct CGAffineTransform)arg4;
- (id)initWithItemIndex:(unsigned long long)arg1 forInteractiveTransition:(_Bool)arg2;
- (void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;
- (void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)arg1;

@end
