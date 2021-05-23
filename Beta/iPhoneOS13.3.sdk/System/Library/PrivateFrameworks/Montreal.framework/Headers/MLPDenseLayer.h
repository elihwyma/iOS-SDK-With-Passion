/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPMatrixLayer.h>

@class MLPOptimizer, MPSMatrix, MPSVector, NSArray, NSString;

@interface MLPDenseLayer : MLPMatrixLayer

{
    MPSMatrix *_weights;
    MPSVector *_biasVector;
    MLPOptimizer *_optimizerWeights;
    MLPOptimizer *_optimizerBiases;
    const void *_initialWeights;
    const void *_initialBias;
}

@property (retain) MPSMatrix *weights;
@property (retain) MPSVector *biasVector;
@property (retain) MLPOptimizer *optimizerWeights;
@property (retain) MLPOptimizer *optimizerBiases;
@property const void *initialWeights;
@property const void *initialBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *mlpOptimizers;

- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (void)createKernel;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 labels:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)backward:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (struct NSArray *)seqForward:(id)arg1 input:(struct NSArray *)arg2 dataBatch:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(struct NSArray *)arg3;
- (id)initWithName:(id)arg1 previousLayer:(id)arg2 numOutputs:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5;
- (id)initWithName:(id)arg1 numInputs:(unsigned long long)arg2 numOutputs:(unsigned long long)arg3 neuronType:(int)arg4 neuronParams:(id)arg5;
- (id)forward:(id)arg1 inputMatrix:(id)arg2 index:(id)arg3 runInference:(_Bool)arg4;
- (id)backward:(id)arg1 index:(id)arg2 inputGradientMatrix:(id)arg3;

@end
