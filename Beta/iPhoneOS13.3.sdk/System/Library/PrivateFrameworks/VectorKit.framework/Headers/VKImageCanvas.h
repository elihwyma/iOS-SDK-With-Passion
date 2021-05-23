/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class GEOMapRegion, VKCameraController;

@protocol MDRenderTarget;

__attribute__((visibility("hidden")))
@interface VKImageCanvas : NSObject

{
    struct _retain_ptr<VKCameraController *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> {
        CDUnknownFunctionPointerType *_vptr$_retain_ptr;
        VKCameraController *_obj;
        struct _retain_objc _retain;
        struct _release_objc _release;
    } _cameraController;
    shared_ptr_e963992e _taskContext;
    int _mapType;
    struct DisplayStyle _mapDisplayStyle;
    id <MDRenderTarget> _displayTarget;
    struct Renderer {
        CDUnknownFunctionPointerType *;
        shared_ptr_e963992e;
        struct unique_ptr<md::PassList, std::__1::default_delete<md::PassList>>;
        struct unique_ptr<md::RenderTargetRegistry, std::__1::default_delete<md::RenderTargetRegistry>>;
        struct vector<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>, std::__1::allocator<std::__1::unique_ptr<md::RenderLayer, std::__1::default_delete<md::RenderLayer>>>>;
        struct linear_map<md::CommandBufferLocation, md::RenderLayer *, std::__1::equal_to<md::CommandBufferLocation>, std::__1::allocator<std::__1::pair<md::CommandBufferLocation, md::RenderLayer *>>, std::__1::vector<std::__1::pair<md::CommandBufferLocation, md::RenderLayer *>, std::__1::allocator<std::__1::pair<md::CommandBufferLocation, md::RenderLayer *>>>>;
        struct RunLoopController *;
        struct MapEngine *;
    } *_mapRenderer;
    struct LayoutContext *_layoutContext;
    struct RunLoopController *_runLoopController;
    struct VKEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) shared_ptr_e963992e taskContext;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) double pitch;
@property (nonatomic, readonly) double yaw;
@property (nonatomic) int mapType;
@property (nonatomic) struct DisplayStyle mapDisplayStyle;
@property (nonatomic) struct VKEdgeInsets edgeInsets;

- (void)dealloc;
- (id).cxx_construct;
- (void)didReceiveMemoryWarning:(_Bool)arg1;
- (void)cancelLoad;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)clearScene;
- (void)updateWithTimestamp:(double)arg1;
- (id)initWithMapEngine:(struct MapEngine *)arg1;
- (void)cancelTileRequests;
- (void)loadScene;
- (void)renderSceneWithEngine:(struct MapEngine *)arg1 completion:(function_84aba934)arg2;
- (void)didLayout;

@end
