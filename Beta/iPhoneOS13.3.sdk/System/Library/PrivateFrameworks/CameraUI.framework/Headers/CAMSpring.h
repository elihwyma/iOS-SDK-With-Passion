/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMSpring : NSObject

{
    _Bool _converged;
    double _tension;
    double _friction;
    double _target;
    double _velocity;
    double _epsilon;
    double _maximumTimeDelta;
    double __lastTimestamp;
    double __current;
    double __lowerBound;
    double __upperBound;
}

@property (nonatomic, setter=_setLastTimestamp:) double _lastTimestamp;
@property (nonatomic, getter=isConverged, setter=_setConverged:) _Bool converged;
@property (nonatomic, setter=_setCurrent:) double _current;
@property (nonatomic, readonly) double _lowerBound;
@property (nonatomic, readonly) double _upperBound;
@property (nonatomic) double tension;
@property (nonatomic) double friction;
@property (nonatomic) double target;
@property (nonatomic) double velocity;
@property (nonatomic, readonly) double value;
@property (nonatomic, readonly) double unboundedValue;
@property (nonatomic, readonly) double epsilon;
@property (nonatomic) double maximumTimeDelta;

- (void)resetToValue:(double)arg1;
- (id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3 boundedBetween:(double)arg4 and:(double)arg5;
- (void)_updateConverged;
- (double)_currentForce;
- (void)_updateWithForce:(double)arg1 timestamp:(double)arg2;
- (id)initWithTension:(double)arg1 friction:(double)arg2 epsilon:(double)arg3;
- (void)updateForTimestamp:(double)arg1;
- (void)converge;

@end
