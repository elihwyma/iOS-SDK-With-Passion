/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSNNNeuronDescriptor;

@protocol MPSCNNBatchNormalizationDataSource, MTLBuffer;

@interface MPSCNNBatchNormalization : MPSCNNKernel

{
    struct MPSAutoBuffer *_gamma;
    struct MPSAutoBuffer *_beta;
    struct MPSAutoBuffer *_meanDS;
    struct MPSAutoBuffer *_varDS;
    id <MPSCNNBatchNormalizationDataSource> _dataSource;
    _Bool _stateNeedsToLoad;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    id <MTLBuffer> _preluBuffer;
    float _epsilon;
    unsigned long long _numberOfFeatureChannels;
}

@property (nonatomic, readonly) unsigned long long numberOfFeatureChannels;
@property (nonatomic) float epsilon;
@property (retain, nonatomic, readonly) id <MPSCNNBatchNormalizationDataSource> dataSource;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray **)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2 fusedNeuronDescriptor:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id *)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (void)reloadDataSourceDeprecated:(id)arg1 doReloadWeights:(_Bool)arg2 doReloadStats:(_Bool)arg3;
- (void)reloadGammaAndBetaFromDataSource;
- (void)reloadMeanAndVarianceFromDataSource;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3 destinationImages:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3;
- (void)reloadDataSource:(id)arg1;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (void)reloadMeanAndVarianceWithCommandBuffer:(id)arg1 meanAndVarianceState:(id)arg2;

@end
