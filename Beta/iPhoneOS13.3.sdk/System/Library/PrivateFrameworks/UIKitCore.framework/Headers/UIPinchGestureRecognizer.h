/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer

{
    double _initialTouchDistance;
    double _initialTouchScale;
    double _lastTouchTime;
    double _velocity;
    double _previousVelocity;
    double _scaleThreshold;
    struct CGAffineTransform _transform;
    struct CGPoint _anchorSceneReferencePoint;
    UITouch *_touches[2];
    double _hysteresis;
    id _transformAnalyzer;
    unsigned int _loggedPinchStatistic:1;
    unsigned int _loggedZoomStatistic:1;
    unsigned int _endsOnSingleTouch:1;
    _Bool __enableNestedHysteresis;
}

@property (nonatomic) double scaleThreshold;
@property (nonatomic, readonly) struct CGPoint anchorPoint;
@property (nonatomic, getter=_hysteresis, setter=_setHysteresis:) double hysteresis;
@property (nonatomic) struct CGAffineTransform transform;
@property (nonatomic) _Bool _enableNestedHysteresis;
@property (nonatomic) double scale;
@property (nonatomic, readonly) double velocity;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_shouldDefaultToTouches;

- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)_logStatisticsForScale:(double)arg1;
- (_Bool)_endsOnSingleTouch;
- (void)_setEndsOnSingleTouch:(_Bool)arg1;

@end
