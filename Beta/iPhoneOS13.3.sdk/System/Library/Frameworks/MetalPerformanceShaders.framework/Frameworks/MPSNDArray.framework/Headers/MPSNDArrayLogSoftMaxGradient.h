/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

@class MISSING_TYPE;

@interface MPSNDArrayLogSoftMaxGradient

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

@end
