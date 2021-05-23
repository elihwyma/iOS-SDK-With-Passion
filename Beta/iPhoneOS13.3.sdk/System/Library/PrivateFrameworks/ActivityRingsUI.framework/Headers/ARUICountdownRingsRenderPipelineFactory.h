/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

@class ARUIRingsAlphaReductionState, ARUIRingsCountdownState, ARUIRingsEmptyState;

__attribute__((visibility("hidden")))
@interface ARUICountdownRingsRenderPipelineFactory

{
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsCountdownState *_countdownState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}

- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)pipelineForConfiguration:(id)arg1;
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;

@end
