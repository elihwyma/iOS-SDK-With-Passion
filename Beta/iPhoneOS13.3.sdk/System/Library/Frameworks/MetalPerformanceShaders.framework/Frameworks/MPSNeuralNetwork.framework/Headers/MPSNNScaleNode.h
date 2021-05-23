/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSImageTransformProvider;

@interface MPSNNScaleNode : MPSNNFilterNode

{
    id <MPSImageTransformProvider> _transformProvider;
    CDStruct_da2e99ad _size;
}

+ (id)nodeWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;
+ (id)nodeWithSource:(id)arg1 outputSize:(CDStruct_14f26992)arg2;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;
- (id)privateInitWithSource:(id)arg1 transformProvider:(id)arg2 outputSize:(CDStruct_14f26992)arg3;
- (id)initWithSource:(id)arg1 outputSize:(CDStruct_14f26992)arg2;

@end
