/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@class MPSNNNeuronDescriptor;

@interface MPSCNNNeuronGradientNode : MPSNNGradientFilterNode

{
    MPSNNNeuronDescriptor *_descriptor;
}

@property (nonatomic, readonly) MPSNNNeuronDescriptor *descriptor;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 descriptor:(id)arg4;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 descriptor:(id)arg4;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;

@end
