/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/Swift-Protocol.h>

@protocol MPSCNNGroupNormalizationDataSource <Swift>

@property (nonatomic, readonly) unsigned long long numberOfFeatureChannels;
@property (nonatomic) unsigned long long numberOfGroups;

- (unsigned short)label;
- (unsigned short)gamma;
- (unsigned short)beta;

+ (unsigned short)supportsSecureCoding;

- (unsigned short)encodeWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithCoder: /* Error: Ran out of types for this method. */;
- (unsigned short)epsilon;
- (unsigned short)copyWithZone:device: /* Error: Ran out of types for this method. */;
- (unsigned short)updateGammaAndBetaWithCommandBuffer:groupNormalizationStateBatch: /* Error: Ran out of types for this method. */;
- (unsigned short)updateGammaAndBetaWithGroupNormalizationStateBatch: /* Error: Ran out of types for this method. */;

@end
