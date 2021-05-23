/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSKernel.h>

@interface MPSNNOptimizer : MPSKernel

{
    float _learningRate;
    float _gradientRescale;
    _Bool _applyGradientClipping;
    float _gradientClipMax;
    float _gradientClipMin;
    unsigned long long _regularizationType;
    float _regularizationScale;
}

@property (nonatomic, readonly) float learningRate;
@property (nonatomic, readonly) float gradientRescale;
@property (nonatomic) _Bool applyGradientClipping;
@property (nonatomic, readonly) float gradientClipMax;
@property (nonatomic, readonly) float gradientClipMin;
@property (nonatomic, readonly) float regularizationScale;
@property (nonatomic, readonly) unsigned long long regularizationType;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)setLearningRate:(float)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 optimizerDescriptor:(id)arg2;

@end
