/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPLayer.h>

@class MPSLSTMDescriptor, MPSRNNMatrixTrainingLayer, NSArray, NSMutableArray, NSString;

@interface MLPLSTMLayer : MLPLayer

{
    int _inputGateActivation;
    int _forgetGateActivation;
    int _cellGateActivation;
    int _outputGateActivation;
    int _cellToOutputActivation;
    unsigned long long _inputSize;
    unsigned long long _outputSize;
    MPSLSTMDescriptor *_lstmDesc;
    MPSRNNMatrixTrainingLayer *_filter;
    NSMutableArray *_optimizers;
    NSMutableArray *_weights;
    NSMutableArray *_weightGradients;
    NSMutableArray *_trainingStates;
    float *_initialWeights_0;
    float *_initialWeights_1;
    float *_initialBias_0;
    float *_initialBias_1;
    unsigned long long _weightAttributes;
    struct NSArray *_srcMatrices;
}

@property unsigned long long inputSize;
@property unsigned long long outputSize;
@property int inputGateActivation;
@property int forgetGateActivation;
@property int cellGateActivation;
@property int outputGateActivation;
@property int cellToOutputActivation;
@property (retain) MPSLSTMDescriptor *lstmDesc;
@property (retain) MPSRNNMatrixTrainingLayer *filter;
@property (retain) NSMutableArray *optimizers;
@property (retain) NSMutableArray *weights;
@property (retain) NSMutableArray *weightGradients;
@property (retain) NSMutableArray *trainingStates;
@property float *initialWeights_0;
@property float *initialWeights_1;
@property float *initialBias_0;
@property float *initialBias_1;
@property unsigned long long weightAttributes;
@property (retain) NSArray *srcMatrices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSArray *mlpOptimizers;

- (id)generateNode:(id)arg1 model:(id)arg2 weightIter:(unsigned long long *)arg3;
- (id)initWithName:(id)arg1 parameters:(CDStruct_96916c69 *)arg2;
- (void)createKernel;
- (struct NSArray *)seqForward:(id)arg1 input:(struct NSArray *)arg2 dataBatch:(id)arg3 runInference:(_Bool)arg4;
- (struct NSArray *)seqBackward:(id)arg1 dataBatch:(id)arg2 inputGradient:(struct NSArray *)arg3;
- (id)initWithName:(id)arg1 inputSize:(unsigned long long)arg2 outputSize:(unsigned long long)arg3 weightAttributes:(unsigned long long)arg4;
- (void)populateActivation:(int *)arg1 montrealActivationType:(long long)arg2;
- (void)updateSourceMatrix:(struct NSArray *)arg1 inference:(_Bool)arg2;
- (struct NSArray *)seqForwardDifferentMatrices:(id)arg1 input:(struct NSArray *)arg2;
- (struct NSArray *)seqForwardCombinedMatrix:(id)arg1 input:(struct NSArray *)arg2;
- (struct NSArray *)seqBackwardDifferentMatrices:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (struct NSArray *)seqBackwardCombinedMatrix:(id)arg1 inputGradient:(struct NSArray *)arg2;
- (void)exportWeightsWithWeightMatrix:(id)arg1 weightID:(unsigned long long)arg2 destination:(float *)arg3 recurrent:(_Bool)arg4;
- (id)matrixIDToString:(unsigned long long)arg1;

@end
