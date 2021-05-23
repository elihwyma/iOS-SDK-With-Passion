/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@class MPSNNReduceUnary;

@interface MPSCNNArithmeticGradient : MPSCNNGradientKernel

{
    float _primaryScale;
    float _secondaryScale;
    float _bias;
    float _minimumValue;
    float _maximumValue;
    unsigned long long _secondaryStrideInFeatureChannels;
    int _arithmeticType;
    _Bool _isSecondarySourceFilter;
    MPSNNReduceUnary *_reduceRows;
    MPSNNReduceUnary *_reduceColumns;
    MPSNNReduceUnary *_reduceFeatureChannels;
}

@property (nonatomic) float primaryScale;
@property (nonatomic) float secondaryScale;
@property (nonatomic) float bias;
@property (nonatomic) unsigned long long secondaryStrideInFeatureChannels;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;
@property (nonatomic, readonly) _Bool isSecondarySourceFilter;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (unsigned long long)maxBatchSize;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (void)setSecondaryStrideInPixelsX:(unsigned long long)arg1;
- (void)setSecondaryStrideInPixelsY:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 arithmeticType:(int)arg2 isSecondarySourceFilter:(_Bool)arg3;

@end
