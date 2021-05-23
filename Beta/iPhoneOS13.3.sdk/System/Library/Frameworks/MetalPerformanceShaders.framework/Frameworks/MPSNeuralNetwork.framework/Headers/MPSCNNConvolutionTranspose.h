/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNConvolution;

@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionTranspose : MPSCNNKernel

{
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _featureChannelsLayout;
    long long _kernelOffsetX;
    long long _kernelOffsetY;
    unsigned long long _groups;
    MPSCNNConvolution *_convolution;
    struct NeuronInfo _neuronInfo;
}

@property (nonatomic, readonly) unsigned long long featureChannelsLayout;
@property (nonatomic, readonly) unsigned long long weightsBufferLength;
@property (nonatomic, readonly) unsigned long long inputFeatureChannels;
@property (nonatomic, readonly) unsigned long long outputFeatureChannels;
@property (nonatomic) long long kernelOffsetX;
@property (nonatomic) long long kernelOffsetY;
@property (nonatomic, readonly) unsigned long long groups;
@property (nonatomic) unsigned long long accumulatorPrecisionOption;
@property (retain, nonatomic, readonly) id <MPSCNNConvolutionDataSource> dataSource;

+ (_Bool)supportsSecureCoding;
+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray **)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (struct NSArray *)resultStateBatchForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (void)reloadWeightsAndBiasesFromDataSource;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id *)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (id)initialize:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5 fullyConnected:(_Bool)arg6;
- (id)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)exportWeightsAndBiasesWithCommandBuffer:(id)arg1 resultStateCanBeTemporary:(_Bool)arg2;
- (id)initWithDevice:(id)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(const float *)arg3 biasTerms:(const float *)arg4 flags:(unsigned long long)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionState:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 convolutionGradientStates:(struct NSArray *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 convolutionGradientStates:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 destinationState:(id *)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 convolutionGradientStates:(struct NSArray *)arg3 destinationStates:(struct NSArray **)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (void)reloadWeightsAndBiasesWithDataSource:(id)arg1;
- (_Bool)appendBatchBarrier;

@end
