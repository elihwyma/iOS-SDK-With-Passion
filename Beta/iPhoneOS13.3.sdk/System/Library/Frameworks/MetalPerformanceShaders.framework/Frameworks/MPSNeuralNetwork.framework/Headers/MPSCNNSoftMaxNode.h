/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNSoftMaxNode : MPSNNFilterNode

+ (id)nodeWithSource:(id)arg1;

- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;

@end
