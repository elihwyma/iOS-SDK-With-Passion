/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@class MPSCNNInstanceNormalization;

@protocol MTLBuffer;

@interface MPSCNNInstanceNormalizationGradientState

{
    MPSCNNInstanceNormalization *_instanceNormalization;
    unsigned long long _numberOfFeatureChannels;
}

@property (retain, nonatomic, readonly) MPSCNNInstanceNormalization *instanceNormalization;
@property (nonatomic, readonly) id <MTLBuffer> gamma;
@property (nonatomic, readonly) id <MTLBuffer> beta;
@property (nonatomic, readonly) id <MTLBuffer> gradientForGamma;
@property (nonatomic, readonly) id <MTLBuffer> gradientForBeta;

+ (id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 instanceNormalization:(id)arg3;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 instanceNormalization:(id)arg3;

@end
