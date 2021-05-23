/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNNormalizationNode : MPSNNFilterNode

{
    float _alpha;
    float _beta;
    float _delta;
}

@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;

+ (id)nodeWithSource:(id)arg1;

- (id)initWithSource:(id)arg1;

@end
