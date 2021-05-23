/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/Swift-Protocol.h>

@protocol MPSCNNInstanceNormalizationDataSource <Swift>

@property (nonatomic, readonly) unsigned long long numberOfFeatureChannels;

- (unsigned short)label;
- (unsigned short)gamma;
- (unsigned short)beta;

+ (unsigned short)supportsSecureCoding;

- (unsigned short)load;
- (unsigned short)encodeWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)epsilon;
- (unsigned short)purge;
- (unsigned short)copyWithZone:device: /* Error: Ran out of types for this method. */;
- (unsigned short)updateGammaAndBetaWithCommandBuffer:instanceNormalizationStateBatch: /* Error: Ran out of types for this method. */;
- (unsigned short)updateGammaAndBetaWithInstanceNormalizationStateBatch: /* Error: Ran out of types for this method. */;

@end
