/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSMatrixBinaryKernel.h>

@protocol MTLBuffer;

@interface MPSMatrixNeuronGradient : MPSMatrixBinaryKernel

{
    id <MTLBuffer> neuronAParamBuf;
    int _neuronType;
    float _neuronA;
    float _neuronB;
    float _neuronC;
    unsigned long long _sourceNumberOfFeatureVectors;
    unsigned long long _sourceInputFeatureChannels;
    double _alpha;
}

@property (nonatomic) int neuronType;
@property (nonatomic) float neuronA;
@property (nonatomic) float neuronB;
@property (nonatomic) float neuronC;
@property (nonatomic) unsigned long long sourceNumberOfFeatureVectors;
@property (nonatomic) unsigned long long sourceInputFeatureChannels;
@property (nonatomic) double alpha;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;
- (void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 inputMatrix:(id)arg3 biasVector:(id)arg4 resultGradientForDataMatrix:(id)arg5 resultGradientForBiasVector:(id)arg6;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (float)neuronParameterA;
- (float)neuronParameterB;
- (float)neuronParameterC;
- (void)setNeuronToPReLUWithParametersA:(id)arg1;

@end
