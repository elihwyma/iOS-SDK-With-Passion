/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNLocalContrastNormalizationGradientNode : MPSNNGradientFilterNode

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    float _alpha;
    float _beta;
    float _delta;
    float _p0;
    float _pm;
    float _ps;
}

@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic) float p0;
@property (nonatomic) float pm;
@property (nonatomic) float ps;
@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) unsigned long long kernelHeight;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5;

@end
