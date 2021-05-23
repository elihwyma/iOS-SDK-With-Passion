/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol GGLRenderQueueSource;

__attribute__((visibility("hidden")))
@interface GGLImageCanvas : NSObject

{
    struct RenderTargetFormat _resolvedRenderTargetFormat;
    struct CGSize _size;
    double _contentScale;
    struct CGRect _bounds;
    _Bool _canMakeImage;
    _Bool _recreateRenderTarget;
    _Bool _allowAlpha;
    id <GGLRenderQueueSource> _renderSource;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture>> _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _flippedRenderTarget;
    struct unique_ptr<(anonymous namespace)::YFlipPass, std::__1::default_delete<(anonymous namespace)::YFlipPass>> _yFlipPass;
    struct RenderTargetFormat _format;
    struct shared_ptr<ggl::Device> _device;
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
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture>> _colorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    _Bool _useMultisampling;
    struct unique_ptr<ggl::Texture, std::__1::default_delete<ggl::Texture>> _msaaResolveBuffer;
    unsigned long long _signpostId;
}

@property (nonatomic) _Bool allowAlpha;
@property (nonatomic, readonly) struct RenderTarget *renderTarget;
@property (nonatomic, readonly) struct RenderTarget *finalRenderTarget;
@property (nonatomic, readonly) struct Texture2D *imageTexture;
@property (nonatomic, readonly) struct RenderTargetFormat resolvedRenderTargetFormat;
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
@property (nonatomic, readonly) float averageFPS;

- (void)dealloc;
- (id).cxx_construct;
- (shared_ptr_fa6aa836)bitmapData;
- (struct Texture *)finalSurface;
- (void)willDrawView;
- (struct RenderTarget *)_internalRenderTarget;
- (void)didDrawView;
- (void)destroyRenderTarget;
- (void)createRenderTarget;
- (_Bool)hasRenderTarget;
- (void)renderWithTimestamp:(double)arg1 completion:(function_84aba934)arg2;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMultisampling:(_Bool)arg3 taskContext:(const shared_ptr_e963992e *)arg4 device:(struct Device *)arg5 signpostId:(unsigned long long)arg6;

@end
