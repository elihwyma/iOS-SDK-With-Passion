/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MPSNNLossCallback;

@interface MPSNNForwardLoss : MPSCNNKernel

{
    id <MPSNNLossCallback> _propertyCallback;
    unsigned int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    float _epsilon;
    float _delta;
    unsigned long long _numberOfClasses;
}

@property (nonatomic, readonly) unsigned int lossType;
@property (nonatomic, readonly) int reductionType;
@property (nonatomic, readonly) unsigned long long numberOfClasses;
@property (nonatomic) float weight;
@property (nonatomic) float labelSmoothing;
@property (nonatomic) float epsilon;
@property (nonatomic) float delta;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3 weights:(struct NSArray *)arg4 destinationStates:(struct NSArray *)arg5 destinationImages:(struct NSArray *)arg6;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3 weights:(struct NSArray *)arg4 destinationStates:(struct NSArray **)arg5 destinationStateIsTemporary:(_Bool)arg6;

@end
