/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@protocol MPSNNLossCallback;

@interface MPSNNLossGradient : MPSCNNBinaryKernel

{
    id <MPSNNLossCallback> _propertyCallback;
    _Bool _computeLabelGradients;
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
@property (nonatomic) _Bool computeLabelGradients;

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
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(struct NSArray *)arg2 sourceImages:(struct NSArray *)arg3 labels:(struct NSArray *)arg4 weights:(struct NSArray *)arg5 sourceStates:(struct NSArray *)arg6 destinationGradients:(struct NSArray *)arg7;
- (struct NSArray *)encodeBatchToCommandBuffer:(id)arg1 sourceGradients:(struct NSArray *)arg2 sourceImages:(struct NSArray *)arg3 labels:(struct NSArray *)arg4 weights:(struct NSArray *)arg5 sourceStates:(struct NSArray *)arg6;

@end
