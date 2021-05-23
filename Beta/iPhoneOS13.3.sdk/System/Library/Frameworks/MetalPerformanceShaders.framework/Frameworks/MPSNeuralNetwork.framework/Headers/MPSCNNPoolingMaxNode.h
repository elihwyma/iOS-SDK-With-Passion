/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNPoolingNode.h>

@interface MPSCNNPoolingMaxNode : MPSCNNPoolingNode

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;

@end
