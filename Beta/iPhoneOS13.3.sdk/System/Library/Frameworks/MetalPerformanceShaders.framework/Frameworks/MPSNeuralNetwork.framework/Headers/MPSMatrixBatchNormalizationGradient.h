/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSMatrixBinaryKernel.h>

@interface MPSMatrixBatchNormalizationGradient : MPSMatrixBinaryKernel

{
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    float _epsilon;
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
}

@property (nonatomic) int neuronType;
@property (nonatomic) float neuronA;
@property (nonatomic) float neuronB;
@property (nonatomic) float neuronC;
@property (nonatomic) unsigned long long sourceNumberOfFeatureVectors;
@property (nonatomic) unsigned long long sourceInputFeatureChannels;
@property (nonatomic) float epsilon;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 meanVector:(id)arg4 varianceVector:(id)arg5 gammaVector:(id)arg6 betaVector:(id)arg7 resultGradientForDataMatrix:(id)arg8 resultGradientForGammaVector:(id)arg9 resultGradientForBetaVector:(id)arg10;
- (float)neuronParameterA;
- (float)neuronParameterB;
- (float)neuronParameterC;

@end
