/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class QLPXSwipeDownTracker;

__attribute__((visibility("hidden")))
@interface QLPHSwipeDownTracker : NSObject

{
    QLPXSwipeDownTracker *_impl;
}

@property (nonatomic, readonly) QLPXSwipeDownTracker *impl;
@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) _Bool shouldFinishDismissal;
@property (nonatomic, readonly) struct CGPoint trackedCenter;
@property (nonatomic, readonly) struct CGRect trackedBounds;
@property (nonatomic, readonly) struct CGAffineTransform trackedTransform;
@property (nonatomic, readonly) struct QLPHDisplayVelocity trackedVelocity;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;

- (id)init;
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;
- (void)trackGestureTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;

@end
