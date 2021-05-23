/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSRNNDescriptor.h>

@protocol MPSCNNConvolutionDataSource;

@interface MPSLSTMDescriptor : MPSRNNDescriptor

{
    _Bool _memoryWeightsAreDiagonal;
    _Bool _coupleForgetGateToInputGate;
    int _cellToOutputNeuronType;
    float _cellToOutputNeuronParamA;
    float _cellToOutputNeuronParamB;
    float _cellToOutputNeuronParamC;
    float _cellClipThreshold;
    id <MPSCNNConvolutionDataSource> _inputGateInputWeights;
    id <MPSCNNConvolutionDataSource> _inputGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _inputGateMemoryWeights;
    id <MPSCNNConvolutionDataSource> _forgetGateInputWeights;
    id <MPSCNNConvolutionDataSource> _forgetGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _forgetGateMemoryWeights;
    id <MPSCNNConvolutionDataSource> _outputGateInputWeights;
    id <MPSCNNConvolutionDataSource> _outputGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _outputGateMemoryWeights;
    id <MPSCNNConvolutionDataSource> _cellGateInputWeights;
    id <MPSCNNConvolutionDataSource> _cellGateRecurrentWeights;
    id <MPSCNNConvolutionDataSource> _cellGateMemoryWeights;
}

@property (nonatomic) float cellClipThreshold;
@property (nonatomic) _Bool coupleForgetGateToInputGate;
@property (nonatomic) _Bool memoryWeightsAreDiagonal;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> inputGateInputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> inputGateRecurrentWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> inputGateMemoryWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> forgetGateInputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> forgetGateRecurrentWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> forgetGateMemoryWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateInputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateRecurrentWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> outputGateMemoryWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> cellGateInputWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> cellGateRecurrentWeights;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> cellGateMemoryWeights;
@property (nonatomic) int cellToOutputNeuronType;
@property (nonatomic) float cellToOutputNeuronParamA;
@property (nonatomic) float cellToOutputNeuronParamB;
@property (nonatomic) float cellToOutputNeuronParamC;

+ (id)createLSTMDescriptorWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)initWithInputFeatureChannels:(unsigned long long)arg1 outputFeatureChannels:(unsigned long long)arg2;

@end
