/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSState.h>

@interface MPSRNNRecurrentMatrixState : MPSState

{
    id *recurrentMatrices;
    id *cellMatrices;
    int nLayers;
    _Bool _isTemporary;
}

- (void)dealloc;
- (void)setReadCount:(unsigned long long)arg1;
- (_Bool)isTemporary;
- (id)getRecurrentOutputMatrixForLayerIndex:(unsigned long long)arg1;
- (id)getMemoryCellMatrixForLayerIndex:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1 recurrentMatrixDescriptors:(id *)arg2 cellMatrixDescriptors:(id *)arg3 isTemporary:(_Bool)arg4 layerCount:(int)arg5;

@end
