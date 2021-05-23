/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class MPSNNNeuronDescriptor;

@protocol MTLBuffer;

@interface MPSCNNBatchNormalizationStatisticsGradient : MPSCNNGradientKernel

{
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    id <MTLBuffer> _preluBuffer;
}

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(struct NSArray *)arg2 sourceImages:(struct NSArray *)arg3 gradientStates:(struct NSArray *)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (_Bool)isResultStateReusedAcrossBatch;
- (void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(struct NSArray *)arg2 sourceImages:(struct NSArray *)arg3 gradientStates:(struct NSArray *)arg4 destinationGradients:(struct NSArray *)arg5;
- (id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4;
- (id)initWithDevice:(id)arg1 fusedNeuronDescriptor:(id)arg2;
- (_Bool)accumulatesOverBatch;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(struct NSArray *)arg2 sourceImages:(struct NSArray *)arg3 batchNormalizationState:(id)arg4;

@end
