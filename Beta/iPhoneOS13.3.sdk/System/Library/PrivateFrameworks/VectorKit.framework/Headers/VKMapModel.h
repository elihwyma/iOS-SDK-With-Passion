/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet, VKNavigationPuck, VKTimedAnimation;

@protocol VKMapModelDelegate;

__attribute__((visibility("hidden")))
@interface VKMapModel : NSObject

{
    long long _tileSize;
    double _zoomLevel;
    id <VKMapModelDelegate> _delegate;
    NSMutableSet *_blockingStylesheetObservers;
    double _styleTransitionProgress;
    double _forcedMaxZoomLevel;
    struct LabelSettings *_labelSettings;
    const struct MapEngineSettings *_mapEngineSettings;
    struct AnimationRunner *_animationRunner;
    struct CartographicRenderer *_renderer;
    struct mutex _rendererMutex;
    struct LogicManager *_logicManager;
    float _navigationPuckSize;
    struct FeatureAttributeSet _mapFeatureStyleAttributes;
    shared_ptr_c5d816ee _styleQuery;
    int _metroArea;
    _Bool _forceMapDrawStyleUpdate;
    VKTimedAnimation *_highZoomTransitionAnimation;
    VKNavigationPuck *_navigationPuck;
    shared_ptr_e963992e _taskContext;
    _Bool _localizeLabels;
    unsigned char _labelScaleFactor;
    _Bool _disableTransitLines;
    float _navMapZoomLevelTransitionZ;
    float _standardMapZoomLevelTransitionZ;
    unsigned long long _purpose;
    struct PolylineCoordinate _routeUserOffset;
}

@property (nonatomic) int mapType;
@property (nonatomic) float navMapZoomLevelTransitionZ;
@property (nonatomic) float standardMapZoomLevelTransitionZ;
@property (nonatomic, readonly) float currentRoadSignOffset;
@property (nonatomic, readonly) _Bool showingTrafficCasing;
@property (nonatomic, readonly) unsigned long long purpose;
@property (nonatomic) _Bool localizeLabels;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) id <VKMapModelDelegate> delegate;
@property (nonatomic) struct PolylineCoordinate routeUserOffset;
@property (nonatomic, readonly) NSArray *visibleTileSets;
@property (nonatomic) float navigationPuckSize;
@property (nonatomic) _Bool disableTransitLines;

- (void)dealloc;
- (id).cxx_construct;
- (shared_ptr_c37d6e02)_sceneManager;
- (long long)tileSize;
- (void)setMapType:(int)arg1 animated:(_Bool)arg2;
- (id)attributionsForCurrentRegion;
- (id)navigationPuck;
- (shared_ptr_a3c46825)_styleManager;
- (void)reloadStylesheet;
- (void)debugHighlightObjectAtPoint:(struct CGPoint)arg1 highlightTarget:(unsigned char)arg2;
- (void)forceMapType:(int)arg1 animated:(_Bool)arg2;
- (void)layoutWithContext:(const struct LayoutContext *)arg1;
- (double)northYaw;
- (void)sizeDidChange:(struct CGSize)arg1;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1 groundPoint:(Matrix_6e1d3589)arg2;
- (void)setNavCameraIsDetached:(_Bool)arg1;
- (void)foreachRenderLayer:(CDUnknownBlockType)arg1;
- (void)_setStyleManagerFromMapType:(int)arg1;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1 forRealistic:(_Bool)arg2;
- (void)performStylesheetDidReload;
- (void)_beginMapZoomLevelTransition:(unsigned char)arg1;
- (void)_updateZoomLevel:(const struct LayoutContext *)arg1;
- (void)updateMapDrawStyleWithContext:(const struct LayoutContext *)arg1;
- (void)foreachActiveRenderLayer:(CDUnknownBlockType)arg1;
- (void)updateOverlayType;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle)arg1;
- (id)initWithTarget:(id)arg1 renderer:(struct CartographicRenderer *)arg2 purpose:(unsigned long long)arg3 taskContext:(shared_ptr_e963992e)arg4 logicManager:(struct LogicManager *)arg5 mapEngineSettings:(const struct MapEngineSettings *)arg6 animationRunner:(struct AnimationRunner *)arg7;
- (void)destroyRenderer;
- (void)setShowingOuterHaloOnLabelsDidChange:(_Bool)arg1;

@end
