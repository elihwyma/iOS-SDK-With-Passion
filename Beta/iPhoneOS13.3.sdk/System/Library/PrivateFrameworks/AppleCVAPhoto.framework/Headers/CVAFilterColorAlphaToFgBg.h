/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSString;

@protocol MTLComputePipelineState;

@interface CVAFilterColorAlphaToFgBg : NSObject

{
    id <MTLComputePipelineState> _splitFgBgKernel_rgba;
    id <MTLComputePipelineState> _splitBgKernel_rgba;
    id <MTLComputePipelineState> _splitFgKernel_rgba;
    NSString *_label;
}

@property (readonly) NSString *label;

- (id)initWithDevice:(id)arg1 library:(id)arg2 error:(id *)arg3;
- (void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4 dstBackgroundTex:(id)arg5;
- (void)encodeToCommandBuffer:(id)arg1 srcColorTex:(id)arg2 srcAlphaTex:(id)arg3 dstForegroundTex:(id)arg4;

@end
