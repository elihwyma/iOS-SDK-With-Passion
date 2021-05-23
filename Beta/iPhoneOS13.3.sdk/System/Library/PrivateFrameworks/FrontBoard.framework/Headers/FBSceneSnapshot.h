/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBScene, FBSceneSnapshotContext, IOSurface, _FBSSnapshot;

@interface FBSceneSnapshot : NSObject

{
    FBScene *_scene;
    FBSceneSnapshotContext *_context;
    _FBSSnapshot *_snapshot;
}

@property (copy, nonatomic, readonly) FBSceneSnapshotContext *context;
@property (nonatomic, readonly) _Bool hasProtectedContent;
@property (nonatomic, readonly) IOSurface *IOSurface;
@property (nonatomic, readonly) IOSurface *fallbackIOSurface;
@property (nonatomic, readonly) struct CGImage *CGImage;

- (_Bool)capture;
- (id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3;
- (struct CGAffineTransform)_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2;
- (id)initWithScene:(id)arg1 snapshotContext:(id)arg2;

@end
