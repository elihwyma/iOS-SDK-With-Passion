/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNNeuron.h>

@class NSData;

@interface MPSCNNNeuronPReLU : MPSCNNNeuron

{
    NSData *_aData;
}

- (id)initWithDevice:(id)arg1 neuronDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 neuronDescriptor:(id)arg2 aArray:(const float *)arg3;
- (id)initWithDevice:(id)arg1 a:(const float *)arg2 count:(unsigned long long)arg3;

@end
