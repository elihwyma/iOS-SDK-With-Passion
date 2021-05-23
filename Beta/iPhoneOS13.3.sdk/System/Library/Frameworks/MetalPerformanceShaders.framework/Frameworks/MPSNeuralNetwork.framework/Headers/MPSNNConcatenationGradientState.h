/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@interface MPSNNConcatenationGradientState

{
    unsigned int _sliceCount;
    struct MPSSliceInfo *_info;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:(id)arg1;

@end
