/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNPoolingGradientNode.h>

@interface MPSCNNDilatedPoolingMaxGradientNode : MPSCNNPoolingGradientNode

{
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
}

@property (nonatomic, readonly) unsigned long long dilationRateX;
@property (nonatomic, readonly) unsigned long long dilationRateY;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 dilationRateX:(unsigned long long)arg8 dilationRateY:(unsigned long long)arg9;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 dilationRateX:(unsigned long long)arg8 dilationRateY:(unsigned long long)arg9;

@end
