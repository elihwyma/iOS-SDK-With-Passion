/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSState.h>

@protocol MTLBuffer;

@interface MPSCNNNormalizationMeanAndVarianceState : MPSState

{
    _Bool _initialized;
}

@property (nonatomic, readonly) id <MTLBuffer> mean;
@property (nonatomic, readonly) id <MTLBuffer> variance;

+ (id)temporaryStateWithCommandBuffer:(id)arg1 bufferSize:(unsigned long long)arg2;
+ (id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2;

- (id)initWithDevice:(id)arg1 bufferSize:(unsigned long long)arg2;
- (id)initWithMean:(id)arg1 variance:(id)arg2;

@end
