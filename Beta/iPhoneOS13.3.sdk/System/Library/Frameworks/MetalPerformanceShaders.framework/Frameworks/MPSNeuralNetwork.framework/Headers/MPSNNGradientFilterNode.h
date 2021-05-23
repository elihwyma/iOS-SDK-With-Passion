/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNGradientFilterNode : MPSNNFilterNode

- (id)initWithGradientImages:(id)arg1 sourceImages:(id)arg2 gradientState:(id)arg3 paddingPolicy:(id)arg4;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)resultState;
- (id)initWithGradientImages:(id)arg1 sourceImages:(id)arg2 binaryGradientState:(id)arg3 paddingPolicy:(id)arg4;
- (id)resultStates;

@end
