/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNPoseEstimator.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimatorEspresso : VCPCNNPoseEstimator

{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)arg1;

- (id)init;
- (void)dealloc;
- (float *)getInputBuffer;
- (int)computePoseScore:(float *)arg1;

@end
