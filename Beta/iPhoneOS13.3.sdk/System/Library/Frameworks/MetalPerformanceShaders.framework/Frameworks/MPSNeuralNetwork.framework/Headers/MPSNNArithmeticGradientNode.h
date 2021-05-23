/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@interface MPSNNArithmeticGradientNode : MPSNNGradientFilterNode

{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _secondaryStrideInFeatureChannels;
    float _minimumValue;
    float _maximumValue;
    _Bool _isSecondarySourceFilter;
}

@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) unsigned long long secondaryStrideInPixelsX;
@property (nonatomic) unsigned long long secondaryStrideInPixelsY;
@property (nonatomic) unsigned long long secondaryStrideInFeatureChannels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic, readonly) _Bool isSecondarySourceFilter;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 isSecondarySourceFilter:(_Bool)arg4;

- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 isSecondarySourceFilter:(_Bool)arg4;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 isSecondarySourceFilter:(_Bool)arg3;

@end
