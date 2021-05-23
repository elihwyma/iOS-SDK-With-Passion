/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNBlock.h>

__attribute__((visibility("hidden")))
@interface VCPCNNFullConnectionBlock : VCPCNNBlock

{
    float *_weight;
    float *_bias;
    int _numNeurons;
    int _neuronType;
}

+ (id)fcBlockWithNumNeurons:(int)arg1 NeuronType:(int)arg2;

- (void)dealloc;
- (_Bool)useGPU;
- (_Bool)supportGPU;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (id)initWithParameters:(int)arg1 NeuronType:(int)arg2;
- (int)readWeightsBias:(struct __sFILE *)arg1 weights:(float *)arg2 bias:(float *)arg3 inputDim:(int)arg4 outputDim:(int)arg5 quantFactor:(int)arg6;
- (int)loadWeights:(struct __sFILE *)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4;

@end
