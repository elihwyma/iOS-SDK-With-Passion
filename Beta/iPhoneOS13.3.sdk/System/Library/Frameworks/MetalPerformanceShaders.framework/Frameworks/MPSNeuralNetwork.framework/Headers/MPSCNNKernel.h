/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSKernel.h>

@class MISSING_TYPE, MPSExternalCNNUnary;

@protocol MPSImageAllocator, MPSNNPadding;

@interface MPSCNNKernel : MPSKernel

{
    CDStruct_d6af7fc0 _offset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _sourceFeatureChannelOffset;
    unsigned long long _sourceFeatureChannelMaxCount;
    MPSExternalCNNUnary *_plugin;
    _Bool _pluginSupportsBatchEncode;
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
    id <MPSNNPadding> _padding;
    unsigned long long _maxBatchSize;
    _Bool _isBackwards;
    unsigned long long _edgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    CDUnknownFunctionPointerType _batchEncode;
    void *_encodeData;
    unsigned long long _pluginOptions;
    id <MPSImageAllocator> _destinationImageAllocator;
}

@property (nonatomic) CDStruct_d6af7fc0 offset;
@property (nonatomic) CDStruct_1e3be3a8 clipRect;
@property (nonatomic) unsigned long long destinationFeatureChannelOffset;
@property (nonatomic) unsigned long long sourceFeatureChannelOffset;
@property (nonatomic) unsigned long long sourceFeatureChannelMaxCount;
@property (nonatomic) unsigned long long edgeMode;
@property (nonatomic, readonly) unsigned long long kernelWidth;
@property (nonatomic, readonly) unsigned long long kernelHeight;
@property (nonatomic, readonly) unsigned long long strideInPixelsX;
@property (nonatomic, readonly) unsigned long long strideInPixelsY;
@property (nonatomic, readonly) unsigned long long dilationRateX;
@property (nonatomic, readonly) unsigned long long dilationRateY;
@property (nonatomic, readonly) _Bool isBackwards;
@property (nonatomic, readonly) _Bool isStateModified;
@property (retain, nonatomic) id <MPSNNPadding> padding;
@property (retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray **)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2;
- (id)plugin;
- (_Bool)setPlugin:(id)arg1;
- (unsigned long long)maxBatchSize;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationImage:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (struct MPSRegion)sourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (void)copyToGradientState:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationImages:(struct NSArray *)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationStates:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (struct NSArray *)resultStateBatchForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (_Bool)filterHandlesPlugin;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationState:(id *)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 inStates:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 inState:(id)arg3;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 inStates:(struct NSArray *)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceState:(id)arg3 destinationState:(id *)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 sourceStates:(struct NSArray *)arg3 destinationStates:(struct NSArray **)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4 kernelOffset:(CDStruct_d6af7fc0 *)arg5;
- (_Bool)appendBatchBarrier;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2;
- (_Bool)pluginSupportsBatchEncode;
- (MISSING_TYPE *)sourcePositionOfTopLeftCornerOfFilterWindow;

@end
