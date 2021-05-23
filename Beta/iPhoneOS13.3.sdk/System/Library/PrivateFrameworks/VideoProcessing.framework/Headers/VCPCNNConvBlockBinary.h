/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNBlock.h>

@class MPSCNNBinaryConvolution;

__attribute__((visibility("hidden")))
@interface VCPCNNConvBlockBinary : VCPCNNBlock

{
    int _filterSize;
    int _filterNum;
    unsigned int *_filterWeightsBinary;
    int _filterWeightSize;
    float *_filterScaling;
    float *_bias;
    int _padding;
    unsigned long long _convType;
    _Bool _reLU;
    MPSCNNBinaryConvolution *_mpsBinaryConv;
}

- (void)dealloc;
- (_Bool)useGPU;
- (int)forward;
- (_Bool)supportGPU;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)fillConvWeightsGPU;
- (int)gpuForward;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 convType:(unsigned long long)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5;

@end
