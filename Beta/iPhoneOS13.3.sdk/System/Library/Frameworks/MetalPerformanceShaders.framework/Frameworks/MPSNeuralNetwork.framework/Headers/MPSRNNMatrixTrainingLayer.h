/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSKernel.h>

@class MPSMatrixMultiplication, NSMutableArray;

@interface MPSRNNMatrixTrainingLayer : MPSKernel

{
    int layerType;
    void *layer;
    MPSMatrixMultiplication *gemmKernel;
    MPSMatrixMultiplication *gemmKernel_noAccumulate;
    MPSMatrixMultiplication *gemmKernelNonTranspose;
    MPSMatrixMultiplication *gemmKernelNonTranspose_noAccumulate;
    MPSMatrixMultiplication *gemmKernelTN;
    MPSMatrixMultiplication *gemmKernelTN_accumulate;
    NSMutableArray *weightDescriptors;
    _Bool _recurrentOutputIsTemporary;
    _Bool _trainingStateIsTemporary;
    _Bool _storeAllIntermediateStates;
    _Bool _accumulateWeightGradients;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
}

@property (nonatomic, readonly) unsigned long long inputFeatureChannels;
@property (nonatomic, readonly) unsigned long long outputFeatureChannels;
@property (nonatomic) _Bool storeAllIntermediateStates;
@property (nonatomic) _Bool recurrentOutputIsTemporary;
@property (nonatomic) _Bool trainingStateIsTemporary;
@property (nonatomic) _Bool accumulateWeightGradients;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2 trainableWeights:(id)arg3;
- (void)createWeightMatrices:(id)arg1;
- (void)createWeightGradientMatrices:(id)arg1 dataType:(unsigned int)arg2;
- (void)encodeForwardSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 destinationMatrices:(id)arg3 trainingStates:(id)arg4 weights:(id)arg5;
- (void)encodeForwardSequenceToCommandBuffer:(id)arg1 sourceMatrices:(id)arg2 sourceOffsets:(unsigned long long *)arg3 destinationMatrices:(id)arg4 destinationOffsets:(unsigned long long *)arg5 trainingStates:(id)arg6 recurrentInputState:(id)arg7 recurrentOutputStates:(id)arg8 weights:(id)arg9;
- (void)encodeGradientSequenceToCommandBuffer:(id)arg1 forwardSources:(id)arg2 sourceGradients:(id)arg3 destinationGradients:(id)arg4 weightGradients:(id)arg5 trainingStates:(id)arg6 weights:(id)arg7;
- (void)encodeGradientSequenceToCommandBuffer:(id)arg1 forwardSources:(id)arg2 forwardSourceOffsets:(unsigned long long *)arg3 sourceGradients:(id)arg4 sourceGradientOffsets:(unsigned long long *)arg5 destinationGradients:(id)arg6 destinationOffsets:(unsigned long long *)arg7 weightGradients:(id)arg8 trainingStates:(id)arg9 recurrentInputState:(id)arg10 recurrentOutputStates:(id)arg11 weights:(id)arg12;
- (void)encodeCopyWeightsToCommandBuffer:(id)arg1 weights:(id)arg2 matrixId:(unsigned long long)arg3 matrix:(id)arg4 copyFromWeightsToMatrix:(_Bool)arg5 matrixOffset:(CDStruct_14f26992)arg6;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)createTemporaryWeightGradientMatrices:(id)arg1 dataType:(unsigned int)arg2 commandBuffer:(id)arg3;

@end
