/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNUnaryReductionNode : MPSNNFilterNode

{
    CDStruct_1e3be3a8 _clipRectSource;
}

@property (nonatomic) CDStruct_1e3be3a8 clipRectSource;

+ (id)nodeWithSource:(id)arg1;

- (id)initWithSource:(id)arg1;
- (id)gradientFilterWithSource:(id)arg1;

@end
