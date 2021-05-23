/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSString;

@protocol MTLComputePipelineState;

@interface CVAFilterRenderStagelight : NSObject

{
    id <MTLComputePipelineState> _renderingStageLightKernel_bothCubes;
    id <MTLComputePipelineState> _renderingStageLightKernel_proxyCube;
    id <MTLComputePipelineState> _renderingStageLightKernel_cube;
    id <MTLComputePipelineState> _renderingStageLightKernel_noCube;
    NSString *_label;
}

@property (readonly) NSString *label;

- (id)initWithDevice:(id)arg1 library:(id)arg2 error:(id *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstYTex:(id)arg4 dstUVTex:(id)arg5 stageLightProxyLut:(id)arg6 stageLightLut:(id)arg7 blackBackgroundIntensity:(float)arg8 vignetteIntensity:(float)arg9;

@end
