/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIForceLevelClassifier.h>

@interface _UILinearForceLevelClassifier : _UIForceLevelClassifier

{
    double _smoothedForce;
    _Bool _anyForceObservations;
    double _smoothedImpulse;
    long long _impulseObservationState;
    double _lastForceForImpulse;
    double _lastTimestampForImpulse;
    double _revealThreshold;
    double _standardThreshold;
    double _strongThreshold;
    double _smoothingFactor;
    double _impulseSmoothingFactor;
}

@property (nonatomic) double revealThreshold;
@property (nonatomic) double standardThreshold;
@property (nonatomic) double strongThreshold;
@property (nonatomic) double smoothingFactor;
@property (nonatomic, readonly) double currentImpulse;
@property (nonatomic) double impulseSmoothingFactor;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)touchForceMultiplierDidChange;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (double)_thresholdForForceLevel:(long long)arg1;
- (double)_instantaneousImpulseForTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (void)_updateForceWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (void)_updateImpulseWithTouchForceValue:(double)arg1 atTimestamp:(double)arg2;
- (long long)_forceLevelForTouchForceValue:(double)arg1;
- (double)_calculateProgressOfTouchForceValue:(double)arg1 toForceLevel:(long long)arg2 minimumRequiredForceLevel:(long long)arg3;
- (void)debuggingPropertyForKey:(id)arg1 changedToValue:(id)arg2;

@end
