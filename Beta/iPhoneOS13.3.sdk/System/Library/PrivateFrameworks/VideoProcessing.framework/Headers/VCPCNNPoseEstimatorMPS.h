/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNPoseEstimator.h>

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimatorMPS : VCPCNNPoseEstimator

{
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (id)init;
- (float *)getInputBuffer;
- (int)computePoseScore:(float *)arg1;

@end
