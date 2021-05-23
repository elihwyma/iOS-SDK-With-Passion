/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

@class MISSING_TYPE;

@interface MPSNDArraySoftMax

{
    unsigned long long _axis;
}

@property (nonatomic) unsigned long long axis;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 axis:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;
- (MISSING_TYPE *)dimensionsToBeRetained;
- (id)reshapeFitToTileToCommandBuffer:(id)arg1 currentSource:(id)arg2 kernelDimension:(unsigned long long)arg3 dimensionsToBeRetained: /* Error: Ran out of types for this method. */;

@end
