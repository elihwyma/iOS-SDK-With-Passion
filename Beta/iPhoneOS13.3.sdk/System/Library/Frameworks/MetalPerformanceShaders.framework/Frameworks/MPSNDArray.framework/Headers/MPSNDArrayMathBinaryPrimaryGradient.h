/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

#import <MPSNDArray/MPSNDArrayBinaryPrimaryGradientKernel.h>

@interface MPSNDArrayMathBinaryPrimaryGradient : MPSNDArrayBinaryPrimaryGradientKernel

{
    unsigned int _opType;
}

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
