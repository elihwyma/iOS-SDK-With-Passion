/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSMatrixBinaryKernel.h>

@interface MPSMatrixFullyConnectedGradient : MPSMatrixBinaryKernel

{
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
    unsigned long long _sourceOutputFeatureChannels;
    double _alpha;
}

@property (nonatomic) unsigned long long sourceNumberOfFeatureVectors;
@property (nonatomic) unsigned long long sourceOutputFeatureChannels;
@property (nonatomic) unsigned long long sourceInputFeatureChannels;
@property (nonatomic) double alpha;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeGradientForDataToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 weightMatrix:(id)arg3 resultGradientForDataMatrix:(id)arg4;
- (void)encodeGradientForWeightsAndBiasToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 resultGradientForWeightMatrix:(id)arg4 resultGradientForBiasVector:(id)arg5;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
