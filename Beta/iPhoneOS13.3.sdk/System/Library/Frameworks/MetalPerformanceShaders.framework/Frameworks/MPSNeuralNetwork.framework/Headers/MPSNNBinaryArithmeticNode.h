/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSNNBinaryArithmeticNode : MPSNNFilterNode

{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    unsigned long long _primaryStrideInPixelsX;
    unsigned long long _primaryStrideInPixelsY;
    unsigned long long _primaryStrideInFeatureChannels;
    unsigned long long _secondaryStrideInPixelsX;
    unsigned long long _secondaryStrideInPixelsY;
    unsigned long long _secondaryStrideInFeatureChannels;
    float _minimumValue;
    float _maximumValue;
}

@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) unsigned long long primaryStrideInPixelsX;
@property (nonatomic) unsigned long long primaryStrideInPixelsY;
@property (nonatomic) unsigned long long primaryStrideInFeatureChannels;
@property (nonatomic) unsigned long long secondaryStrideInPixelsX;
@property (nonatomic) unsigned long long secondaryStrideInPixelsY;
@property (nonatomic) unsigned long long secondaryStrideInFeatureChannels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

+ (id)nodeWithSources:(id)arg1;
+ (id)nodeWithLeftSource:(id)arg1 rightSource:(id)arg2;

- (Class)gradientClass;
- (id)initWithSources:(id)arg1;
- (id)initWithLeftSource:(id)arg1 rightSource:(id)arg2;
- (id)gradientFilterWithSources:(id)arg1;
- (id)gradientFiltersWithSources:(id)arg1;

@end
