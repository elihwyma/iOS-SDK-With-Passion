/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNArithmetic.h>

@interface MPSNNCompare : MPSCNNArithmetic

{
    float _threshold;
    unsigned long long _comparisonType;
}

@property (nonatomic) unsigned long long comparisonType;
@property (nonatomic) float threshold;

- (id)initWithDevice:(id)arg1;

@end
