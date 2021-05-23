/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNUpsamplingNearestNode : MPSNNFilterNode

{
    double _scaleFactorX;
    double _scaleFactorY;
}

@property (nonatomic, readonly) double scaleFactorX;
@property (nonatomic, readonly) double scaleFactorY;

+ (id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;

@end
