/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSCNNNeuron;

@interface MPSNNInitialGradient : MPSCNNKernel

{
    MPSCNNNeuron *_neuronFilter;
}

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
