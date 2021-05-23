/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

@interface MPSNDArrayBinaryKernel

@property (nonatomic) CDStruct_df9f7954 primaryOffsets;
@property (nonatomic) unsigned long long primaryEdgeMode;
@property (nonatomic) CDStruct_27bd5d57 primaryKernelSizes;
@property (nonatomic) CDStruct_df9f7954 primaryStrides;
@property (nonatomic) CDStruct_27bd5d57 primaryDilationRates;
@property (nonatomic) CDStruct_df9f7954 secondaryOffsets;
@property (nonatomic) unsigned long long secondaryEdgeMode;
@property (nonatomic) CDStruct_27bd5d57 secondaryKernelSizes;
@property (nonatomic) CDStruct_df9f7954 secondaryStrides;
@property (nonatomic) CDStruct_27bd5d57 secondaryDilationRates;

- (id)initWithDevice:(id)arg1;
- (id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 destinationArray:(id)arg4;
- (id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id *)arg4 outputStateIsTemporary:(_Bool)arg5;
- (void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 resultState:(id)arg4 destinationArray:(id)arg5;

@end
