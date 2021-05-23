/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

@class MISSING_TYPE;

@interface MPSNDArrayMatrixMultiplication

{
    double _alpha;
    double _beta;
}

@property (nonatomic) double alpha;
@property (nonatomic) double beta;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 sourceCount:(unsigned long long)arg2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;
- (unsigned long long)maxSupportedDimensionsForSourceArrays:(id)arg1 destinationArray:(id)arg2;
- (MISSING_TYPE *)dimensionsNotToBeBroadcast;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;

@end
