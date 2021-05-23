/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNReduceBinary.h>

@interface MPSNNLocalCorrelation : MPSNNReduceBinary

{
    unsigned long long _windowInX;
    unsigned long long _windowInY;
    unsigned long long _strideInX;
    unsigned long long _strideInY;
}

@property (nonatomic) unsigned long long windowInX;
@property (nonatomic) unsigned long long windowInY;
@property (nonatomic) unsigned long long strideInX;
@property (nonatomic) unsigned long long strideInY;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 primaryOffset:(CDStruct_d6af7fc0 *)arg4 secondaryOffset:(CDStruct_d6af7fc0 *)arg5 kernelOffset:(CDStruct_d6af7fc0 *)arg6;
- (id)initWithDevice:(id)arg1 windowInX:(unsigned long long)arg2 windowInY:(unsigned long long)arg3 strideInX:(unsigned long long)arg4 strideInY:(unsigned long long)arg5;

@end
