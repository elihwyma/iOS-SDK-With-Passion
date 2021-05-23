/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSState.h>

@interface MPSRNNRecurrentImageState : MPSState

{
    id *recurrentImages;
    id *cellImages;
    int nLayers;
    _Bool _isTemporary;
}

- (void)dealloc;
- (void)setReadCount:(unsigned long long)arg1;
- (_Bool)isTemporary;
- (id)getRecurrentOutputImageForLayerIndex:(unsigned long long)arg1;
- (id)getMemoryCellImageForLayerIndex:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1 recurrentImageDescriptors:(id *)arg2 cellImageDescriptors:(id *)arg3 isTemporary:(_Bool)arg4 layerCount:(int)arg5;

@end
