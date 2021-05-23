/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIKernel.h>

@interface CIWarpKernel : CIKernel

@property (nonatomic) _Bool perservesAlpha;
@property (nonatomic) _Bool preservesRange;

+ (id)kernelWithString:(id)arg1;

- (id)initWithString:(id)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 inputImage:(id)arg3 arguments:(id)arg4;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3;
- (void)setCanReduceOutputChannels:(_Bool)arg1;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 arguments:(id)arg3 options:(id)arg4;
- (_Bool)canReduceOutputChannels;
- (id)_initWithReflection:(struct CIKernelReflection)arg1 constants:(id)arg2;
- (struct CGRect)autogenerateROI:(struct WarpKernel *)arg1 args:(struct SerialObjectPtrArray *)arg2 arguments:(id)arg3 extent:(struct CGRect)arg4;
- (id)applyWithExtent:(struct CGRect)arg1 roiCallback:(CDUnknownBlockType)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5;
- (id)generateGeneralKernelFromWarpKernel:(struct WarpKernel *)arg1 args:(struct SerialObjectPtrArray *)arg2;
- (id)generateMainFromWarpKernel:(struct WarpKernel *)arg1 args:(struct SerialObjectPtrArray *)arg2;
- (id)makeGridImage:(struct CGRect)arg1 nx:(int)arg2 ny:(int)arg3;

@end
