/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel

@property (nonatomic) _Bool perservesAlpha;

+ (id)kernelWithString:(id)arg1;
+ (id)SDOFV2MetalKernelNamed:(id)arg1;
+ (id)SDOFV3MetalKernelNamed:(id)arg1;

- (id)initWithString:(id)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 arguments:(id)arg2;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (void)setCanReduceOutputChannels:(_Bool)arg1;
- (void)setPreservesRange:(_Bool)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (id)applyWithExtent:(struct CGRect)arg1 arguments:(id)arg2 options:(id)arg3;
- (_Bool)canReduceOutputChannels;
- (id)_initWithReflection:(struct CIKernelReflection)arg1 constants:(id)arg2;
- (_Bool)preservesRange;

@end
