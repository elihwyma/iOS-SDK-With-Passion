/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNFaceLandmarkDetector.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNFaceLandmarkDetectorEspresso : VCPCNNFaceLandmarkDetector

{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)arg1;

- (id)init;
- (void)dealloc;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)arg1;

@end
