/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@class NSString;

@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionGradientNode : MPSNNGradientFilterNode

{
    id <MPSCNNConvolutionDataSource> _weights;
    unsigned long long _trainingStyle;
}

@property (nonatomic, readonly) id <MPSCNNConvolutionDataSource> weights;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long trainingStyle;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 convolutionGradientState:(id)arg3 weights:(id)arg4;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 weights:(id)arg4;

@end
