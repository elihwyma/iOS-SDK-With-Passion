/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

@class MPSCNNGroupNormalization;

@protocol MTLBuffer;

@interface MPSCNNGroupNormalizationGradientState

{
    MPSCNNGroupNormalization *_groupNormalization;
    unsigned long long _numberOfFeatureChannels;
    unsigned long long _numberOfGroups;
}

@property (retain, nonatomic, readonly) MPSCNNGroupNormalization *groupNormalization;
@property (nonatomic, readonly) id <MTLBuffer> gamma;
@property (nonatomic, readonly) id <MTLBuffer> beta;
@property (nonatomic, readonly) id <MTLBuffer> gradientForGamma;
@property (nonatomic, readonly) id <MTLBuffer> gradientForBeta;

+ (id)temporaryStateWithCommandBuffer:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 groupNormalization:(id)arg3;

- (void)dealloc;
- (id)debugDescription;
- (id)initWithDevice:(id)arg1 numberOfFeatureChannels:(unsigned long long)arg2 groupNormalization:(id)arg3;

@end
