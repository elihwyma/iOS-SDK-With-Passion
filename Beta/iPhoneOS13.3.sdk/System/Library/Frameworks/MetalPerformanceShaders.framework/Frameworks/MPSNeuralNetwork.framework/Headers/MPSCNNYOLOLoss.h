/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNAdd, MPSCNNLoss, MPSCNNNeuron, MPSCNNNeuronGradient, MPSNNSlice, NSData, NSObject;

@protocol OS_dispatch_semaphore;

@interface MPSCNNYOLOLoss : MPSCNNKernel

{
    MPSCNNLoss *_lossXY;
    MPSCNNLoss *_lossWH;
    MPSCNNLoss *_lossConfidence;
    MPSCNNLoss *_lossClasses;
    int _reductionType;
    MPSCNNNeuron *_sigmoid;
    MPSCNNNeuronGradient *_sigmoidGradient;
    MPSCNNAdd *_add;
    MPSNNSlice *_slice;
    _Bool _rescore;
    float _scaleXY;
    float _scaleWH;
    float _scaleNoObject;
    float _scaleObject;
    float _scaleClass;
    float _minIOUForObjectPresence;
    float _maxIOUForObjectAbsence;
    float _countOfPresentObjects;
    NSObject<OS_dispatch_semaphore> *_encodingSemaphore;
    NSData *_anchorBoxes;
    unsigned long long _numberOfAnchorBoxes;
}

@property (retain, nonatomic, readonly) MPSCNNLoss *lossXY;
@property (retain, nonatomic, readonly) MPSCNNLoss *lossWH;
@property (retain, nonatomic, readonly) MPSCNNLoss *lossConfidence;
@property (retain, nonatomic, readonly) MPSCNNLoss *lossClasses;
@property (nonatomic, readonly) float scaleXY;
@property (nonatomic, readonly) float scaleWH;
@property (nonatomic, readonly) float scaleNoObject;
@property (nonatomic, readonly) float scaleObject;
@property (nonatomic, readonly) float scaleClass;
@property (nonatomic, readonly) float minIOUForObjectPresence;
@property (nonatomic, readonly) float maxIOUForObjectAbsence;
@property (nonatomic, readonly) int reductionType;
@property (nonatomic, readonly) unsigned long long numberOfAnchorBoxes;
@property (retain, nonatomic, readonly) NSData *anchorBoxes;

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
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3;
- (id)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3;
- (void)initializeSupportFiltersWithDevice:(id)arg1 lossDescriptor:(id)arg2;
- (float)countPresetobjectsSourceImages:(struct NSArray *)arg1 labels:(struct NSArray *)arg2;

@end
