/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNUpsamplingBilinearNode : MPSNNFilterNode

{
    double _scaleFactorX;
    double _scaleFactorY;
    _Bool _alignCorners;
}

@property (nonatomic, readonly) double scaleFactorX;
@property (nonatomic, readonly) double scaleFactorY;
@property (nonatomic, readonly) _Bool alignCorners;

+ (id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;
+ (id)nodeWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(_Bool)arg4;

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3;
- (id)initWithSource:(id)arg1 integerScaleFactorX:(unsigned long long)arg2 integerScaleFactorY:(unsigned long long)arg3 alignCorners:(_Bool)arg4;

@end
