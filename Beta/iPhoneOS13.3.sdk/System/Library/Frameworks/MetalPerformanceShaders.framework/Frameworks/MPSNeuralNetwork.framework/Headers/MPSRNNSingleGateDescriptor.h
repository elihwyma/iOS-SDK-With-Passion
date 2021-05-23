/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;

@interface MPSRNNSingleGateDescriptor : MPSRNNDescriptor

{
    id <MPSCNNConvolutionDataSource> _inputWeights;
    id <MPSCNNConvolutionDataSource> _recurrentWeights;
}

@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> inputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> recurrentWeights;

+ (id)createRNNSingleGateDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;

@end
