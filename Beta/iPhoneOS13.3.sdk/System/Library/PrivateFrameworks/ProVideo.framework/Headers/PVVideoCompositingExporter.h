/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVVideoCompositing.h>

@interface PVVideoCompositingExporter : PVVideoCompositing

- (id)init;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setupTextureFactories;
- (void)setupEffectScheduler;

@end
