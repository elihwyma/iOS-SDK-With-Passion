/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

#import <MPSNeuralNetwork/Swift-Protocol.h>

@class MPSCNNNeuron, MPSNNNeuronDescriptor, NSData;

@interface MPSCNNConvolutionDescriptor : NSObject <Swift>

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    unsigned long long _featureChannelsLayout;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
    unsigned long long _groups;
    NSData *_batchNormalizationData;
    MPSCNNNeuron *_deprecated_neuron;
    unsigned long long _subPixelScaleFactor;
    unsigned long long _dilationRateX;
    unsigned long long _dilationRateY;
    _Bool _depthWiseConvolution;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    MPSCNNNeuron *_neuron_deprecated;
}

@property (nonatomic) unsigned long long featureChannelsLayout;
@property (nonatomic) unsigned long long kernelWidth;
@property (nonatomic) unsigned long long kernelHeight;
@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) unsigned long long strideInPixelsX;
@property (nonatomic) unsigned long long strideInPixelsY;
@property (nonatomic) unsigned long long groups;
@property (nonatomic) unsigned long long dilationRateX;
@property (nonatomic) unsigned long long dilationRateY;
@property (retain, nonatomic) MPSNNNeuronDescriptor *fusedNeuronDescriptor;
@property (retain, nonatomic) MPSCNNNeuron *neuron;

+ (_Bool)supportsSecureCoding;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5;
+ (id)cnnConvolutionDescriptorWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 postFilters:(id)arg5;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3;
- (int)neuronType;
- (void)setNeuronType:(int)arg1 parameterA:(float)arg2 parameterB:(float)arg3 parameterC:(float)arg4;
- (void)setNeuronType:(int)arg1;
- (void)setBatchNormalizationParametersForInferenceWithMean:(const float *)arg1 variance:(const float *)arg2 gamma:(const float *)arg3 beta:(const float *)arg4 epsilon:(float)arg5;
- (struct NeuronInfo)neuronInfo;
- (float)neuronParameterA;
- (float)neuronParameterB;
- (float)neuronParameterC;
- (void)setNeuronToPReLUWithParametersA:(id)arg1;
- (id)newDescriptorWithNeuronInfo:(struct NeuronInfo)arg1;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4;
- (id)initWithKernelWidth:(unsigned long long)arg1 kernelHeight:(unsigned long long)arg2 inputFeatureChannels:(unsigned long long)arg3 outputFeatureChannels:(unsigned long long)arg4 neuronFilter:(id)arg5;
- (void)setNeuronParameterA:(float)arg1;
- (void)setNeuronParameterB:(float)arg1;
- (void)setNeuronParameterC:(float)arg1;
- (_Bool)hasBatchNormData;

@end
