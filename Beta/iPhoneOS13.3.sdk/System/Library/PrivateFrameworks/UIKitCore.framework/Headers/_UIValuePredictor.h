/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIValuePredictor : NSObject <Swift>

{
    unsigned long long _capacity;
    unsigned long long _arrayCapacity;
    double *_values;
    double *_valueWeights;
    double *_predictions;
    double *_confidenceFactorsForVelocity;
    double *_confidenceFactorsForHistoricalAccuracy;
    double *_confidenceFactorsForDerivativeStability;
    double *_confidenceFactors;
    double **_derivatives;
    double _minHistoricalAccuracyThreshold;
    double _maxHistoricalAccuracyThreshold;
    double _derivativeStabilityThreshold;
    double _minVelocityThreshold;
    double _maxVelocityThreshold;
    double _minConstraint;
    double _maxConstraint;
    _Bool _wrapConstraint;
    unsigned long long _numValues;
    unsigned long long _numPredictions;
    unsigned long long _numDerivatives;
}

@property (nonatomic) double minHistoricalAccuracyThreshold;
@property (nonatomic) double maxHistoricalAccuracyThreshold;
@property (nonatomic) double derivativeStabilityThreshold;
@property (nonatomic) double minVelocityThreshold;
@property (nonatomic) double maxVelocityThreshold;
@property (nonatomic) double minConstraint;
@property (nonatomic) double maxConstraint;
@property (nonatomic) _Bool wrapConstraint;
@property (nonatomic, readonly) unsigned long long numValues;
@property (nonatomic, readonly) unsigned long long numPredictions;
@property (nonatomic, readonly) unsigned long long numDerivatives;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_ensureCapacity:(unsigned long long)arg1;
- (void)_setupDefaults;
- (double *)predictions;
- (id)initWithNumPredictions:(unsigned long long)arg1 numDerivatives:(unsigned long long)arg2;
- (double *)_predictionsAtIndex:(unsigned long long)arg1;
- (double *)_confidenceFactorsAtIndex:(unsigned long long)arg1;
- (double *)_confidenceFactorsForVelocityAtIndex:(unsigned long long)arg1;
- (id)descriptionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 includeHeader:(_Bool)arg3 includeDetailedConfidence:(_Bool)arg4;
- (void)addValue:(double)arg1 weight:(double)arg2;
- (double *)_valuesAtIndex:(unsigned long long)arg1;
- (double *)_valueWeightsAtIndex:(unsigned long long)arg1;
- (double *)_confidenceFactorsForHistoricalAccuracyAtIndex:(unsigned long long)arg1;
- (double *)_confidenceFactorsForDerivativeStabilityAtIndex:(unsigned long long)arg1;
- (double **)_derivatives;
- (id)initFromValuePredictor:(id)arg1;
- (void)_getPriorPredictions:(double *)arg1 forValueAtIndex:(int)arg2;
- (void)_updateConfidenceFactorsForVelocityAtIndex:(long long)arg1;
- (void)_updateConfidenceFactorsForHistoricalAccuracyAtIndex:(int)arg1;
- (void)_updateConfidenceFactorsForDerivativeStabilityAtIndex:(int)arg1;
- (void)_updateDerivatives:(double *)arg1 fromArray:(double *)arg2 weights:(double *)arg3 atIndex:(long long)arg4 wrap:(_Bool)arg5;
- (void)_propagateDerivatives:(double *)arg1 fromHigherDerivatives:(double *)arg2 atIndex:(long long)arg3;
- (double)_constrainPrediction:(double)arg1;
- (void)_updateConfidenceFactorsAtIndex:(int)arg1;
- (void)_slideDataWindow;
- (void)_updatePredictionsAtIndex:(long long)arg1;
- (double *)confidenceFactors;

@end
