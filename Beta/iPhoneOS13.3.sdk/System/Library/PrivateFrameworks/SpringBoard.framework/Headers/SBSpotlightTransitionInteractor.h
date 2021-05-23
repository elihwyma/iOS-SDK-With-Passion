/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SBViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning;

@interface SBSpotlightTransitionInteractor : NSObject

{
    id <SBViewControllerContextTransitioning> _transitionContext;
    id <UIViewControllerAnimatedTransitioning> _animator;
    double _completionSpeed;
    long long _completionCurve;
}

@property (nonatomic) double completionSpeed;
@property (nonatomic) long long completionCurve;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (id)init;
- (void)startInteractiveTransition:(id)arg1;
- (void)finishInteractiveTransition;
- (id)initWithAnimator:(id)arg1;
- (void)cancelTransition;
- (void)updateTransition:(double)arg1;

@end
