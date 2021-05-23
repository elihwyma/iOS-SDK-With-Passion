/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <PrototypeTools/PTSettings.h>

@class NSString;

@interface SBFFluidBehaviorSettings : PTSettings

{
    _Bool _smoothingAndProjectionEnabled;
    long long _behaviorType;
    NSString *_name;
    double _deceleration;
    double _dampingRatio;
    double _response;
    double _retargetImpulse;
    double _trackingDampingRatio;
    double _trackingResponse;
    double _trackingRetargetImpulse;
    double _dampingRatioSmoothing;
    double _responseSmoothing;
    double _trackingDampingRatioSmoothing;
    double _trackingResponseSmoothing;
    double _inertialTargetSmoothingRatio;
    double _inertialProjectionDeceleration;
}

@property (nonatomic) long long behaviorType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double deceleration;
@property (nonatomic) double dampingRatio;
@property (nonatomic) double response;
@property (nonatomic) double retargetImpulse;
@property (nonatomic) double trackingDampingRatio;
@property (nonatomic) double trackingResponse;
@property (nonatomic) double trackingRetargetImpulse;
@property (nonatomic) _Bool smoothingAndProjectionEnabled;
@property (nonatomic) double dampingRatioSmoothing;
@property (nonatomic) double responseSmoothing;
@property (nonatomic) double trackingDampingRatioSmoothing;
@property (nonatomic) double trackingResponseSmoothing;
@property (nonatomic) double inertialTargetSmoothingRatio;
@property (nonatomic) double inertialProjectionDeceleration;

+ (id)settingsControllerModule;
+ (id)_moduleWithSectionTitle:(id)arg1;

- (double)settlingDuration;
- (void)setDefaultValues;
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (double)_effectiveTrackingDampingRatio;
- (double)_effectiveTrackingResponse;
- (double)_effectiveTrackingRetargetImpulse;
- (void)setDefaultCriticallyDampedValues;

@end
