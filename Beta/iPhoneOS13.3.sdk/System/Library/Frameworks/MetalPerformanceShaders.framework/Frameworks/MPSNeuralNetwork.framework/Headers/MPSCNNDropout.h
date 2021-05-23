/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@class MPSParallelRandomMTGP32;

@interface MPSCNNDropout : MPSCNNKernel

{
    float _keepProbability;
    unsigned long long _seed;
    CDStruct_da2e99ad _maskStrideInPixels;
    MPSParallelRandomMTGP32 *_parallelGenerator;
}

@property (nonatomic, readonly) float keepProbability;
@property (nonatomic, readonly) unsigned long long seed;
@property (nonatomic, readonly) CDStruct_14f26992 maskStrideInPixels;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 keepProbability:(float)arg2 seed:(unsigned long long)arg3 maskStrideInPixels:(CDStruct_14f26992)arg4;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)resetSeedOnCommandBuffer:(id)arg1 seed:(unsigned long long)arg2;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;
- (struct NSArray *)temporaryResultStateBatchForCommandBuffer:(id)arg1 sourceImage:(struct NSArray *)arg2 sourceStates:(id)arg3 destinationImage:(struct NSArray *)arg4;
- (struct NSArray *)resultStateBatchForSourceImage:(struct NSArray *)arg1 sourceStates:(id)arg2 destinationImage:(struct NSArray *)arg3;
- (id)privateResultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 commandBuffer:(id)arg4 isTemporary:(_Bool)arg5;

@end
