/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class ARSession, VKCamera, VKCameraController;

@protocol MDMapControllerDelegate, MDRenderTarget;

__attribute__((visibility("hidden")))
@interface VKScreenCanvas : NSObject

{
    struct MapEngine *_mapEngine;
    struct RunLoopController *_runLoopController;
    struct AnimationRunner *_animationRunner;
    shared_ptr_e963992e _taskContext;
    VKCamera *_camera;
    id <MDRenderTarget> _displayTarget;
    _Bool _userIsGesturing;
    VKCameraController *_cameraController;
    struct VKEdgeInsets _edgeInsets;
    struct VKEdgeInsets _fullyOccludedEdgeInsets;
    _Bool _deallocing;
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
    id <MDMapControllerDelegate> _mapDelegate;
    struct PerspectiveView<double> _view;
    ARSession *_arSession;
}

@property (nonatomic, readonly) VKCamera *camera;
@property (nonatomic, readonly) struct MapEngine *mapEngine;
@property (nonatomic) struct VKEdgeInsets edgeInsets;
@property (nonatomic) struct VKEdgeInsets fullyOccludedEdgeInsets;
@property (nonatomic) id <MDMapControllerDelegate> mapDelegate;
@property (nonatomic, getter=isGesturing) _Bool gesturing;

- (void)dealloc;
- (id).cxx_construct;
- (void)setContentsScale:(double)arg1;
- (long long)tileSize;
- (id)viewportInfo;
- (void)didPresent;
- (void)runAnimation:(id)arg1;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1;
- (void)updateCameraForFrameResize;
- (void)didReceiveMemoryWarning:(_Bool)arg1 beAggressive:(_Bool)arg2;
- (id)cameraController;
- (id)initWithMapEngine:(struct MapEngine *)arg1 inBackground:(_Bool)arg2;
- (void)transferStateFromCanvas:(id)arg1;
- (void)setCameraController:(id)arg1;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (_Bool)wantsTimerTick;
- (void)puckAnimator:(id)arg1 updatedPosition:(const Coordinate3D_bc242218 *)arg2 course:(const Unit_3d259e8a *)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const Coordinate3D_bc242218 *)arg2;
- (void)enterARSessionAtCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)exitARSession;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;

@end
