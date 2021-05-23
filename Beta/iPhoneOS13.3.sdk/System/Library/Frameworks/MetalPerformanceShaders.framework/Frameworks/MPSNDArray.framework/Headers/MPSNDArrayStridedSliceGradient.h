/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

@interface MPSNDArrayStridedSliceGradient

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)initWithDevice:(id)arg1;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceArray:(id)arg2 sourceGradient:(id)arg3 gradientState:(id)arg4 destinationArray:(id)arg5;

@end
