/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNConvBlock.h>

@class MPSCNNConvolution;

__attribute__((visibility("hidden")))
@interface VCPCNNConvBlockGPU : VCPCNNConvBlock

{
    float *_batchNormMean;
    float *_batchNormVar;
    float *_batchNormGamma;
    float *_batchNormBeta;
    MPSCNNConvolution *_mpsConv;
}

- (void)dealloc;
- (int)forward;
- (void)releaseBatchNormMemory;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)readBatchNormParam:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)fillConvWeightsGPU;
- (int)gpuForward;

@end
