/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNConvolutionGradient.h>

@interface MPSCNNFullyConnectedGradient : MPSCNNConvolutionGradient

- (void)dealloc;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 weights:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 fullyConnected:(_Bool)arg3;
- (id)initWithDevice:(id)arg1 weights:(id)arg2 convolutionTranspose:(_Bool)arg3;

@end
