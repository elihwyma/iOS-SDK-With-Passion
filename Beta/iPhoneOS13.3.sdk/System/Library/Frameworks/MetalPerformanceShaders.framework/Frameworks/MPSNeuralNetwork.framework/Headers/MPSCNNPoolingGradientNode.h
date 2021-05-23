/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNPoolingGradientNode : MPSNNGradientFilterNode

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
}

@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long strideInPixelsX;
@property (nonatomic, readonly) unsigned long long strideInPixelsY;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 paddingPolicy:(id)arg8;

- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 kernelWidth:(unsigned long long)arg4 kernelHeight:(unsigned long long)arg5 strideInPixelsX:(unsigned long long)arg6 strideInPixelsY:(unsigned long long)arg7 paddingPolicy:(id)arg8;

@end
