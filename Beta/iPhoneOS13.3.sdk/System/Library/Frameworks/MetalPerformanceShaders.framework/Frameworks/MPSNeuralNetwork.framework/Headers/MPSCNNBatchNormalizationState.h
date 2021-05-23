/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@class MPSCNNBatchNormalization;

@interface MPSCNNBatchNormalizationState

{
    MPSCNNBatchNormalization *_batchNormalization;
    unsigned long long _accumulationCount;
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
}

@property (retain, nonatomic, readonly) MPSCNNBatchNormalization *batchNormalization;

+ (id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4;

- (void)dealloc;
- (void)reset;
- (id)gamma;
- (id)mean;
- (id)variance;
- (id)beta;
- (id)initDeferredWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 epsilon:(float)arg3 batchNormalization:(id)arg4;
- (id)gradientForGamma;
- (id)gradientForBeta;

@end
