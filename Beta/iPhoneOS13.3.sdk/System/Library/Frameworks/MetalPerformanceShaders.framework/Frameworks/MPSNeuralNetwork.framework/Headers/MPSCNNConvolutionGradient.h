/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@protocol MPSCNNConvolutionDataSource, MTLBuffer;

@interface MPSCNNConvolutionGradient : MPSCNNGradientKernel

{
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _groups;
    unsigned long long _channelMultiplier;
    unsigned long long _gradientOption;
    id <MTLBuffer> _weights;
    _Bool _fullyConnected;
    _Bool _convolutionTranspose;
    unsigned int _weightsDataType;
    unsigned int _weightsLayout;
    id <MPSCNNConvolutionDataSource> _dataSource;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
    _Bool _serializeWeightsAndBiases;
}

@property (nonatomic, readonly) unsigned long long sourceGradientFeatureChannels;
@property (nonatomic, readonly) unsigned long long sourceImageFeatureChannels;
@property (nonatomic, readonly) unsigned long long groups;
@property (nonatomic, readonly) unsigned long long channelMultiplier;
@property (retain, nonatomic, readonly) id <MPSCNNConvolutionDataSource> dataSource;
@property (nonatomic) unsigned long long gradientOption;
@property (nonatomic) _Bool serializeWeightsAndBiases;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)weights;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (unsigned int)weightsLayout;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (void)reloadWeightsAndBiasesWithCommandBuffer:(id)arg1 state:(id)arg2;
- (id)biases;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (_Bool)isResultStateReusedAcrossBatch;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (void)initialize:(id)arg1 convDesc:(id)arg2 weights:(void *)arg3 dataType:(unsigned int)arg4 weightsLayout:(unsigned int)arg5 fullyConnected:(_Bool)arg6 convolutionTranspose:(_Bool)arg7;
- (void)initialize:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3 convolutionTranspose:(_Bool)arg4;
- (_Bool)convolutionTranspose;
- (id)PeakAtWeightsWithConvolutionGradientState:(id)arg1;
- (_Bool)filterHandlesPlugin;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 convolutionTranspose:(_Bool)arg3;
- (void)reloadWeightsAndBiasesFromDataSource;
- (id)PeakAtWeightsWithConvolutionTransposeGradientState:(id)arg1;

@end
