/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNConcatenationNode : MPSNNFilterNode

+ (id)nodeWithSource:(id)arg1;
+ (id)nodeWithSources:(id)arg1;

- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSources:(id)arg1;
- (id)gradientFiltersWithSources:(id)arg1;

@end
