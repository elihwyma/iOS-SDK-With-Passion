/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@protocol MPSCNNConvolutionDataSource;

@interface MPSRNNDescriptor : NSObject

{
    _Bool _useLayerInputUnitTransformMode;
    _Bool _useFloat32Weights;
    unsigned long long _inputFeatureChannels;
    unsigned long long _outputFeatureChannels;
    id <MPSCNNConvolutionDataSource> _inputTransform;
    id <MPSCNNConvolutionDataSource> _outputTransform;
    id <MPSCNNConvolutionDataSource> _recurrentOutputTransform;
    unsigned long long _layerSequenceDirection;
    unsigned long long _internalKernelSelector;
}

@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> inputTransform;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> outputTransform;
@property (retain, nonatomic) id <MPSCNNConvolutionDataSource> recurrentOutputTransform;
@property (nonatomic) unsigned long long internalKernelSelector;
@property (nonatomic) unsigned long long inputFeatureChannels;
@property (nonatomic) unsigned long long outputFeatureChannels;
@property (nonatomic) _Bool useLayerInputUnitTransformMode;
@property (nonatomic) _Bool useFloat32Weights;
@property (nonatomic) unsigned long long layerSequenceDirection;

- (id)init;
- (void)dealloc;

@end
