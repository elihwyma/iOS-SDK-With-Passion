/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSCNNDropoutGradientNode : MPSNNGradientFilterNode

{
    float _keepProbability;
    unsigned long long _seed;
    CDStruct_da2e99ad _maskStride;
}

@property (nonatomic, readonly) float keepProbability;
@property (nonatomic, readonly) unsigned long long seed;
@property (nonatomic, readonly) CDStruct_14f26992 maskStrideInPixels;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 keepProbability:(float)arg4 seed:(unsigned long long)arg5 maskStrideInPixels:(CDStruct_14f26992)arg6;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 keepProbability:(float)arg4 seed:(unsigned long long)arg5 maskStrideInPixels:(CDStruct_14f26992)arg6;

@end
