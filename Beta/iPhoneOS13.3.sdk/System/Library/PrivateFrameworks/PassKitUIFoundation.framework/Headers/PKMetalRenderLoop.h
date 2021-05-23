/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <PassKitUIFoundation/PKRenderLoop.h>

@class CALayer, CAMetalLayer;

@protocol CAMetalDrawable, MTLDevice, PKMetalRenderLoopDelegate;

@interface PKMetalRenderLoop : PKRenderLoop

{
    CAMetalLayer *_layer;
    _Bool _drawableSizeDirty;
    id <CAMetalDrawable> _currentDrawable;
    unsigned long long _pixelFormat;
    id <MTLDevice> _device;
    struct CGSize _drawableSize;
}

@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) _Bool framebufferOnly;
@property (nonatomic) struct CGSize drawableSize;
@property (weak, nonatomic) id <PKMetalRenderLoopDelegate> delegate;

- (id)init;
- (void)invalidate;
- (_Bool)isDrawableAvailable;
- (id)currentDrawable;
- (id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2;
- (void)_willDraw;
- (void)_didDraw;
- (_Bool)_subclassPreferredPauseState;

@end
