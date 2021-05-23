/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@interface MPSNNPadGradientState

{
    struct MPSImageCoordinate _fwdPadBefore;
    struct MPSImageCoordinate _fwdPadAfter;
    unsigned long long _srcImgFcCount;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:(id)arg1;

@end
