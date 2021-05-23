/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class CALayer, NSString, VKSharedResources;

@protocol GGLLayer, GGLRenderQueueSource;

__attribute__((visibility("hidden")))
@interface MDDisplayLayer : NSObject

{
    CALayer<GGLLayer> *_layer;
    id <GGLRenderQueueSource> _renderSource;
    shared_ptr_e963992e _taskContext;
    struct RenderQueue *_activeRenderQueue;
    struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKSharedResources *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _sharedResources;
    struct deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()>>> _completionHandlers;
    struct RenderTargetFormat _format;
    struct Device {
        int;
        struct shared_ptr<ggl::Device>;
        struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources>>;
    } *_device;
    struct Renderer {
        CDUnknownFunctionPointerType *;
        struct Device *;
        unsigned long long;
        unsigned long long;
        unsigned long long;
        _Bool;
        float;
        unsigned long long;
        struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, geo::StdAllocator<std::__1::shared_ptr<ggl::DebugRenderer>, ggl::Allocator>>;
        struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue>>;
        struct shared_ptr<ggl::CommonLibrary>;
        struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences>>;
        struct Texture2D *;
        struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer>>;
    } *_renderer;
    struct mutex _debugConsoleManagerCreationLock;
    struct unique_ptr<md::DebugConsoleManager, std::__1::default_delete<md::DebugConsoleManager>> _debugConsoleManager;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencil;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaTexture;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _colorTextures[3];
    _Bool _useMultisampling;
    _Bool _requiresMultisampling;
    struct CGContext *_snapshotContext;
    _Bool _readPixels;
    _Bool _shouldRasterize;
    struct CGRect _bounds;
    double _contentsScale;
    unsigned long long _signpostId;
}

@property (nonatomic, readonly) CALayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double contentScale;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) id <GGLRenderQueueSource> renderSource;
@property (nonatomic, readonly) _Bool multiSample;
@property (nonatomic, readonly) const struct RenderTargetFormat *format;
@property (nonatomic, readonly) struct Renderer *renderer;
@property (nonatomic, readonly) _Bool shouldRasterize;
@property (nonatomic, readonly) struct CGSize sizeInPixels;
@property (nonatomic, readonly) struct RenderTarget *finalRenderTarget;
@property (nonatomic, readonly) float averageFPS;

- (void)dealloc;
- (id).cxx_construct;
- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (shared_ptr_fa6aa836)bitmapData;
- (void)didPresent;
- (struct DebugConsole *)debugConsoleForId:(int)arg1;
- (struct RenderQueue *)renderQueueForTimestamp:(double)arg1;
- (void)destroyRenderTarget;
- (void)createRenderTarget;
- (_Bool)hasRenderTarget;
- (void)renderWithTimestamp:(double)arg1 completion:(function_84aba934)arg2;
- (_Bool)isDelayedRenderQueueConsumptionSupported;
- (id)initWithContentScale:(double)arg1 shouldRasterize:(_Bool)arg2 taskContext:(const shared_ptr_e963992e *)arg3 device:(struct Device *)arg4 sharedResources:(id)arg5 signpostId:(unsigned long long)arg6;
- (void)enablePerformanceHUD:(id)arg1;
- (void)disablePerformanceHUD:(id)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (struct RenderQueue *)_renderQueueForTimestamp:(double)arg1 prepareHandler:(CDUnknownBlockType)arg2;
- (void)drawToTexture:(struct Texture *)arg1 withRenderQueue:(struct RenderQueue *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prepareTexture:(struct Texture *)arg1;
- (void)_didReadPixels:(shared_ptr_fa6aa836 *)arg1;
- (void)drawToTexture:(struct Texture *)arg1 withRenderQueue:(struct RenderQueue *)arg2;
- (void)willPresent;
- (void)willUpdateFrameTexture;
- (void)didUpdateFrameTexture;

@end
