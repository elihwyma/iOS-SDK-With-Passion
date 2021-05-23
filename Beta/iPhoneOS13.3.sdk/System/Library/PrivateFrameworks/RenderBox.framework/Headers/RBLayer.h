/*
 Image: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
 */

#import <QuartzCore/CALayer.h>

@class NSTimer, RBDevice;

@interface RBLayer : CALayer

{
    struct objc_ptr<RBDevice *> _device;
    _Bool _disableAsync;
    _Bool _pendingFlush;
    _Bool _pendingCollection;
    NSTimer *_collectionTimer;
    struct unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>> _drawable;
    struct objc_ptr<NSObject<OS_dispatch_semaphore>*> _semaphore;
    struct cf_ptr<_CAImageQueue *> _imageQueue;
    struct vector<RB::refcounted_ptr<(anonymous namespace)::Surface>, std::__1::allocator<RB::refcounted_ptr<(anonymous namespace)::Surface>>> _surfaces;
    _Bool _rendersAsynchronously;
    _Bool _clearsBackground;
    int _colorMode;
    CDStruct_0b1c536a _clearColor;
}

@property (retain, nonatomic) RBDevice *device;
@property (nonatomic) _Bool rendersAsynchronously;
@property (nonatomic) int colorMode;
@property (nonatomic) _Bool clearsBackground;
@property (nonatomic) CDStruct_0b1c536a clearColor;
@property (nonatomic, readonly, getter=isDrawableAvailable) _Bool drawableAvailable;

+ (id)defaultValueForKey:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
- (void)display;
- (void)rb_init;
- (void)waitUntilAsyncRenderingCompleted;
- (void)drawInDisplayList:(id)arg1;
- (void)_scheduleCollection;

@end
