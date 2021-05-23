/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNPoolingNode.h>

@interface MPSCNNPoolingL2NormNode : MPSCNNPoolingNode

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;

@end
