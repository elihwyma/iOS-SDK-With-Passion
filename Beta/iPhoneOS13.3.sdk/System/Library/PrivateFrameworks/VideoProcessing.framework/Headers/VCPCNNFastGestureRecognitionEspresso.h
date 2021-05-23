/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNFastGestureRecognition.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNFastGestureRecognitionEspresso : VCPCNNFastGestureRecognition

{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

- (id)init;
- (void)dealloc;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)getDetectionScore:(float *)arg1;
- (int)planDestroy;

@end
