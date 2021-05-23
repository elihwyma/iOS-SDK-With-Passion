/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class MLModel, MLPredictionOptions, NSArray, NSString;

@interface HMISignificantActivityDetector : HMFObject

{
    double _confidenceThresholds[91];
    struct CGSize _anchorSizes[6][6];
    unsigned long long _numberOfAnchors[6];
    _Bool _useSoftmax;
    MLModel *_mlModel;
    NSString *_inputFeatureValueName;
    NSArray *_offsetsFeatureValueNames;
    NSArray *_scoresFeatureValueNames;
    double _nmsThreshold;
    MLPredictionOptions *_predictionOptions;
    struct CGSize _inputDimensions;
}

@property (readonly) MLModel *mlModel;
@property (readonly) NSString *inputFeatureValueName;
@property (readonly) NSArray *offsetsFeatureValueNames;
@property (readonly) NSArray *scoresFeatureValueNames;
@property (readonly) double nmsThreshold;
@property (readonly) _Bool useSoftmax;
@property (readonly) MLPredictionOptions *predictionOptions;
@property (readonly) struct CGSize inputDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (_Bool)_runNeuralNetworkOnPixelBuffer:(struct __CVBuffer *)arg1 offsets:(id)arg2 scores:(id)arg3 error:(id *)arg4;
- (void)_postProcessOffsets:(id)arg1 scores:(id)arg2 outputPredictions:(id)arg3;
- (id)initWithConfidenceThresholds:(id)arg1 nmsThreshold:(double)arg2 error:(id *)arg3;
- (_Bool)predict:(struct __CVBuffer *)arg1 detectedObjects:(id)arg2 error:(id *)arg3;

@end
