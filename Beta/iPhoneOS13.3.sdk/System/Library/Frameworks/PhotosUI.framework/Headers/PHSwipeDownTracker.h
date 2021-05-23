/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PXSwipeDownTracker;

@interface PHSwipeDownTracker : NSObject

{
    PXSwipeDownTracker *_impl;
}

@property (nonatomic, readonly) PXSwipeDownTracker *impl;
@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) _Bool shouldFinishDismissal;
@property (nonatomic, readonly) struct CGPoint trackedCenter;
@property (nonatomic, readonly) struct CGRect trackedBounds;
@property (nonatomic, readonly) struct CGAffineTransform trackedTransform;
@property (nonatomic, readonly) struct PHDisplayVelocity trackedVelocity;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;

- (id)init;
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;
- (void)trackGestureTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;

@end
