/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNBinaryArithmeticNode.h>

@interface MPSNNComparisonNode : MPSNNBinaryArithmeticNode

{
    unsigned long long _comparisonType;
}

@property (nonatomic) unsigned long long comparisonType;

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;

@end
