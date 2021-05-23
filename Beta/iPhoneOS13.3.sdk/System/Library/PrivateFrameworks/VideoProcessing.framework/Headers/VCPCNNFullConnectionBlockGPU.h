/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNFullConnectionBlock.h>

@class MPSCNNFullyConnected;

__attribute__((visibility("hidden")))
@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock

{
    MPSCNNFullyConnected *_mpsFullConn;
}

- (int)forward;
- (int)convVCPNeuronTypeToMPS:(int)arg1;
- (int)shuffleWeights:(float *)arg1 fromSrc:(float *)arg2 inputChannels:(int)arg3 inputHeight:(int)arg4 inputWidth:(int)arg5 outputChannels:(int)arg6;
- (int)setupMPS;
- (int)loadWeights:(struct __sFILE *)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4;

@end
