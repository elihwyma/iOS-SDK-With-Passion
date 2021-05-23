/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSString;

@protocol MTLComputePipelineState;

@interface CVAFilterRenderComposite : NSObject

{
    id <MTLComputePipelineState> _renderingCompositeFixUpAddNoiseKernel;
    id <MTLComputePipelineState> _renderingCompositeFixupAndBGColorMapKernel;
    id <MTLComputePipelineState> _renderingCompositeFixupAndFGColorMapKernel;
    id <MTLComputePipelineState> _renderingCompositeFixupAndColorMapKernel;
    NSString *_label;
}

@property (readonly) NSString *label;

- (id)initWithDevice:(id)arg1 library:(id)arg2 error:(id *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 srcForegroundTex:(id)arg2 srcBackgroundTex:(id)arg3 srcCocTex:(id)arg4 dstYTex:(id)arg5 dstUVTex:(id)arg6 fgColorLut:(id)arg7 bgColorLut:(id)arg8 frameNumber:(unsigned int)arg9 seedGeneratorFactor:(unsigned int)arg10 noiseBits:(int)arg11 noiseBitsFactor:(float)arg12 cubeIntensity:(float)arg13 maxBlurRadius:(optional_6c86f56e)arg14;

@end
