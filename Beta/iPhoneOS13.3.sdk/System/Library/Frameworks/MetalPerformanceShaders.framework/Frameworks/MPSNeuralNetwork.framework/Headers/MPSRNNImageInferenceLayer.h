/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSRNNImageInferenceLayer : MPSCNNKernel

{
    int *layerTypes;
    void **layers;
    void **forwardLayers;
    int *forwardLayerTypes;
    unsigned long long nForwardLayers;
    void **backwardLayers;
    int *backwardLayerTypes;
    unsigned long long nBackwardLayers;
    _Bool _recurrentOutputIsTemporary;
    _Bool _storeAllIntermediateStates;
    unsigned long long _numberOfLayers;
    unsigned long long _bidirectionalCombineMode;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
}

@property (nonatomic, readonly) unsigned long long inputFeatureChannels;
@property (nonatomic, readonly) unsigned long long outputFeatureChannels;
@property (nonatomic, readonly) unsigned long long numberOfLayers;
@property (nonatomic) _Bool recurrentOutputIsTemporary;
@property (nonatomic) _Bool storeAllIntermediateStates;
@property (nonatomic) unsigned long long bidirectionalCombineMode;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 rnnDescriptor:(id)arg2;
- (id)initWithDevice:(id)arg1 rnnDescriptors:(id)arg2;
- (void)encodeSequenceToCommandBuffer:(id)arg1 sourceImages:(id)arg2 destinationImages:(id)arg3 recurrentInputState:(id)arg4 recurrentOutputStates:(id)arg5;
- (void)encodeBidirectionalSequenceToCommandBuffer:(id)arg1 sourceSequence:(id)arg2 destinationForwardImages:(id)arg3 destinationBackwardImages:(id)arg4;

@end
