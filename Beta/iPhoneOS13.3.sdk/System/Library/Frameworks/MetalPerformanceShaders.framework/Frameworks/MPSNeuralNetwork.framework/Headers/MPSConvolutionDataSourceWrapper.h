/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class MISSING_TYPE, MPSCNNConvolutionDescriptor, MPSNNNeuronDescriptor, NSString;

@protocol MPSCNNConvolutionDataSource;

@interface MPSConvolutionDataSourceWrapper : NSObject

{
    id <MPSCNNConvolutionDataSource> _dataSource;
    MPSCNNConvolutionDescriptor *_convolution;
    NSObject *_batchNorm;
    MPSNNNeuronDescriptor *_neuron;
    struct atomic<long> _loadCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)wrapperForDataSource:(id)arg1;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)load;
- (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)label;
- (unsigned int)dataType;
- (void *)weights;
- (id)initWithDataSource:(id)arg1;
- (id)descriptor;
- (float *)biasTerms;
- (void)purge;
- (MISSING_TYPE **)rangesForUInt8Kernel;
- (float *)lookupTableForUInt8Kernel;
- (unsigned int)weightsQuantizationType;
- (id)updateWithCommandBuffer:(id)arg1 gradientState:(id)arg2 sourceState:(id)arg3;
- (_Bool)updateWithGradientState:(id)arg1 sourceState:(id)arg2;
- (struct NeuronInfo)neuronInfo;
- (_Bool)appendNeuron:(const struct NeuronInfo *)arg1;
- (_Bool)appendBatchNorm:(id)arg1;
- (_Bool)appendNeuronDescriptor:(id)arg1;
- (_Bool)hasBatchNorm;

@end
