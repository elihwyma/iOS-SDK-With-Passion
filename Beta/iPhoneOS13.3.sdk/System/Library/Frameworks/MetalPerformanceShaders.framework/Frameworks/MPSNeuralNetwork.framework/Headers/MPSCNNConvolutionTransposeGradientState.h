/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@class MPSCNNConvolutionGradientState, MPSCNNConvolutionTranspose;

@interface MPSCNNConvolutionTransposeGradientState

{
    MPSCNNConvolutionTranspose *_convolutionTranspose;
    MPSCNNConvolutionGradientState *_convolutionGradientState;
    long long _kernelOffsetX;
    long long _kernelOffsetY;
}

@property (nonatomic, readonly) MPSCNNConvolutionGradientState *convolutionGradientState;
@property (retain, nonatomic, readonly) MPSCNNConvolutionTranspose *convolutionTranspose;

+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned int)arg5;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithResource:(id)arg1;
- (unsigned long long)sourceWidth;
- (unsigned long long)sourceHeight;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;
- (id)convolution;
- (id)initWithResource:(id)arg1 weightsLayout:(unsigned int)arg2;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3 weightsLayout:(unsigned int)arg4;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolution:(id)arg3;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4;
- (id)initWithDevice:(id)arg1 resourceList:(id)arg2 convolutionTranspose:(id)arg3 convolutionGradientState:(id)arg4 weightsLayout:(unsigned int)arg5;

@end
