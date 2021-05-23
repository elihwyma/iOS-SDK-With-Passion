/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKScreenCanvas.h>

@class NSArray, NSString, VKARCameraController, VKGlobeCameraController;

@protocol VKInteractiveMapDelegate;

__attribute__((visibility("hidden")))
@interface VKClassicGlobeCanvas : VKScreenCanvas

{
    VKGlobeCameraController *_globeCameraController;
    int _mapType;
    CDStruct_80aa614a _mapDisplayStyle;
    double _contentScale;
    _Bool _disableRoads;
    _Bool _disableLabels;
    struct AltitudeDebugSettings _debugSettings;
    struct GlobeAdapter *_globeAdapter;
    struct RealisticRenderer *_renderer;
    struct shared_ptr<md::GlobeOverlayContainer> _overlayContainer;
    struct shared_ptr<ggl::FlyoverLibrary> _flyoverLibrary;
    _Bool _initialized;
    _Bool _canShowFlyover;
    struct shared_ptr<bool> _isDead;
    _Bool _isLoading;
    _Bool _isDownloading;
    _Bool _coarseLoading;
    _Bool _tourIsDownloading;
    struct LoadingStatusTracker *_loadingStatusTracker;
    double _currentZoomLevel;
    CDUnknownBlockType _sceneDidLoadCallback;
    VKARCameraController *_arCameraController;
    _Bool _arRoadDisabledState;
    struct CGSize _lastCanvasSize;
    _Bool _trafficEnabled;
    int _flyoverMode;
    id <VKInteractiveMapDelegate> _delegate;
}

@property (copy, nonatomic) CDUnknownBlockType sceneDidLoadCallback;
@property (nonatomic) id <VKInteractiveMapDelegate> delegate;
@property (nonatomic) int mapType;
@property (nonatomic) _Bool trafficEnabled;
@property (nonatomic, readonly) int flyoverMode;
@property (nonatomic, readonly) VKGlobeCameraController *globeCameraController;
@property (nonatomic, readonly) VKARCameraController *arCameraController;
@property (nonatomic, readonly) _Bool flyoverAvailable;
@property (nonatomic) _Bool disableRoads;
@property (nonatomic) _Bool disableLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (_Bool)supportsMapType:(int)arg1 scale:(int)arg2;

- (void)dealloc;
- (void)_update;
- (id).cxx_construct;
- (void)stopLoading;
- (void)addOverlay:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)stopAnimations;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (id)viewportInfo;
- (id)camera;
- (id)detailedDescription;
- (void)didPresent;
- (void)setMapType:(int)arg1 animated:(_Bool)arg2;
- (id)attributionsForCurrentRegion;
- (id)consoleString:(_Bool)arg1;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopFlyoverAnimation;
- (void)pauseFlyoverTourAnimation;
- (void)resumeFlyoverTourAnimation;
- (CDUnknownBlockType)annotationRectTest;
- (CDUnknownBlockType)annotationCoordinateTest;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (void)setNightMode:(_Bool)arg1;
- (struct GlobeOverlayContainer *)overlayContainer;
- (void)removeOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
- (void)stopSnappingAnimations;
- (const shared_ptr_a3c46825 *)_styleManager;
- (void)updateCameraForFrameResize;
- (void)didReceiveMemoryWarning:(_Bool)arg1 beAggressive:(_Bool)arg2;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (id)initWithMapEngine:(struct MapEngine *)arg1 inBackground:(_Bool)arg2;
- (void)transferStateFromCanvas:(id)arg1;
- (void)waitForLoading;
- (void)requestStylesheetMapDisplayStyle:(struct DisplayStyle)arg1 animated:(_Bool)arg2;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)convertPointToCoordinateOnSphere:(struct CGPoint)arg1;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (id)createFlyoverPreTourAnimation:(id)arg1 duration:(double)arg2;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(_Bool)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)enableFlyoverStatistics;
- (void)disableFlyoverStatistics;
- (void)resetFlyoverStatistics;
- (id)flyoverStatistics;
- (void)transitionToTracking:(_Bool)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(CDUnknownBlockType)arg6;
- (void)updateWithTimestamp:(double)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(const Coordinate3D_bc242218 *)arg2 course:(const Unit_3d259e8a *)arg3;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(const Coordinate3D_bc242218 *)arg2;
- (void)setNavCameraIsDetached:(_Bool)arg1;
- (float)currentRoadSignOffset;
- (void)enterARSessionAtCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)exitARSession;
- (void)updateCameraFromGlobe;
- (void)setupMapScene;
- (void)enableTileAnalytics;
- (void)_reloadStylesheet;
- (void)_updateDebugSettings;
- (void)_viewTransformSetup;
- (_Bool)useNewRenderPath;
- (struct CGPoint)_centerScreenPoint;
- (void)disableTileAnalytics;
- (void)_setDefaultFov:(float)arg1;

@end
