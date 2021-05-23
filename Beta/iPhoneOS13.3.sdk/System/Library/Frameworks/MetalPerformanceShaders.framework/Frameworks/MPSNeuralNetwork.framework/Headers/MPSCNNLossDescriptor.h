/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <NSObject.h>

#import <MPSNeuralNetwork/Swift-Protocol.h>

@interface MPSCNNLossDescriptor : NSObject <Swift>

{
    unsigned int _lossType;
    int _reductionType;
    float _weight;
    float _labelSmoothing;
    unsigned long long _numberOfClasses;
    float _epsilon;
    float _delta;
}

@property (nonatomic) unsigned int lossType;
@property (nonatomic) int reductionType;
@property (nonatomic) float weight;
@property (nonatomic) float labelSmoothing;
@property (nonatomic) unsigned long long numberOfClasses;
@property (nonatomic) float epsilon;
@property (nonatomic) float delta;

+ (id)cnnLossDescriptorWithType:(unsigned int)arg1 reductionType:(int)arg2;

- (void)dealloc;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
