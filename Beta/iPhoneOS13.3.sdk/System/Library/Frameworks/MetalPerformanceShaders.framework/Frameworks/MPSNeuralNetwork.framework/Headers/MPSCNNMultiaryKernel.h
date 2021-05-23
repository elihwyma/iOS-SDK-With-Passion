/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSKernel.h>

@protocol MPSImageAllocator, MPSNNPadding;

@interface MPSCNNMultiaryKernel : MPSKernel

{
    struct NNKernelSourceParams *_srcInfo;
    unsigned long long _srcCount;
    CDStruct_1e3be3a8 _clipRect;
    unsigned long long _destinationFeatureChannelOffset;
    _Bool _isBackwards;
    _Bool _supportsBroadcasting;
    id <MPSNNPadding> _padding;
    id <MPSImageAllocator> _destinationImageAllocator;
    int _checkFlags;
    CDUnknownFunctionPointerType _batchEncode;
    void *_encodeData;
}

@property (nonatomic, readonly) unsigned long long sourceCount;
@property (nonatomic) CDStruct_1e3be3a8 clipRect;
@property (nonatomic) unsigned long long destinationFeatureChannelOffset;
@property (nonatomic, readonly) _Bool isBackwards;
@property (nonatomic, readonly) _Bool isStateModified;
@property (retain, nonatomic) id <MPSNNPadding> padding;
@property (retain, nonatomic) id <MPSImageAllocator> destinationImageAllocator;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)setOffset:(CDStruct_d6af7fc0)arg1;
- (void)setEdgeMode:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1;
- (CDStruct_d6af7fc0)offset;
- (unsigned long long)kernelWidth;
- (void)setKernelWidth:(unsigned long long)arg1;
- (unsigned long long)kernelHeight;
- (void)setKernelHeight:(unsigned long long)arg1;
- (void)setStrideInPixelsX:(unsigned long long)arg1;
- (void)setStrideInPixelsY:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationStates:(struct NSArray **)arg3 destinationStateIsTemporary:(_Bool)arg4;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2;
- (unsigned long long)maxBatchSize;
- (unsigned long long)edgeMode;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (_Bool)isResultStateReusedAcrossBatch;
- (unsigned long long)strideInPixelsX;
- (unsigned long long)strideInPixelsY;
- (unsigned long long)sourceFeatureChannelMaxCount;
- (void)setSourceFeatureChannelOffset:(unsigned long long)arg1;
- (void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(struct NSArray *)arg3;
- (unsigned long long)sourceFeatureChannelOffset;
- (void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImage:(id)arg3;
- (void)copyToGradientState:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)resultStateForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (struct NSArray *)resultStateBatchForSourceImages:(id)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (void)setDilationRateX:(unsigned long long)arg1;
- (void)setDilationRateY:(unsigned long long)arg1;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inStates:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (_Bool)appendBatchBarrier;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(id)arg2 sourceStates:(struct NSArray *)arg3;
- (unsigned long long)dilationRateX;
- (unsigned long long)dilationRateY;
- (void)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3 destinationImage:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 inState:(id)arg3;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3;
- (CDStruct_d6af7fc0)offsetAtIndex:(unsigned long long)arg1;
- (void)setOffset:(CDStruct_d6af7fc0)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)sourceFeatureChannelOffsetAtIndex:(unsigned long long)arg1;
- (void)setSourceFeatureChannelOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)sourceFeatureChannelMaxCountAtIndex:(unsigned long long)arg1;
- (void)setSourceFeatureChannelMaxCount:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)edgeModeAtIndex:(unsigned long long)arg1;
- (void)setEdgeMode:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)kernelWidthAtIndex:(unsigned long long)arg1;
- (void)setKernelWidth:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)kernelHeightAtIndex:(unsigned long long)arg1;
- (void)setKernelHeight:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)strideInPixelsXatIndex:(unsigned long long)arg1;
- (void)setStrideInPixelsX:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)strideInPixelsYatIndex:(unsigned long long)arg1;
- (void)setStrideInPixelsY:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)dilationRateXatIndex:(unsigned long long)arg1;
- (void)setDilationRateX:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)dilationRateYatIndex:(unsigned long long)arg1;
- (void)setDilationRateY:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (id)encodeToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationState:(id *)arg3 destinationStateIsTemporary:(_Bool)arg4;

@end
