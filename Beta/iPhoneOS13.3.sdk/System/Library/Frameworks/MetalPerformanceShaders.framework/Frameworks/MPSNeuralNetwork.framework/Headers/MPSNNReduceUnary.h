/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNReduceUnary : MPSCNNKernel

{
    CDStruct_1e3be3a8 _clipRectSource;
    int _reduceOp;
    float _weightValue;
}

@property (nonatomic) CDStruct_1e3be3a8 clipRectSource;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 reduceOperation:(int)arg2;
- (void)setWeightValue:(float)arg1;

@end
