/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNBinaryConvolutionNode.h>

@interface MPSCNNBinaryFullyConnectedNode : MPSCNNBinaryConvolutionNode

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;
+ (id)nodeWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float *)arg3 outputScaleTerms:(const float *)arg4 inputBiasTerms:(const float *)arg5 inputScaleTerms:(const float *)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)initWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float *)arg3 outputScaleTerms:(const float *)arg4 inputBiasTerms:(const float *)arg5 inputScaleTerms:(const float *)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8;

@end
