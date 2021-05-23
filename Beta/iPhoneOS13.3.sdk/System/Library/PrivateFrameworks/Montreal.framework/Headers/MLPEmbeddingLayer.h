/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPLayer.h>

@class MLPOptimizer, MPSMatrix, MPSMatrixCopy, MPSMatrixNeuron, MPSMatrixSum, MPSVector, NSArray, NSString;

@interface MLPEmbeddingLayer : MLPLayer

{
    struct vector<std::__1::map<unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>>>, std::__1::allocator<std::__1::map<unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::vector<unsigned int, std::__1::allocator<unsigned int>>>>>>> wordIDRepetitions;
    struct vector<float, std::__1::allocator<float>> weightsInitial;
    unsigned long long _vocabSize;
    unsigned long long _embeddingDimension;
    MPSMatrixCopy *_matrixCopy;
    const void *_initialWeights;
    MPSMatrix *_weights;
    MPSMatrix *_weightGradients;
    MLPOptimizer *_optimizer;
    MPSMatrix *_weights_mom;
    MPSMatrix *_weights_vel;
    MPSMatrixNeuron *_zeroFilter;
    MPSMatrixSum *_sumFilter;
    MPSMatrixCopy *_matrixCopyFilter;
    MPSVector *_offsetVector;
}

@property unsigned long long vocabSize;
@property unsigned long long embeddingDimension;
@property (retain) MPSMatrixCopy *matrixCopy;
@property const void *initialWeights;
@property (retain) MPSMatrix *weights;
@property (retain) MPSMatrix *weightGradients;
@property (retain) MLPOptimizer *optimizer;
@property (retain) MPSMatrix *weights_mom;
@property (retain) MPSMatrix *weights_vel;
@property (retain) MPSMatrixNeuron *zeroFilter;
@property (retain) MPSMatrixSum *sumFilter;
@property (retain) MPSMatrixCopy *matrixCopyFilter;
@property (retain) MPSVector *offsetVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *mlpOptimizers;

- (id).cxx_construct;
- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (void)createKernel;
- (struct NSArray *)forward:(id)arg1 input:(struct NSArray *)arg2 labels:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)seqForward:(id)arg1 input:(struct NSArray *)arg2 dataBatch:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(struct NSArray *)arg3;
- (void)seqBackward:(id)arg1 inputGradientMatrix:(id)arg2 matrixIter:(unsigned long long)arg3;
- (id)initWithName:(id)arg1 inputLength:(unsigned long long)arg2 vocabSize:(unsigned long long)arg3 embeddingDimension:(unsigned long long)arg4;

@end
