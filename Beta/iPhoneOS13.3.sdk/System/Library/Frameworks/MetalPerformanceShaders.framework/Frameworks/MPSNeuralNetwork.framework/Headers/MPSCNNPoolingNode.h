/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNPoolingNode : MPSNNFilterNode

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

+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
+ (id)nodeWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2;
- (id)initWithSource:(id)arg1 filterSize:(unsigned long long)arg2 stride:(unsigned long long)arg3;
- (id)initWithSource:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5;

@end
