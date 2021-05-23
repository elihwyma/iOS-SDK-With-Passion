/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

@interface MPSNNOptimizerDescriptor : NSObject

{
    float _learningRate;
    float _gradientRescale;
    _Bool _applyGradientClipping;
    float _gradientClipMax;
    float _gradientClipMin;
    unsigned long long _regularizationType;
    float _regularizationScale;
}

@property (nonatomic) float learningRate;
@property (nonatomic) float gradientRescale;
@property (nonatomic) _Bool applyGradientClipping;
@property (nonatomic) float gradientClipMax;
@property (nonatomic) float gradientClipMin;
@property (nonatomic) float regularizationScale;
@property (nonatomic) unsigned long long regularizationType;

+ (id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(unsigned long long)arg3 regularizationScale:(float)arg4;
+ (id)optimizerDescriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(_Bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(unsigned long long)arg6 regularizationScale:(float)arg7;

- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(_Bool)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(unsigned long long)arg6 regularizationScale:(float)arg7;
- (id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(unsigned long long)arg3 regularizationScale:(float)arg4;

@end
