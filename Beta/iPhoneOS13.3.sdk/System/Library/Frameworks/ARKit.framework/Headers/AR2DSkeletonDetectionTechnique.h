/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARMLImageProcessingTechnique.h>

@class AR2DSkeletonDetectionPostProcessGPU;

@interface AR2DSkeletonDetectionTechnique : ARMLImageProcessingTechnique

{
    AR2DSkeletonDetectionPostProcessGPU *_postProcessorGPU;
    struct SkeletonJointFilter<float> _extrapolationFilter2D;
    struct SkeletonJointFilter<float> _extrapolationFilter2DForLiftingData;
}

- (id)init;
- (id).cxx_construct;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize)arg3;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)changeEspressoConfig:(id)arg1;
- (double)requiredTimeInterval;
- (CDStruct_b527887c)networkInputParams;
- (int)defaultEngine;
- (id)createResultDataFromTensors:(CDStruct_cf098810 *)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize)arg6;

@end
