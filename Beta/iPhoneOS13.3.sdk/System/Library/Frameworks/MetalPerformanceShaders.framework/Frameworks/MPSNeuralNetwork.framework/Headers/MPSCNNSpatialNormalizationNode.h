/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNSpatialNormalizationNode : MPSCNNNormalizationNode

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
}

@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;

- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;

@end
