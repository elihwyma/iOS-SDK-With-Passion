/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNGradientKernel : MPSCNNBinaryKernel

{
    long long _kernelOffsetX;
    long long _kernelOffsetY;
}

@property (nonatomic) long long kernelOffsetX;
@property (nonatomic) long long kernelOffsetY;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(struct NSArray *)arg2 sourceImages:(struct NSArray *)arg3 gradientStates:(struct NSArray *)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4 destinationGradient:(id)arg5;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(struct NSArray *)arg2 sourceImages:(struct NSArray *)arg3 gradientStates:(struct NSArray *)arg4 destinationGradients:(struct NSArray *)arg5;
- (id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceGradient:(id)arg2 sourceImage:(id)arg3 gradientState:(id)arg4;
- (void)readGradientState:(id)arg1;
- (void)readBinaryGradientState:(id)arg1 isSecondarySourceFilter:(_Bool)arg2;
- (_Bool)isStateModified;

@end
