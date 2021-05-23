/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
 */

#import <MPSNeuralNetwork/MPSCNNKernel.h>

@interface MPSNNResizeBilinear : MPSCNNKernel

{
    unsigned long long _resizeWidth;
    unsigned long long _resizeHeight;
    _Bool _alignCorners;
}

@property (nonatomic, readonly) unsigned long long resizeWidth;
@property (nonatomic, readonly) unsigned long long resizeHeight;
@property (nonatomic, readonly) _Bool alignCorners;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)destinationImageDescriptorForSourceImages:(id)arg1 sourceStates:(id)arg2 paddingMethod:(unsigned long long)arg3 sourceOffset:(CDStruct_d6af7fc0 *)arg4;
- (id)initWithDevice:(id)arg1 resizeWidth:(unsigned long long)arg2 resizeHeight:(unsigned long long)arg3 alignCorners:(_Bool)arg4;

@end
