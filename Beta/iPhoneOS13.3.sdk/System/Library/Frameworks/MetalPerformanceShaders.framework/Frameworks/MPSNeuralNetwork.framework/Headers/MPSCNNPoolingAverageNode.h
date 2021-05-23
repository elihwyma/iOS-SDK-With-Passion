/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNPoolingNode.h>

@interface MPSCNNPoolingAverageNode : MPSCNNPoolingNode

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;

@end
