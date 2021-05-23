/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CAMetalLayer.h>

__attribute__((visibility("hidden")))
@interface WebGPULayer : CAMetalLayer

{
    struct GPUSwapChain *_swapChain;
    float _deviceScaleFactor;
}

@property (nonatomic) struct GPUSwapChain *swapChain;

- (id)init;
- (struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg1;

@end
