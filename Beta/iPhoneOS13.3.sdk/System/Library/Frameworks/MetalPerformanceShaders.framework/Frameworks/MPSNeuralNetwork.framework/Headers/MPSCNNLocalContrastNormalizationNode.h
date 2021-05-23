/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNNormalizationNode.h>

@interface MPSCNNLocalContrastNormalizationNode : MPSCNNNormalizationNode

{
    float _pm;
    float _ps;
    float _p0;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
}

@property (nonatomic) float pm;
@property (nonatomic) float ps;
@property (nonatomic) float p0;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;

+ (id)nodeWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;

- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 kernelSize:(unsigned long long)arg2;

@end
