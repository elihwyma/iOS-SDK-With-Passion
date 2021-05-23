/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNInitialGradientNode : MPSNNFilterNode

+ (id)nodeWithSource:(id)arg1;

- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (id)gradientFilterWithSources:(id)arg1;
- (id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(CDUnknownBlockType)arg2;

@end
