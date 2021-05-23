/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLPinchRotationTracker : NSObject

{
    double _trackedScale;
    double _rotation;
    double _previousScale;
    double _targetZoom;
    struct CGRect _initialBounds;
    struct CGPoint _initialTrackingCenter;
    struct CGPoint _initialGestureLocation;
    struct CGPoint _location;
    struct CGPoint _anchorLocationOffset;
    struct CGAffineTransform _trackedTransform;
    _Bool _shouldFinishDismissal;
    double _dismissalProgress;
    double _minimumZoomForDismissal;
    struct CGPoint _anchorPoint;
    struct CGPoint _trackedCenter;
}

@property (nonatomic, readonly) struct CGPoint anchorPoint;
@property (nonatomic, readonly) struct CGPoint trackedCenter;
@property (nonatomic, readonly) struct CGRect trackedBounds;
@property (nonatomic, readonly) struct CGAffineTransform trackedTransform;
@property (nonatomic, readonly) struct _QLDismissGestureTrackingVelocity trackedVelocity;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (nonatomic, readonly) double dismissalProgress;
@property (nonatomic, readonly) _Bool shouldFinishDismissal;
@property (nonatomic) double targetZoom;
@property (nonatomic) double minimumZoomForDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)update;
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;
- (void)trackGestureLocation:(struct CGPoint)arg1;
- (void)trackRotation:(double)arg1;
- (void)trackScale:(double)arg1;

@end
