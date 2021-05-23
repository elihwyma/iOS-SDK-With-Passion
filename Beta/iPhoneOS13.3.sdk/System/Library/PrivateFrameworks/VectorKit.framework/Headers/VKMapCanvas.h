/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKScreenCanvas.h>

@class NSArray, NSString, VKMapModel, VKTimedAnimation;

@protocol VKInteractiveMapDelegate;

__attribute__((visibility("hidden")))
@interface VKMapCanvas : VKScreenCanvas

{
    VKMapModel *_map;
    struct CGSize _lastCanvasSize;
    optional_44235073 _lastValidCanvasSizeZoomLevel;
    VKTimedAnimation *_horizontalOffsetAnimation;
    double _canonicalSkyHeight;
    struct shared_ptr<md::OverlayContainer> _overlayContainer;
    _Bool _trafficEnabled;
    id <VKInteractiveMapDelegate> _delegate;
}

@property (nonatomic) id <VKInteractiveMapDelegate> delegate;
@property (nonatomic) _Bool trafficEnabled;
@property (nonatomic, readonly) VKMapModel *map;
@property (nonatomic) double canonicalSkyHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (_Bool)supportsMapType:(int)arg1 scale:(int)arg2;

- (void)dealloc;
- (id).cxx_construct;
- (void)addOverlay:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (long long)tileSize;
- (void)setMapType:(int)arg1;
- (id)detailedDescription;
- (void)setMapType:(int)arg1 animated:(_Bool)arg2;
- (id)attributionsForCurrentRegion;
- (id)consoleString:(_Bool)arg1;
- (id)navigationPuck;
- (CDUnknownBlockType)annotationRectTest;
- (CDUnknownBlockType)annotationCoordinateTest;
- (_Bool)shouldHideOffscreenSelectedAnnotation;
- (void)removeOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (_Bool)isPointValidForGesturing:(struct CGPoint)arg1;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1;
- (void)updateCameraForFrameResize;
- (void)reloadStylesheet;
- (void)clearScene;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (id)initWithMapEngine:(struct MapEngine *)arg1 inBackground:(_Bool)arg2;
- (void)transferStateFromCanvas:(id)arg1;
- (void)requestStylesheetMapDisplayStyle:(struct DisplayStyle)arg1 animated:(_Bool)arg2;
- (CDStruct_c3b9c2ee)convertPointToCoordinate:(struct CGPoint)arg1;
- (CDStruct_c3b9c2ee)convertPointToMapPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertMapPointToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToPoint:(CDStruct_c3b9c2ee)arg1;
- (struct CGPoint)convertCoordinateToCameraModelPoint:(CDStruct_c3b9c2ee)arg1;
- (void)transitionToTracking:(_Bool)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 cameraController:(id)arg5 pounceCompletionHandler:(CDUnknownBlockType)arg6;
- (void)updateWithTimestamp:(double)arg1;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)populateDebugNode:(struct DebugTreeNode *)arg1 withOptions:(const bitset_dc343b9a *)arg2;
- (void)_updateViewTransform;
- (optional_44235073)_zoomLevelForCanvasSize:(struct CGSize)arg1;
- (void)updateOverlays;
- (void)setNavCameraIsDetached:(_Bool)arg1;
- (float)currentRoadSignOffset;
- (void)mapModelDidReloadStylesheet:(id)arg1;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;

@end
