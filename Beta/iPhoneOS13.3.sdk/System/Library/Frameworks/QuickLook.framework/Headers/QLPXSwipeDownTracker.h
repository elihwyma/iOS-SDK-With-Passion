/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

@class QLPXChangeDirectionNumberFilter, QLPXInitialHysteresisNumberFilter;

__attribute__((visibility("hidden")))
@interface QLPXSwipeDownTracker : NSObject

{
    _Bool _didStartTracking;
    struct CGPoint _initialTouchLocation;
    struct CGPoint _initialCenter;
    struct CGRect _initialBounds;
    struct CGAffineTransform _initialTransform;
    _Bool _shouldFinishDismissal;
    unsigned long long _options;
    double _dismissalProgress;
    double _finalAnimationDuration;
    double _finalAnimationSpringDamping;
    QLPXChangeDirectionNumberFilter *_verticalDirectionFilter;
    QLPXInitialHysteresisNumberFilter *_horizontalTranslationFilter;
    struct CGPoint _trackedCenter;
    struct CGRect _trackedBounds;
    struct QLPXDisplayVelocity _trackedVelocity;
    struct CGAffineTransform _trackedTransform;
}

@property (nonatomic) struct CGPoint trackedCenter;
@property (nonatomic) struct CGRect trackedBounds;
@property (nonatomic) struct CGAffineTransform trackedTransform;
@property (nonatomic) struct QLPXDisplayVelocity trackedVelocity;
@property (nonatomic) double dismissalProgress;
@property (nonatomic) _Bool shouldFinishDismissal;
@property (retain, nonatomic) QLPXChangeDirectionNumberFilter *verticalDirectionFilter;
@property (retain, nonatomic) QLPXInitialHysteresisNumberFilter *horizontalTranslationFilter;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;

- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)startTrackingCenter:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 transform:(struct CGAffineTransform)arg3 withInitialGestureLocation:(struct CGPoint)arg4;
- (void)trackGestureTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;

@end
