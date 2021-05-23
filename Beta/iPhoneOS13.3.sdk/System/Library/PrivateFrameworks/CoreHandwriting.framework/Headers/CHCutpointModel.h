/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class NSString;

@interface CHCutpointModel : CHRecurrentNeuralNetwork

{
    long long _distanceLeftFeatureIndex;
    long long _distanceRightFeatureIndex;
    long long _sinAngleLeftFeatureIndex;
    long long _cosAngleLeftFeatureIndex;
    long long _sinAngleRightFeatureIndex;
    long long _cosAngleRightFeatureIndex;
    long long _endpointFeatureIndex;
    NSString *_directionalFeaturesInputName;
    NSString *_cutpointProbabilityOutputName;
}

@property (nonatomic, readonly) long long distanceLeftFeatureIndex;
@property (nonatomic, readonly) long long distanceRightFeatureIndex;
@property (nonatomic, readonly) long long sinAngleLeftFeatureIndex;
@property (nonatomic, readonly) long long cosAngleLeftFeatureIndex;
@property (nonatomic, readonly) long long sinAngleRightFeatureIndex;
@property (nonatomic, readonly) long long cosAngleRightFeatureIndex;
@property (nonatomic, readonly) long long endpointFeatureIndex;
@property (retain, nonatomic, readonly) NSString *directionalFeaturesInputName;
@property (retain, nonatomic, readonly) NSString *cutpointProbabilityOutputName;

- (void)dealloc;
- (long long)maxSequenceLength;
- (id)initWithModelName:(id)arg1;
- (id)detectCutpointsInDrawing:(id)arg1 minimumDrawingSize:(struct CGSize)arg2 excludingStrokeIDs:(const set_54c7c768 *)arg3;
- (long long)windowOverlap;
- (vector_f9ed6fc8)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id *)arg4;
- (vector_cdf22482)_detectedCutpoints:(vector_8f06c10f *)arg1 resampledDrawing:(id)arg2;
- (id)_remappedCutpoints:(vector_cdf22482 *)arg1 pointMap:(vector_1dba4e4e *)arg2 originalDrawing:(id)arg3 excludingStrokeIDs:(const set_54c7c768 *)arg4;

@end
