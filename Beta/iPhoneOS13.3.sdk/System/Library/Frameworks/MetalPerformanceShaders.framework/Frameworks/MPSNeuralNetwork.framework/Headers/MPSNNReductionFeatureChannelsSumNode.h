/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNUnaryReductionNode.h>

@interface MPSNNReductionFeatureChannelsSumNode : MPSNNUnaryReductionNode

{
    float _weight;
}

@property (nonatomic) float weight;

- (struct FilterGraphNode *)newFilterNode;

@end
