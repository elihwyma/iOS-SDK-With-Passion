/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNArithmetic : MPSCNNBinaryKernel

{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    float _minimumValue;
    float _maximumValue;
    unsigned long long _primaryStrideInFeatureChannels;
    unsigned long long _secondaryStrideInFeatureChannels;
    int _arithmeticType;
}

@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) unsigned long long primaryStrideInFeatureChannels;
@property (nonatomic) unsigned long long secondaryStrideInFeatureChannels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 arithmeticType:(int)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)privateResultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4 commandBuffer:(id)arg5 isTemporary:(_Bool)arg6;
- (void)setPrimaryStrideInPixelsX:(unsigned long long)arg1;
- (void)setPrimaryStrideInPixelsY:(unsigned long long)arg1;
- (void)setSecondaryStrideInPixelsX:(unsigned long long)arg1;
- (void)setSecondaryStrideInPixelsY:(unsigned long long)arg1;
- (id)resultStateForPrimaryImage:(id)arg1 secondaryImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 sourceStates:(id)arg4 destinationImage:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 primaryImage:(id)arg2 secondaryImage:(id)arg3 destinationState:(id)arg4 destinationImage:(id)arg5;
- (void)encodeBatchToCommandBuffer:(id)arg1 primaryImages:(struct NSArray *)arg2 secondaryImages:(struct NSArray *)arg3 destinationStates:(struct NSArray *)arg4 destinationImages:(struct NSArray *)arg5;

@end
