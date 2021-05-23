/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNUnaryReductionNode.h>

@interface MPSNNReductionSpatialMeanNode : MPSNNUnaryReductionNode

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;

@end
