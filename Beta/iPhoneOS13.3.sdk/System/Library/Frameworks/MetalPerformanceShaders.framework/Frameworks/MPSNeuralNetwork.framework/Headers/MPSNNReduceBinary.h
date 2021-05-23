/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNBinaryKernel.h>

@interface MPSNNReduceBinary : MPSCNNBinaryKernel

{
    CDStruct_1e3be3a8 _clipRectPrimarySource;
    CDStruct_1e3be3a8 _secondarySourceClipRect;
    int _reduceOp;
    CDStruct_1e3be3a8 _primarySourceClipRect;
}

@property (nonatomic) CDStruct_1e3be3a8 primarySourceClipRect;
@property (nonatomic) CDStruct_1e3be3a8 secondarySourceClipRect;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 reduceOperation:(int)arg2;
- (int)reduceOp;

@end
