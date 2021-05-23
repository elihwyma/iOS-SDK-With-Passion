/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@class MPSCNNLossDescriptor;

@protocol MPSNNLossCallback;

@interface MPSNNLossGradientNode : MPSNNGradientFilterNode

{
    unsigned int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    unsigned long long _numberOfClasses;
    float _epsilon;
    float _delta;
    MPSCNNLossDescriptor *_descriptor;
    _Bool _isLabelsGradientFilter;
    id <MPSNNLossCallback> _propertyCallBack;
}

@property (nonatomic, readonly) unsigned int lossType;
@property (nonatomic, readonly) int reductionType;
@property (nonatomic, readonly) unsigned long long numberOfClasses;
@property (nonatomic, readonly) float weight;
@property (nonatomic, readonly) float labelSmoothing;
@property (nonatomic, readonly) float epsilon;
@property (nonatomic, readonly) float delta;
@property (nonatomic, readonly) _Bool isLabelsGradientFilter;
@property (retain, nonatomic) id <MPSNNLossCallback> propertyCallBack;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 weights:(id)arg4 gradientState:(id)arg5 lossDescriptor:(id)arg6 isLabelsGradientFilter:(_Bool)arg7;
+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(_Bool)arg6;
+ (id)nodeWithSources:(id)arg1 gradientState:(id)arg2 lossDescriptor:(id)arg3 isLabelsGradientFilter:(_Bool)arg4;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (id)gradientFilterWithSources:(id)arg1;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 weights:(id)arg4 gradientState:(id)arg5 lossDescriptor:(id)arg6 isLabelsGradientFilter:(_Bool)arg7;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 labels:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(_Bool)arg6;
- (id)initWithSources:(id)arg1 gradientState:(id)arg2 lossDescriptor:(id)arg3 isLabelsGradientFilter:(_Bool)arg4;

@end
