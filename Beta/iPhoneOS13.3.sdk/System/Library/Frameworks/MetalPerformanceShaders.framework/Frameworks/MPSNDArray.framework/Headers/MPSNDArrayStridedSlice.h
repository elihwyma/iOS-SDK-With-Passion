/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

@interface MPSNDArrayStridedSlice

@property (nonatomic) CDStruct_df9f7954 strides;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)initWithDevice:(id)arg1;
- (unsigned long long)kernelDimensionalityForSourceArrays:(id)arg1;
- (id)destinationArrayDescriptorForSourceArrays:(id)arg1 sourceState:(id)arg2;

@end
