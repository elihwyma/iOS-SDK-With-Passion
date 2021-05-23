/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSNNFilterNode.h>

@interface MPSCNNNeuronNode : MPSNNFilterNode

{
    int _type;
    float _a;
    float _b;
    float _c;
}

@property (nonatomic, readonly) float a;
@property (nonatomic, readonly) float b;
@property (nonatomic, readonly) float c;

+ (id)nodeWithSource:(id)arg1 descriptor:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)debugDescription;
- (id)descriptor;
- (struct FilterGraphNode *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)arg1 type:(int)arg2 a:(float)arg3 b:(float)arg4 c:(float)arg5;

@end
