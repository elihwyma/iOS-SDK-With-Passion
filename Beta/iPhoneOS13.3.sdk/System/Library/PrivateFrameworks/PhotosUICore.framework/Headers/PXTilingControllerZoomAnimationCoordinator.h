/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXZoomAnimationCoordinator.h>

@class PXTilingController;

@protocol PXTilingControllerZoomAnimationCoordinatorDelegate;

@interface PXTilingControllerZoomAnimationCoordinator : PXZoomAnimationCoordinator

{
    PXTilingController *_tilingController;
    id _context;
    id <PXTilingControllerZoomAnimationCoordinatorDelegate> _delegate;
}

@property (nonatomic, readonly) PXTilingController *tilingController;
@property (nonatomic, readonly) id context;
@property (weak, nonatomic) id <PXTilingControllerZoomAnimationCoordinatorDelegate> delegate;

- (id)init;
- (void)moveTile:(id)arg1 toView:(struct NSObject *)arg2 restorationBlock:(out CDUnknownBlockType *)arg3;
- (void)animateContentForEndPointType:(long long)arg1 withZoomAnimationContext:(id)arg2;
- (void)animateContentForEndPointType:(long long)arg1 inView:(struct NSObject *)arg2 withLayerType:(long long)arg3 zoomAnimationContext:(id)arg4;
- (id)initWithTilingController:(id)arg1 context:(id)arg2;
- (void)_animateTilesPassingTest:(CDUnknownBlockType)arg1 forEndPointType:(long long)arg2 withZoomTransitionContext:(id)arg3 tileGeometryTransformer:(CDUnknownBlockType)arg4;
- (void)_animateTilesPassingTest:(CDUnknownBlockType)arg1 fromEndPointType:(long long)arg2 toEndPointType:(long long)arg3 alpha:(double)arg4 transform:(id)arg5 withOptions:(id)arg6 tileGeometryTransformer:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;

@end
