/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNConvolutionGradientNode.h>

@interface MPSCNNFullyConnectedGradientNode : MPSCNNConvolutionGradientNode

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4;

@end
