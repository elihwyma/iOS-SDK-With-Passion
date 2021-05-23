/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNDArray.framework/MPSNDArray
 */

@interface MPSNDArrayBinarySecondaryGradientKernel

- (id)initWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 sourceGradient:(id)arg4 gradientState:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 primarySourceArray:(id)arg2 secondarySourceArray:(id)arg3 sourceGradient:(id)arg4 gradientState:(id)arg5 destinationArray:(id)arg6;

@end
