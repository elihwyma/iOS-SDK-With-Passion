/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPImageLayer.h>

@class MPSMatrixCopy, MPSMatrixLogSoftMax, MPSMatrixNeuron, MPSMatrixSoftMax, MPSNDArrayMultiplication, MPSNDArrayReductionSum;

@interface MLPLossLayer : MLPImageLayer

{
    MPSNDArrayMultiplication *_multiplication;
    MPSNDArrayReductionSum *_reductionSum;
    MPSMatrixSoftMax *_matrixSoftMax;
    MPSMatrixLogSoftMax *_matrixLogSoftMax;
    MPSMatrixNeuron *_negativeNeuron;
    MPSMatrixCopy *_matrixLargeCopyFilter;
    MPSMatrixCopy *_matrixSingleCopyFilter;
}

@property (retain) MPSNDArrayMultiplication *multiplication;
@property (retain) MPSNDArrayReductionSum *reductionSum;
@property (retain) MPSMatrixSoftMax *matrixSoftMax;
@property (retain) MPSMatrixLogSoftMax *matrixLogSoftMax;
@property (retain) MPSMatrixNeuron *negativeNeuron;
@property (retain) MPSMatrixCopy *matrixLargeCopyFilter;
@property (retain) MPSMatrixCopy *matrixSingleCopyFilter;

- (void)updatePreviousLayer:(id)arg1 nextLayer:(id)arg2 network:(id)arg3;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (void)createKernel;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 labels:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)backward:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (struct NSArray *)seqForward:(id)arg1 input:(struct NSArray *)arg2 dataBatch:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(struct NSArray *)arg3;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 neuronType:(int)arg3 neuronParams:(id)arg4;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 inputChannels:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5;
- (struct NSArray *)imageInferenceForward:(id)arg1 input:(struct NSArray *)arg2 lossLabels:(id)arg3;
- (struct NSArray *)imageTrainingForward:(id)arg1 input:(struct NSArray *)arg2 lossLabels:(id)arg3;
- (id)seqInferenceForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3;
- (id)seqTrainingForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3 computeLossGradient:(_Bool)arg4;
- (id)seqTrainingForward:(id)arg1 subMatrix:(id)arg2 reductionSumResults:(id)arg3 alphaVec:(id)arg4 labels:(id)arg5 rowOffset:(unsigned long long)arg6 computeNRows:(unsigned long long)arg7 computeLossGradient:(_Bool)arg8;
- (id)seqForward:(id)arg1 inputMatrix:(id)arg2 dataBatch:(id)arg3 runInference:(_Bool)arg4;

@end
