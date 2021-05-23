/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/Swift-Protocol.h>

@protocol MPSCNNBatchNormalizationDataSource <Swift>

- (unsigned short)load;
- (unsigned short)label;
- (unsigned short)purge;
- (unsigned short)gamma;
- (unsigned short)mean;
- (unsigned short)variance;
- (unsigned short)beta;
- (unsigned short)numberOfFeatureChannels;

+ (unsigned short)supportsSecureCoding;

- (unsigned short)encodeWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)epsilon;
- (unsigned short)copyWithZone:device: /* Error: Ran out of types for this method. */;
- (unsigned short)updateGammaAndBetaWithCommandBuffer:batchNormalizationState: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMeanAndVarianceWithCommandBuffer:batchNormalizationState: /* Error: Ran out of types for this method. */;
- (unsigned short)updateGammaAndBetaWithBatchNormalizationState: /* Error: Ran out of types for this method. */;
- (unsigned short)updateMeanAndVarianceWithBatchNormalizationState: /* Error: Ran out of types for this method. */;

@end
