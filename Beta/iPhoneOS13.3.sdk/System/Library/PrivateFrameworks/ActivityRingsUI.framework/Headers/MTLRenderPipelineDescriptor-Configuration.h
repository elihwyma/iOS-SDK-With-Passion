/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Metal/MTLRenderPipelineDescriptor.h>

@interface MTLRenderPipelineDescriptor (Configuration)

- (void)configureForSourceOverBlending;
- (void)configureForAlphaReductionBlending;
- (void)configureForAdditiveBlending;

@end
