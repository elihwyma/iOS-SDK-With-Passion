/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface FIUICrossFadeZoomTransitionAnimator : NSObject

{
    CDUnknownBlockType _animationCompletionBlock;
    _Bool _transitionCompleted;
    _Bool _zoomingUp;
    id _context;
    UIView *_smallView;
    UIView *_largeView;
}

@property (retain, nonatomic) id context;
@property (retain, nonatomic) UIView *smallView;
@property (retain, nonatomic) UIView *largeView;
@property (nonatomic) _Bool zoomingUp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)completeTransitionImmediately;

@end
