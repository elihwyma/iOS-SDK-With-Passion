/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNCrossChannelNormalizationNode : MPSCNNNormalizationNode

{
    unsigned long long _kernelSizeInFeatureChannels;
}

@property (nonatomic) unsigned long long kernelSizeInFeatureChannels;

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;

- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;

@end
