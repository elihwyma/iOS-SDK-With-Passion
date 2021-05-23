/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@protocol MTLBuffer;

@interface MPSNNPad : MPSCNNKernel

{
    id <MTLBuffer> _aBuf;
    unsigned long long _aBufFP32Len;
    float _fillValue;
    struct MPSImageCoordinate _paddingSizeBefore;
    struct MPSImageCoordinate _paddingSizeAfter;
}

@property (nonatomic) struct MPSImageCoordinate paddingSizeBefore;
@property (nonatomic) struct MPSImageCoordinate paddingSizeAfter;
@property (nonatomic) float fillValue;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 paddingSizeBefore:(struct MPSImageCoordinate)arg2 paddingSizeAfter:(struct MPSImageCoordinate)arg3 fillValueArray:(id)arg4;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2;
- (id)initWithDevice:(id)arg1 paddingSizeBefore:(struct MPSImageCoordinate)arg2 paddingSizeAfter:(struct MPSImageCoordinate)arg3;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)resultStateForSourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3;
- (id)temporaryResultStateForCommandBuffer:(id)arg1 sourceImage:(id)arg2 sourceStates:(id)arg3 destinationImage:(id)arg4;

@end
