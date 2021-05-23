/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKImageCanvas.h>

@class NSString, VKCamera;

__attribute__((visibility("hidden")))
@interface VKGlobeImageCanvas : VKImageCanvas

{
    struct GlobeView *_globeView;
    VKCamera *_camera;
    struct unique_ptr<md::GlobeAdapter, std::__1::default_delete<md::GlobeAdapter>> _globeAdapter;
    struct LoadingStatusTracker *_loadingStatusTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)setMapType:(int)arg1;
- (void)setMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (void)_updateViewTransform;
- (id)initWithMapEngine:(struct MapEngine *)arg1;
- (void)cancelTileRequests;
- (void)didLayout;
- (void)_updateViewport;
- (void)_updateCameraFromGlobe;

@end
