/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@class MPSCNNLossLabels;

@interface MPSNNLossGradientState

{
    float _weight;
    float _labelSmoothing;
    float _epsilon;
    float _delta;
    MPSCNNLossLabels *_lossLabels;
}

+ (id)temporaryStateWithCommandBuffer:(id)arg1;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:(id)arg1;

@end
