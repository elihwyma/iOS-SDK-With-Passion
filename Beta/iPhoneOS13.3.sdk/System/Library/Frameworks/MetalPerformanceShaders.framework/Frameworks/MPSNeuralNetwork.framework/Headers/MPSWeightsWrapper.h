/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@class MISSING_TYPE, MPSCNNConvolutionDescriptor, NSString;

@protocol MPSCNNBatchNormalizationDataSource, MPSCNNConvolutionDataSource;

@interface MPSWeightsWrapper : NSObject

{
    id <MPSCNNBatchNormalizationDataSource> _dataSource;
    id <MPSCNNConvolutionDataSource> _source;
    struct NeuronInfo _info;
    MPSCNNConvolutionDescriptor *_descriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)load;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)label;
- (unsigned int)dataType;
- (void *)weights;
- (id)descriptor;
- (float *)biasTerms;
- (void)purge;
- (MISSING_TYPE **)rangesForUInt8Kernel;
- (float *)lookupTableForUInt8Kernel;
- (id)initWithSource:(id)arg1 neuronInfo:(struct NeuronInfo)arg2 batchNorm:(id)arg3;

@end
