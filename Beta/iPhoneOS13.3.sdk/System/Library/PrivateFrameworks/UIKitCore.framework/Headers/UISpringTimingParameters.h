/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UICubicTimingParameters;

@interface UISpringTimingParameters : NSObject <Swift>

{
    _Bool _implicitDuration;
    double _dampingRatio;
    double _mass;
    double _stiffness;
    double _damping;
    struct CGVector _initialVelocity;
}

@property (nonatomic, readonly) double dampingRatio;
@property (nonatomic) _Bool implicitDuration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic, readonly) double settlingDuration;
@property (nonatomic, readonly) struct CGVector initialVelocity;
@property (nonatomic, readonly) long long timingCurveType;
@property (nonatomic, readonly) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic, readonly) UISpringTimingParameters *springTimingParameters;

+ (_Bool)supportsSecureCoding;
+ (void)_convertMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 toDampingRatio:(double *)arg4 response:(double *)arg5;
+ (void)_convertDampingRatio:(double)arg1 response:(double)arg2 toMass:(double *)arg3 stiffness:(double *)arg4 damping:(double *)arg5;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_mediaTimingFunction;
- (id)effectiveTimingFunction;
- (id)initWithDampingRatio:(double)arg1 initialVelocity:(struct CGVector)arg2;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 initialVelocity:(struct CGVector)arg4;
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2 initialVelocity:(struct CGVector)arg3;
- (id)initWithDampingRatio:(double)arg1;
- (id)initWithDampingRatio:(double)arg1 response:(double)arg2;

@end
