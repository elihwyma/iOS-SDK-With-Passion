/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSImageScale;

@protocol MPSHandle, MPSImageTransformProvider;

@interface MPSNNScale : MPSCNNKernel

{
    id <MPSImageTransformProvider> _transformProvider;
    CDStruct_da2e99ad _destSize;
    MPSImageScale *_filter;
    id <MPSHandle> _handle;
}

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setEdgeMode:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)initWithDevice:(id)arg1 transformProvider:(id)arg2 handle:(id)arg3 outputSize:(CDStruct_14f26992)arg4 scaleClass:(Class)arg5;

@end
