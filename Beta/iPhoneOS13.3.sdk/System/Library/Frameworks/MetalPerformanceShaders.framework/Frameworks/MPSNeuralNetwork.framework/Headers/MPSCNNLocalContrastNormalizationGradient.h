/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNGradientKernel.h>

@interface MPSCNNLocalContrastNormalizationGradient : MPSCNNGradientKernel

{
    float _alpha;
    float _beta;
    float _delta;
    float _p0;
    float _pm;
    float _ps;
}

@property (nonatomic) float alpha;
@property (nonatomic) float beta;
@property (nonatomic) float delta;
@property (nonatomic) float p0;
@property (nonatomic) float pm;
@property (nonatomic) float ps;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
