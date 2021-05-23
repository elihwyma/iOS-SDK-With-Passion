/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNFullConnectionBlock.h>

__attribute__((visibility("hidden")))
@interface VCPCNNFullConnectionBlockScalar : VCPCNNFullConnectionBlock

- (int)forward;
- (int)loadWeights:(struct __sFILE *)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4;

@end
