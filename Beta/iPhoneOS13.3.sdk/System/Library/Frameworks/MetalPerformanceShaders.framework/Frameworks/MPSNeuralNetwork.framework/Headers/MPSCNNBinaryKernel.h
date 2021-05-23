/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSKernel.h>

@class MPSExternalCNNBinary;

@protocol MPSImageAllocator, MPSNNPadding;

@interface MPSCNNBinaryKernel : MPSKernel

{
    CDStruct_d6af7fc0 _primaryOffset;
    CDStruct_d6af7fc0 _secondaryOffset;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _destinationFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelOffset;
    unsigned long long _secondarySourceFeatureChannelOffset;
    unsigned long long _primarySourceFeatureChannelMaxCount;
    unsigned long long _secondarySourceFeatureChannelMaxCount;
    MPSExternalCNNBinary *_plugin;
    _Bool _pluginSupportsBatchEncode;
    unsigned long long _primaryKernelWidth;
    unsigned long long _primaryKernelHeight;
    unsigned long long _secondaryKernelWidth;
    unsigned long long _secondaryKernelHeight;
    unsigned long long _primaryStrideInPixelsX;
    unsigned long long _primaryStrideInPixelsY;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _primaryDilationRateX;
    unsigned long long _primaryDilationRateY;
    unsigned long long _secondaryDilationRateX;
    unsigned long long _secondaryDilationRateY;
    _Bool _isBackwards;
    _Bool _supportsBroadcasting;
    id <MPSNNPadding> _padding;
    unsigned long long _primaryEdgeMode;
    unsigned long long _secondaryEdgeMode;
    int _checkFlags;
    CDUnknownFunctionPointerType _encode;
    CDUnknownFunctionPointerType _batchEncode;
    void *_encodeData;
    id <MPSImageAllocator> _destinationImageAllocator;
    unsigned long long _pluginOptions;
}

@property (nonatomic) CDStruct_d6af7fc0 primaryOffset;
@property (nonatomic) CDStruct_d6af7fc0 secondaryOffset;
@property (nonatomic) CDStruct_1e3be3a8 clipRect;
@property (nonatomic) unsigned long long destinationFeatureChannelOffset;
@property (nonatomic) unsigned long long primarySourceFeatureChannelOffset;
@property (nonatomic) unsigned long long secondarySourceFeatureChannelOffset;
@property (nonatomic) unsigned long long primarySourceFeatureChannelMaxCount;
@property (nonatomic) unsigned long long secondarySourceFeatureChannelMaxCount;
@property (nonatomic) unsigned long long primaryEdgeMode;
@property (nonatomic) unsigned long long secondaryEdgeMode;
@property (nonatomic, readonly) unsigned long long primaryKernelWidth;
@property (nonatomic, readonly) unsigned long long primaryKernelHeight;
@property (nonatomic, readonly) unsigned long long secondaryKernelWidth;
@property (nonatomic, readonly) unsigned long long secondaryKernelHeight;
@property (nonatomic) unsigned long long primaryStrideInPixelsX;
@property (nonatomic) unsigned long long primaryStrideInPixelsY;
@property (nonatomic) unsigned long long secondaryStrideInPixelsX;
@property (nonatomic) unsigned long long secondaryStrideInPixelsY;
@property (nonatomic, readonly) unsigned long long primaryDilationRateX;
@property (nonatomic, readonly) unsigned long long primaryDilationRateY;
@property (nonatomic, readonly) unsigned long long secondaryDilationRateX;
@property (nonatomic, readonly) unsigned long long secondaryDilationRateY;
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
- (id)plugin;
- (_Bool)setPlugin:(id)arg1;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationImage:(id)arg4;
- (struct MPSRegion)primarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (struct MPSRegion)secondarySourceRegionForDestinationSize:(CDStruct_14f26992)arg1;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (_Bool)isResultStateReusedAcrossBatch;
- (void)copyToBinaryGradientState:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5;
- (void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 inStates:(struct NSArray *)arg4 destinationImages:(struct NSArray *)arg5;
- (id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5;
- (_Bool)filterHandlesPlugin;
- (void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 primaryImage:(struct NSArray *)arg2 secondaryImage:(struct NSArray *)arg3 sourceStates:(id)arg4 destinationImage:(struct NSArray *)arg5;
- (struct NSArray *)resultStateBatchForPrimaryImage:(struct NSArray *)arg1 secondaryImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (unsigned long long)encodingStorageSizeForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (unsigned long long)batchEncodingStorageSizeForPrimaryImage:(struct NSArray *)arg1 secondaryImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (_Bool)appendBatchBarrier;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 inStates:(struct NSArray *)arg4;
- (id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 inState:(id)arg4 destinationImage:(id)arg5 subBatchIndex:(unsigned long long)arg6 batchSize:(unsigned long long)arg7;
- (id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(id *)arg4 destinationStateIsTemporary:(_Bool)arg5;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 destinationStates:(struct NSArray **)arg4 destinationStateIsTemporary:(_Bool)arg5;

@end
