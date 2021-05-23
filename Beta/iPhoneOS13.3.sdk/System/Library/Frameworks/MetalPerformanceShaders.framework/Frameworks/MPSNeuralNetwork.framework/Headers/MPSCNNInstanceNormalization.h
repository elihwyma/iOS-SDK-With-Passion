/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSCNNInstanceNormalizationDataSource;

@interface MPSCNNInstanceNormalization : MPSCNNKernel

{
    struct MPSAutoBuffer *_gamma;
    struct MPSAutoBuffer *_beta;
    id <MPSCNNInstanceNormalizationDataSource> _dataSource;
    unsigned long long _numberOfFeatureChannels;
    float _epsilon;
}

@property (nonatomic) float epsilon;
@property (retain, nonatomic, readonly) id <MPSCNNInstanceNormalizationDataSource> dataSource;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (void)reloadGammaAndBetaFromDataSource;
- (id)initWithDevice:(id)arg1 dataSource:(id)arg2;
- (void)reloadDataSource:(id)arg1;
- (void)reloadGammaAndBetaWithCommandBuffer:(id)arg1 gammaAndBetaState:(id)arg2;
- (void)reloadDataSourceDeprecated:(id)arg1;

@end
