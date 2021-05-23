/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLTransitionController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLInteractiveTransitionController : QLTransitionController

{
    double _initialTransitioningViewWidth;
    double _completeProgress;
}

@property (nonatomic) double completeProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double completionSpeed;
@property (nonatomic, readonly) long long completionCurve;
@property (nonatomic, readonly) _Bool wantsInteractiveStart;

- (double)transitionDuration:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)completeTransition:(_Bool)arg1 withDuration:(double)arg2;
- (void)_performForcedDismissal;
- (void)updateTransitionWithProgress:(double)arg1 isFinal:(_Bool)arg2;

@end
