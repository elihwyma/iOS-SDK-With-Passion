/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNConvolutionNode.h>

@class MPSCNNConvolutionGradientStateNode;

@interface MPSCNNBinaryConvolutionNode : MPSCNNConvolutionNode

{
    float _scaleValue;
    unsigned long long _type;
    unsigned long long _flags;
    float *_outputBiasTerms;
    float *_outputScaleTerms;
    float *_inputBiasTerms;
    float *_inputScaleTerms;
}

@property (nonatomic, readonly) MPSCNNConvolutionGradientStateNode *convolutionGradientState;

+ (id)nodeWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;
+ (id)nodeWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float *)arg3 outputScaleTerms:(const float *)arg4 inputBiasTerms:(const float *)arg5 inputScaleTerms:(const float *)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (id)convolutionState;
- (id)initWithSource:(id)arg1 weights:(id)arg2 scaleValue:(float)arg3 type:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)initWithSource:(id)arg1 weights:(id)arg2 outputBiasTerms:(const float *)arg3 outputScaleTerms:(const float *)arg4 inputBiasTerms:(const float *)arg5 inputScaleTerms:(const float *)arg6 type:(unsigned long long)arg7 flags:(unsigned long long)arg8;

@end
