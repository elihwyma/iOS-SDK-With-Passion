/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)initWithDevice:(id)arg1;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (_Bool)isResultStateReusedAcrossBatch;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 batchNormalizationState:(id)arg3;
- (_Bool)appendBatchBarrier;

@end
