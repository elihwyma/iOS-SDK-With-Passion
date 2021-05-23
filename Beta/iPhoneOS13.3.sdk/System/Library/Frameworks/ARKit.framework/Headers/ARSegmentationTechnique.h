/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARMLImageProcessingTechnique.h>

@class ARImageRotationTechnique;

@interface ARSegmentationTechnique : ARMLImageProcessingTechnique

{
    struct __CVPixelBufferPool *_outputSegmentationPixelBufferPool;
    struct __CVPixelBufferPool *_scaledSegmentationOutputPixelBufferPool;
    ARImageRotationTechnique *_segmentationRotationTechnique;
    struct __CVBuffer *_previousSegmentationData;
    int frameCount;
}

- (id)init;
- (void)dealloc;
- (void)_startLoadingMLModelSignpost;
- (void)_endLoadingMLModelSignpost;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize)arg3;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (_Bool)isLoadedModelVersionCorrect:(id)arg1;
- (_Bool)preProcessNetworkInputImage:(struct __CVBuffer *)arg1;
- (id)createResultDataFromTensors:(CDStruct_cf098810 *)arg1 numberOfOutputTensors:(unsigned long long)arg2 inputImageData:(id)arg3 rotationNeeded:(long long)arg4 regionOfInterest:(struct CGSize)arg5;
- (id)createSegmentationResultDataFromTensors:(CDStruct_cf098810)arg1 inputImageData:(id)arg2 rotationNeeded:(long long)arg3 regionOfInterest:(struct CGSize)arg4;
- (id)runNeuralNetworkWithImageData:(id)arg1 originalImageData:(id)arg2 regionOfInterest:(struct CGSize)arg3 rotationOfResultTensor:(long long)arg4;

@end
