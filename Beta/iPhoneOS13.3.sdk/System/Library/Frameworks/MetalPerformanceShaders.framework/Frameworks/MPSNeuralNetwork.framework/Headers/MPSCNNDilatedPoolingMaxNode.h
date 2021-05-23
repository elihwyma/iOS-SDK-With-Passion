/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNDilatedPoolingMaxNode : MPSNNFilterNode

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
}

@property (nonatomic, readonly) unsigned long long dilationRateX;
@property (nonatomic, readonly) unsigned long long dilationRateY;

+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 dilationRate:(unsigned long long)arg4;

- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3 dilationRate:(unsigned long long)arg4;
- (id)initWithSource:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 dilationRateX:(unsigned long long)arg6 dilationRateY:(unsigned long long)arg7;

@end
