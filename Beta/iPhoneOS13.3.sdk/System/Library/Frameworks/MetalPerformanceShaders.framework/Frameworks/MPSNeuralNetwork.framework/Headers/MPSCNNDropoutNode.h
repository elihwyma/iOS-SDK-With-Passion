/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNDropoutNode : MPSNNFilterNode

{
    float _keepProbability;
    unsigned long long _seed;
    CDStruct_da2e99ad _maskStride;
}

@property (nonatomic, readonly) float keepProbability;
@property (nonatomic, readonly) unsigned long long seed;
@property (nonatomic, readonly) CDStruct_14f26992 maskStrideInPixels;

+ (id)nodeWithSource:(id)arg1;
+ (id)nodeWithSource:(id)arg1 keepProbability:(float)arg2;
+ (id)nodeWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;

- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 keepProbability:(float)arg2;
- (id)initWithSource:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;

@end
