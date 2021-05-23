/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNHandKeypointsDetector.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNHandKeypointsDetectorEspresso : VCPCNNHandKeypointsDetector

{
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
}

- (id)init;
- (void)dealloc;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)generateHandKeypoints:(struct CGPoint *)arg1;

@end
