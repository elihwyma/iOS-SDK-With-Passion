/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <CAEAGLLayer.h>

__attribute__((visibility("hidden")))
@interface WebGLLayer : CAEAGLLayer

{
    struct GraphicsContext3D *_context;
    float _devicePixelRatio;
}

@property (nonatomic) struct GraphicsContext3D *context;

- (void)display;
- (id)initWithGraphicsContext3D:(struct GraphicsContext3D *)arg1;
- (struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg1;

@end
