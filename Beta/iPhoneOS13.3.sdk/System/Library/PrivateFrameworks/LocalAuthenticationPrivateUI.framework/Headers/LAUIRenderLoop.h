/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, CALayer, CAMetalLayer;

@protocol CAMetalDrawable, LAUIRenderLoopDelegate, MTLDevice;

__attribute__((visibility("hidden")))
@interface LAUIRenderLoop : NSObject

{
    CAMetalLayer *_layer;
    CADisplayLink *_display_link;
    _Bool _effective_paused;
    _Bool _drawable_size_dirty;
    _Bool _invalidated;
    _Bool _background;
    _Bool _drawing;
    id <CAMetalDrawable> _current_drawable;
    _Bool _in_application_context;
    _Bool _paused;
    unsigned long long _pixel_format;
    long long _preferred_fps;
    id <MTLDevice> _device;
    id <LAUIRenderLoopDelegate> _delegate;
    struct CGSize _drawable_size;
}

@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) _Bool inApplicationContext;
@property (nonatomic) _Bool framebufferOnly;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) _Bool paused;
@property (nonatomic) struct CGSize drawableSize;
@property (weak, nonatomic) id <LAUIRenderLoopDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (_Bool)isDrawableAvailable;
- (void)attachToScreen:(id)arg1;
- (id)currentDrawable;
- (void)_draw:(id)arg1;
- (void)_updateEffectivePausedState;
- (id)initWithPixelFormat:(unsigned long long)arg1 forDevice:(id)arg2;

@end
