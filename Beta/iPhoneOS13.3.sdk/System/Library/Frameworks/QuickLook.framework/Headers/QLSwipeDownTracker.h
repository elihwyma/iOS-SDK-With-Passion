/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLPHSwipeDownTracker.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLSwipeDownTracker : QLPHSwipeDownTracker

{
    struct CGRect _initialBounds;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGPoint anchorPoint;
@property (nonatomic, readonly) struct CGPoint trackedCenter;
@property (nonatomic, readonly) struct CGRect trackedBounds;
@property (nonatomic, readonly) struct CGAffineTransform trackedTransform;
@property (nonatomic, readonly) struct _QLDismissGestureTrackingVelocity trackedVelocity;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) _Bool shouldFinishDismissal;

- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;

@end
