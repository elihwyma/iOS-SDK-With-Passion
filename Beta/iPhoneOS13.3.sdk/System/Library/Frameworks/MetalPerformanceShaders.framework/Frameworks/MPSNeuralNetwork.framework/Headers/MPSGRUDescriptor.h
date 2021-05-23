/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;

@interface MPSGRUDescriptor : MPSRNNDescriptor

{
    _Bool _flipOutputGates;
    float _gatePnormValue;
    id <MPSCNNConvolutionDataSource> _inputGateInputWeights;
    id <MPSCNNConvolutionDataSource> _inputGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _recurrentGateInputWeights;
    id <MPSCNNConvolutionDataSource> _recurrentGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _outputGateInputWeights;
    id <MPSCNNConvolutionDataSource> _outputGateInputGateWeights;
    id <MPSCNNConvolutionDataSource> _outputGateRecurrentWeights;
}

@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> inputGateInputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> inputGateRecurrentWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> recurrentGateInputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> recurrentGateRecurrentWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateInputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateRecurrentWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateInputGateWeights;
@property (nonatomic) float gatePnormValue;
@property (nonatomic) _Bool flipOutputGates;

+ (id)createGRUDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;

@end
