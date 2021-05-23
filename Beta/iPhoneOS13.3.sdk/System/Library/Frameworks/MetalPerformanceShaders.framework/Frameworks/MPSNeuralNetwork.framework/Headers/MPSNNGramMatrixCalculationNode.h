/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@protocol MPSNNGramMatrixCallback;

@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode

{
    float _alpha;
    id <MPSNNGramMatrixCallback> _propertyCallBack;
}

@property (nonatomic, readonly) float alpha;
@property (retain, nonatomic) id <MPSNNGramMatrixCallback> propertyCallBack;

+ (id)nodeWithSource:(id)arg1;
+ (id)nodeWithSource:(id)arg1 alpha:(float)arg2;

- (void)dealloc;
- (id)initWithSource:(id)arg1;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 alpha:(float)arg2;

@end
