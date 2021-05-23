/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNBinaryArithmeticNode.h>

@interface MPSNNDivisionNode : MPSNNBinaryArithmeticNode

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;

@end
