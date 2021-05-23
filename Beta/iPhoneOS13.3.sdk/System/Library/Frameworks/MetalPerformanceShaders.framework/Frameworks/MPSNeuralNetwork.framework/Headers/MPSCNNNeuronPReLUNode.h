/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNNeuronNode.h>

@class NSData;

@interface MPSCNNNeuronPReLUNode : MPSCNNNeuronNode

{
    NSData *_aData;
}

+ (id)nodeWithSource:(id)arg1 aData:(id)arg2;

- (void)dealloc;
- (id)descriptor;
- (id)initWithSource:(id)arg1 aData:(id)arg2;

@end
