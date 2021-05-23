/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNSpatialNormalizationGradientNode : MPSNNGradientFilterNode

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    float _alpha;
    float _beta;
    float _delta;
}

@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelSize:(unsigned long long)arg4;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelSize:(unsigned long long)arg4;

@end
