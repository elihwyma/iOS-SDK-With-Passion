/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/Swift-Protocol.h>

@protocol QLDismissGestureTracking <Swift>

@property (nonatomic, readonly) struct CGPoint anchorPoint;
@property (nonatomic, readonly) struct CGPoint trackedCenter;
@property (nonatomic, readonly) struct CGRect trackedBounds;
@property (nonatomic, readonly) struct CGAffineTransform trackedTransform;
@property (nonatomic, readonly) struct _QLDismissGestureTrackingVelocity trackedVelocity;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) _Bool shouldFinishDismissal;

@end
