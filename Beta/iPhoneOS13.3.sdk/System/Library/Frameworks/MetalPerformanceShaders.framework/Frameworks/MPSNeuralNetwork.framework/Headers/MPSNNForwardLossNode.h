/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@class MPSCNNLossDescriptor;

@protocol MPSNNLossCallback;

@interface MPSNNForwardLossNode : MPSNNFilterNode

{
    unsigned int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    unsigned long long _numberOfClasses;
    float _epsilon;
    float _delta;
    MPSCNNLossDescriptor *_descriptor;
    id <MPSNNLossCallback> _propertyCallBack;
}

@property (nonatomic, readonly) unsigned int lossType;
@property (nonatomic, readonly) int reductionType;
@property (nonatomic, readonly) unsigned long long numberOfClasses;
@property (nonatomic, readonly) float weight;
@property (nonatomic, readonly) float labelSmoothing;
@property (nonatomic, readonly) float epsilon;
@property (nonatomic, readonly) float delta;
@property (retain, nonatomic) id <MPSNNLossCallback> propertyCallBack;

+ (id)nodeWithSource:(id)arg1 labels:(id)arg2 weights:(id)arg3 lossDescriptor:(id)arg4;
+ (id)nodeWithSource:(id)arg1 labels:(id)arg2 lossDescriptor:(id)arg3;
+ (id)nodeWithSources:(id)arg1 lossDescriptor:(id)arg2;

- (void)dealloc;
- (struct FilterGraphNode *)newFilterNode;
- (id)gradientFilterWithSource:(id)arg1;
- (Class)gradientClass;
- (id)gradientFilterWithSources:(id)arg1;
- (id)gradientFiltersWithSources:(id)arg1;
- (id)initWithSource:(id)arg1 labels:(id)arg2 weights:(id)arg3 lossDescriptor:(id)arg4;
- (id)gradientFiltersWithSource:(id)arg1;
- (id)initWithSource:(id)arg1 labels:(id)arg2 lossDescriptor:(id)arg3;
- (id)initWithSources:(id)arg1 lossDescriptor:(id)arg2;

@end
