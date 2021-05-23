/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSCNNLossDescriptor, MPSNNLabelsNode;

@interface MPSCNNLossNode : MPSNNFilterNode

{
    MPSNNLabelsNode *_labels;
    MPSCNNLossDescriptor *_descriptor;
}

@property (retain, nonatomic, readonly) MPSNNLabelsNode *inputLabels;

+ (id)nodeWithSource:(id)arg1 lossDescriptor:(id)arg2;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (id)gradientFilterWithSources:(id)arg1;
- (id)initWithSource:(id)arg1 lossDescriptor:(id)arg2;
- (id)trainingGraphWithSourceGradient:(id)arg1 nodeHandler:(CDUnknownBlockType)arg2;

@end
