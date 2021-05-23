/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNConvolutionGradientNode.h>

@interface MPSCNNConvolutionTransposeGradientNode : MPSCNNConvolutionGradientNode

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionTransposeGradientState:(id)arg3 weights:(id)arg4;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionTransposeGradientState:(id)arg3 weights:(id)arg4;

@end
