/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNUpsamplingBilinearGradientNode : MPSNNGradientFilterNode

{
    double _scaleFactorX;
    double _scaleFactorY;
}

@property (nonatomic, readonly) double scaleFactorX;
@property (nonatomic, readonly) double scaleFactorY;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 scaleFactorX:(double)arg4 scaleFactorY:(double)arg5;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 scaleFactorX:(double)arg4 scaleFactorY:(double)arg5;

@end
