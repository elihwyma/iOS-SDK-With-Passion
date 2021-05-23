/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARFLSpring : NSObject

{
    struct ARFLCompoundSpring _s;
    double _targetVelocity;
    double _previousTarget;
    _Bool _transitioningFromTracking;
    _Bool _tracking;
    double _minimumTarget;
    double _maximumTarget;
    double _rubberbandRange;
    double _rubberbandFactor;
    double _retargetResponseFraction;
    double _projectionDeceleration;
    struct ARFLSpringParameters _parameters;
    struct ARFLSpringParameters _trackingParameters;
}

@property (nonatomic) double retargetResponseFraction;
@property (nonatomic) double projectionDeceleration;
@property (nonatomic) double value;
@property (nonatomic) double target;
@property (nonatomic) double velocity;
@property (nonatomic, readonly) double projectedTarget;
@property (nonatomic) struct ARFLSpringParameters parameters;
@property (nonatomic) struct ARFLSpringParameters trackingParameters;
@property (nonatomic, getter=isTracking) _Bool tracking;
@property (nonatomic) double minimumTarget;
@property (nonatomic) double maximumTarget;
@property (nonatomic) double rubberbandRange;
@property (nonatomic) double rubberbandFactor;

+ (id)springWithValue:(double)arg1;

- (id)init;
- (id)initWithValue:(double)arg1;
- (void)step:(double)arg1;
- (void)resetImmediatelyToValue:(double)arg1;
- (double)_projectedTargetForVelocity:(double)arg1;
- (struct ARFLSpringParameters)_effectiveParameters;
- (void)_updateForEffectiveParameters;
- (_Bool)usesDampingRatioResponseForSmoothing;
- (void)setUsesDampingRatioResponseForSmoothing:(_Bool)arg1;

@end
