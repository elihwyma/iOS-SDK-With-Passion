/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSState.h>

@class MPSMatrix;

@interface MPSRNNMatrixTrainingState : MPSState

{
    MPSMatrix *singleGateZ;
    _Bool _isTemporary;
}

- (void)dealloc;
- (void)setReadCount:(unsigned long long)arg1;
- (_Bool)isTemporary;
- (id)initForSingleGateWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2 isTemporary:(_Bool)arg3;

@end
