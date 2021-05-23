/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNConvolutionTransposeNode : MPSCNNConvolutionNode

@property (nonatomic, readonly) MPSCNNConvolutionGradientStateNode *convolutionGradientState;

+ (id)nodeWithSource:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3;
+ (id)nodeWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3;

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)resultState;
- (id)convolutionState;
- (id)initWithSource:(id)arg1 convolutionGradientState:(id)arg2 weights:(id)arg3;
- (id)initWithSource:(id)arg1 convolutionState:(id)arg2 weights:(id)arg3;

@end
