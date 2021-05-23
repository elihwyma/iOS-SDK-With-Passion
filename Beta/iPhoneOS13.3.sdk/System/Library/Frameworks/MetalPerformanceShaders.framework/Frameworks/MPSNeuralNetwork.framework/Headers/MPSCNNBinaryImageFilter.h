/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSCNNBinaryImageFilter : MPSCNNBinaryKernel

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithFilter:(id)arg1;

@end
