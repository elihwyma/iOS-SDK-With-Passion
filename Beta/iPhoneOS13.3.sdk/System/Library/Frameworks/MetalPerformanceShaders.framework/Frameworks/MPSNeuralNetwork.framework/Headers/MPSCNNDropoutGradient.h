/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNDropoutGradient : MPSCNNGradientKernel

{
    float _keepProbability;
    unsigned long long _seed;
    CDStruct_da2e99ad _maskStrideInPixels;
}

@property (nonatomic, readonly) float keepProbability;
@property (nonatomic, readonly) unsigned long long seed;
@property (nonatomic, readonly) CDStruct_14f26992 maskStrideInPixels;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
