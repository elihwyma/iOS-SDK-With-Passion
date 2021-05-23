/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSCNNConvolutionGradientStateNode, MPSCNNConvolutionStateNode, NSString;

@protocol MPSCNNConvolutionDataSource;

@interface MPSCNNConvolutionNode : MPSNNFilterNode

{
    id <MPSCNNConvolutionDataSource> _weights;
    unsigned long long _accumulatorPrecision;
    unsigned long long _trainingStyle;
}

@property (nonatomic, readonly) MPSCNNConvolutionStateNode *convolutionState;
@property (nonatomic, readonly) id <MPSCNNConvolutionDataSource> weights;
@property (nonatomic) unsigned long long trainingStyle;
@property (nonatomic) unsigned long long accumulatorPrecision;
@property (nonatomic, readonly) MPSCNNConvolutionGradientStateNode *convolutionGradientState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)resultState;
- (id)initWithSource:(id)arg1 weights:(id)arg2;
- (id)initWithSource:(id)arg1 weights:(id)arg2 state:(id)arg3;

@end
