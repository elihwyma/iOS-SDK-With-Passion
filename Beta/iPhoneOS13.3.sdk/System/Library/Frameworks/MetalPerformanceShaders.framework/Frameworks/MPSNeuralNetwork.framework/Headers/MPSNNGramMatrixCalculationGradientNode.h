/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSNNGramMatrixCalculationGradientNode : MPSNNGradientFilterNode

{
    float _alpha;
}

@property (nonatomic, readonly) float alpha;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;
+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 alpha:(float)arg4;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 alpha:(float)arg4;

@end
