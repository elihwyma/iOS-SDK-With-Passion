/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNConcatenation : MPSCNNKernel

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (struct NSArray *)resultStateBatchForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3;
- (void)copyToGradientState:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)resultStateForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (struct NSArray *)resultStateBatchForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;

@end
