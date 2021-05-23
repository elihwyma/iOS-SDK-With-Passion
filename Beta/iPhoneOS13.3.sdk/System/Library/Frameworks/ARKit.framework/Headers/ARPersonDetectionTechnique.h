/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARMLImageProcessingTechnique.h>

@class ARPersonDetectionData, NSString;

@interface ARPersonDetectionTechnique : ARMLImageProcessingTechnique

{
    double _lastTimestamp;
    struct CGSize _imageNetworkSize;
    struct __CVPixelBufferPool *_depthPixelBufferPool;
    ARPersonDetectionData *_latestResult;
}

@property (retain) ARPersonDetectionData *latestResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isBusy;

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
- (void)changeEspressoConfig:(id)arg1;
- (double)requiredTimeInterval;
- (id)createResultDataFromTensors:(CDStruct_cf098810 *)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize)arg6;
- (float)sigmoid:(float)arg1;
- (id)resultDataClasses;
- (_Bool)isLoadedModelVersionCorrect:(id)arg1;

@end
