/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate, _UIVelocityIntegrator;

@protocol _UIPlatterMenuPanningTransformerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuPanningTransformer : NSObject

{
    int _axisLock;
    int _overrideLockAxis;
    id <_UIPlatterMenuPanningTransformerDelegate> _delegate;
    double _minimumXVelocityForAxisLock;
    double _lastAxisLockTime;
    NSDate *_timeForLastDirectionalChange;
    NSDate *_panBeginTime;
    _UIVelocityIntegrator *_velocityIntegrator;
    struct CGPoint _transitionZonePosition;
    struct CGSize _transitionZoneSize;
    struct CGPoint _lastTouchPosition;
    struct CGVector _lastOffset;
    struct CGPoint _lastTransformedPoint;
    struct CGPoint _panBeginTouchPosition;
    struct CGPoint _lastDirectionChangeTouchPosition;
    struct CGRect _transitionZoneRect;
}

@property (nonatomic) struct CGPoint transitionZonePosition;
@property (nonatomic) struct CGSize transitionZoneSize;
@property (nonatomic) struct CGPoint lastTouchPosition;
@property (nonatomic) struct CGRect transitionZoneRect;
@property (nonatomic) int axisLock;
@property (nonatomic) int overrideLockAxis;
@property (nonatomic) double lastAxisLockTime;
@property (nonatomic) struct CGVector lastOffset;
@property (retain, nonatomic) NSDate *timeForLastDirectionalChange;
@property (nonatomic) struct CGPoint lastTransformedPoint;
@property (nonatomic) struct CGPoint panBeginTouchPosition;
@property (nonatomic) struct CGPoint lastDirectionChangeTouchPosition;
@property (retain, nonatomic) NSDate *panBeginTime;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator;
@property (weak, nonatomic) id <_UIPlatterMenuPanningTransformerDelegate> delegate;
@property (nonatomic, readonly) struct CGVector offset;
@property (nonatomic, readonly) struct CGVector velocity;
@property (nonatomic) double minimumXVelocityForAxisLock;

+ (id)transformerWithAxisTransitionZonePosition:(struct CGPoint)arg1 axisTransitionZoneSize:(struct CGSize)arg2;

- (void)didBeginPanningWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;
- (void)didPanWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;
- (void)didEndPanningWithTouchPosition:(struct CGPoint)arg1 currentTransformedPosition:(struct CGPoint)arg2;
- (void)lockIntoYAxis;
- (void)_enterYLockedState;
- (id)initWithAxisTransitionZonePosition:(struct CGPoint)arg1 axisTransitionZoneSize:(struct CGSize)arg2;
- (double)timeIntervalSinceLastDirectionChange;

@end
