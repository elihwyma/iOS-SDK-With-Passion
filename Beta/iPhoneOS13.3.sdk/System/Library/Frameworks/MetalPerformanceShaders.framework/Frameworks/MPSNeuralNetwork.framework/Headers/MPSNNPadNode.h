/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNPadNode : MPSNNFilterNode

{
    struct MPSImageCoordinate _paddingSizeBefore;
    struct MPSImageCoordinate _paddingSizeAfter;
    unsigned long long _edgeMode;
    float _fillValue;
}

@property (nonatomic) float fillValue;

+ (id)nodeWithSource:(id)arg1 paddingSizeBefore:(struct MPSImageCoordinate)arg2 paddingSizeAfter:(struct MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4;

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 paddingSizeBefore:(struct MPSImageCoordinate)arg2 paddingSizeAfter:(struct MPSImageCoordinate)arg3 edgeMode:(unsigned long long)arg4;

@end
