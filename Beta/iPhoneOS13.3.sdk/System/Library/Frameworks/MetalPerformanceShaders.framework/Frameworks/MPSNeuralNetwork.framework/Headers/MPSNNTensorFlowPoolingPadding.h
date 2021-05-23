/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNDefaultPadding.h>

@class NSString;

@interface MPSNNTensorFlowPoolingPadding : MPSNNDefaultPadding

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 forKernel:(id)arg3 suggestedDescriptor:(id)arg4;

@end
