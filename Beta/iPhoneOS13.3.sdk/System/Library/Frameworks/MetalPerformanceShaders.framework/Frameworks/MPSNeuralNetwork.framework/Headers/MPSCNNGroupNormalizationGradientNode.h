/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>

@class NSString;

@interface MPSCNNGroupNormalizationGradientNode : MPSNNGradientFilterNode

{
    unsigned long long _trainingStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long trainingStyle;

+ (id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;

- (struct FilterGraphNode *)newFilterNode;
- (id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3;
- (id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2;

@end
