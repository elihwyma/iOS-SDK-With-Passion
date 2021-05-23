/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <QuartzCore/CAMetalLayer.h>

@protocol GGLLayerDelegate;

__attribute__((visibility("hidden")))
@interface MetalLayer : CAMetalLayer

{
    id <GGLLayerDelegate> _delegate;
    shared_ptr_94286ce0 _device;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _texture;
    _Bool _sRGB;
    struct CGSize _backingSize;
}

@property (nonatomic, readonly) struct CGSize backingSize;
@property (nonatomic, readonly) _Bool sRGB;
@property id <GGLLayerDelegate> renderDelegate;
@property (readonly) int backingFormat;

- (id).cxx_construct;
- (void)didEnterBackground;
- (void)layoutSublayers;
- (void)display;
- (void)onTimerFired:(double)arg1;
- (id)initWithDevice:(shared_ptr_94286ce0)arg1 sRGB:(_Bool)arg2;
- (void)_createTexture;
- (id)_updateDrawable;
- (void)_onTimerFired:(double)arg1 withPresent:(CDUnknownBlockType)arg2;
- (void)onTimerFired:(double)arg1 presentAtTime:(double)arg2;
- (void)onTimerFired:(double)arg1 presentAfterMinimumDuration:(double)arg2;

@end
