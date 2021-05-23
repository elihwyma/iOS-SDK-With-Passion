/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@interface MPSCNNFullyConnectedNode : MPSCNNConvolutionNode

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2;

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 weights:(id)arg2;

@end
