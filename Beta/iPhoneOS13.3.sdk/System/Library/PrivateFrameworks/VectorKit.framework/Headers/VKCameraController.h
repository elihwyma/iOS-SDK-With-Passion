/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

#import <VectorKit/Swift-Protocol.h>

@class GEOMapRegion, NSString, VKCamera;

@protocol MDRenderTarget, VKMapViewCameraDelegate;

__attribute__((visibility("hidden")))
@interface VKCameraController : NSObject <Swift>

{
    VKCamera *_camera;
    id <MDRenderTarget> _canvas;
    id <VKMapViewCameraDelegate> _cameraDelegate;
    _Bool _gesturing;
    unsigned long long _regionChangeCount;
    _Bool _inProgressRegionChangeIsAnimated;
    struct VKEdgeInsets _edgeInsets;
    struct MapDataAccess *_mapDataAccess;
    struct AnimationRunner *_animationRunner;
    struct RunLoopController *_runLoopController;
    _Bool _staysCenteredDuringPinch;
    _Bool _staysCenteredDuringRotation;
    _Bool _isPitchEnabled;
    _Bool _isRotateEnabled;
    _Bool _allowDatelineWraparound;
}

@property (nonatomic, readonly) double presentationHeading;
@property (nonatomic) _Bool isPitchEnabled;
@property (nonatomic) _Bool isRotateEnabled;
@property (nonatomic) _Bool staysCenteredDuringPinch;
@property (nonatomic) _Bool staysCenteredDuringRotation;
@property (nonatomic, readonly) _Bool canPitch;
@property (nonatomic, readonly) _Bool canRotate;
@property (nonatomic) _Bool allowDatelineWraparound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) CDStruct_c3b9c2ee centerCoordinate;
@property (nonatomic) double distanceFromCenterCoordinate;
@property (nonatomic) double heading;
@property (nonatomic) double pitch;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double maxPitch;
@property (nonatomic, readonly) _Bool isPitched;
@property (nonatomic, readonly) _Bool isRotated;
@property (nonatomic, readonly) _Bool isFullyPitched;
@property (nonatomic, readonly) struct MapDataAccess *mapDataAccess;
@property (nonatomic, readonly) struct AnimationRunner *animationRunner;
@property (nonatomic, readonly) struct RunLoopController *runLoopController;

- (void)dealloc;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1;
- (struct VKEdgeInsets)edgeInsets;
- (_Bool)isAnimating;
- (id)canvas;
- (void)setCanvas:(id)arg1;
- (id)viewportInfo;
- (void)setCamera:(id)arg1;
- (id)camera;
- (id)detailedDescription;
- (void)setCameraDelegate:(id)arg1;
- (_Bool)isGesturing;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (void)setGesturing:(_Bool)arg1;
- (double)currentZoomLevel;
- (id)cameraDelegate;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (id)initWithMapDataAccess:(struct MapDataAccess *)arg1 animationRunner:(struct AnimationRunner *)arg2 runLoopController:(struct RunLoopController *)arg3 cameraDelegate:(id)arg4;
- (void)edgeInsetsDidEndAnimating;
- (void)edgeInsetsWillBeginAnimating;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (void)updateWithTimestamp:(double)arg1;
- (_Bool)wantsTimerTick;
- (void)populateDebugNode:(struct DebugTreeNode *)arg1 withOptions:(const bitset_dc343b9a *)arg2;
- (void)updateCameraToPositionOrientationLimits;
- (void)beginRegionChange:(_Bool)arg1;
- (void)endRegionChange;
- (void)stylesheetDidReload;
- (void)canvasDidLayout;
- (_Bool)isChangingRegion;
- (double)minimumZoomLevel;
- (double)maximumZoomLevel;
- (double)topDownMinimumZoomLevel;
- (void)checkAndResetRegionChangeCount;
- (struct CGPoint)centerScreenPoint;
- (struct CGPoint)scaledScreenPointForPoint:(struct CGPoint)arg1;
- (Matrix_443f5d51)cursorFromScreenPoint:(struct CGPoint)arg1;
- (void)stylesheetDidChange;
- (_Bool)centerCoordinate:(CDStruct_c3b9c2ee *)arg1 andDistanceFromCenter:(double *)arg2 forMapRegion:(id)arg3;

@end
