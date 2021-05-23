/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNPooling.h>

@interface MPSCNNPoolingAverage : MPSCNNPooling

{
    unsigned long long _zeroPadSizeX;
    unsigned long long _zeroPadSizeY;
}

@property (nonatomic) unsigned long long zeroPadSizeX;
@property (nonatomic) unsigned long long zeroPadSizeY;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (_Bool)isResultStateReusedAcrossBatch;
- (id)newPlugin;
- (_Bool)pluginSupportsBatchEncode;

@end
