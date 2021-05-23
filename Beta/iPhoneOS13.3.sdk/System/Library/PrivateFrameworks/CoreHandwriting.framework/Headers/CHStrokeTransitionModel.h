/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHRecurrentNeuralNetwork.h>

@class NSString;

@interface CHStrokeTransitionModel : CHRecurrentNeuralNetwork

{
    long long _distanceFeatureIndex;
    long long _sinAlphaFeatureIndex;
    long long _cosAlphaFeatureIndex;
    long long _gapFeatureIndex;
    NSString *_directionalFeaturesInputName;
    NSString *_spaceProbabilityOutputName;
    NSString *_charBoundaryProbabilityOutputName;
    NSString *_delayedStrokeProbabilityOutputName;
}

@property (nonatomic, readonly) long long distanceFeatureIndex;
@property (nonatomic, readonly) long long sinAlphaFeatureIndex;
@property (nonatomic, readonly) long long cosAlphaFeatureIndex;
@property (nonatomic, readonly) long long gapFeatureIndex;
@property (retain, nonatomic, readonly) NSString *directionalFeaturesInputName;
@property (retain, nonatomic, readonly) NSString *spaceProbabilityOutputName;
@property (retain, nonatomic, readonly) NSString *charBoundaryProbabilityOutputName;
@property (retain, nonatomic, readonly) NSString *delayedStrokeProbabilityOutputName;

- (void)dealloc;
- (long long)maxSequenceLength;
- (id)initWithModelName:(id)arg1;
- (_Bool)classifyStrokesInDrawing:(id)arg1 minimumDrawingSize:(struct CGSize)arg2 outDelayedStrokeProbabilities:(vector_8f06c10f *)arg3 outSpaceProbabilities:(vector_8f06c10f *)arg4 outCharBoundaryProbabilities:(vector_8f06c10f *)arg5;
- (set_54c7c768)detectedDelayedStrokes:(const vector_8f06c10f *)arg1;
- (long long)windowOverlap;
- (vector_f9ed6fc8)_extractFeaturesFromDrawing:(id)arg1 inputName:(id)arg2 interpointDistance:(double)arg3 error:(id *)arg4;

@end
