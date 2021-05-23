/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSState.h>

@protocol MTLBuffer;

@interface MPSCNNNormalizationGammaAndBetaState : MPSState

{
    _Bool _initialized;
}

@property (nonatomic, readonly) id <MTLBuffer> gamma;
@property (nonatomic, readonly) id <MTLBuffer> beta;

+ (id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2;

- (id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithGamma:(id)arg1 beta:(id)arg2;

@end
