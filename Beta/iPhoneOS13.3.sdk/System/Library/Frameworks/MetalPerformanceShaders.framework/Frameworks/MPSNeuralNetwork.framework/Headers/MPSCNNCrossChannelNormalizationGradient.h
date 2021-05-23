/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNCrossChannelNormalizationGradient : MPSCNNGradientKernel

{
    unsigned long long _kernelSize;
    float _alpha;
    float _beta;
    float _delta;
}

@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic, readonly) unsigned long long kernelSize;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 kernelSize:(unsigned long long)arg2;

@end
