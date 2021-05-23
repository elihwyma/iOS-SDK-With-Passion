/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNFaceLandmarkDetector.h>

@class VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector

{
    VCPCNNModel *_modelLandmarks;
    VCPCNNData *_faceInput;
}

- (id)init;
- (float *)getInputBuffer;
- (int)computeLandmarks:(float *)arg1;

@end
