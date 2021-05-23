/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNLogSoftMax, MPSCNNNeuron, MPSNNReduceUnary;

@interface MPSCNNLoss : MPSCNNKernel

{
    unsigned int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    unsigned long long _numberOfClasses;
    float _epsilon;
    float _delta;
    MPSCNNLogSoftMax *_logSoftMax;
    MPSNNReduceUnary *_reduceRows;
    MPSNNReduceUnary *_reduceColumns;
    MPSNNReduceUnary *_reduceFeatureChannels;
    MPSCNNNeuron *_arithmetic;
}

@property (nonatomic, readonly) unsigned int lossType;
@property (nonatomic, readonly) int reductionType;
@property (nonatomic, readonly) float weight;
@property (nonatomic, readonly) float labelSmoothing;
@property (nonatomic, readonly) unsigned long long numberOfClasses;
@property (nonatomic, readonly) float epsilon;
@property (nonatomic, readonly) float delta;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 destinationImage:(id)arg4;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 labels:(struct NSArray *)arg3 destinationImages:(struct NSArray *)arg4;
- (void)initializeSupportFiltersWithDevice:(id)arg1;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3;

@end
