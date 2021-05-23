/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <Foundation/NSObject.h>

@class CLLocationManager, NSMapTable, NSMutableDictionary, NSOrderedSet, NSSet, NSString, PXPlacesImageCache, PXPlacesMapPipelineExecutionContext, PXPlacesMapView;

@protocol MKAnnotation, OS_dispatch_queue, OS_dispatch_source, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerFocusDelegate, PXPlacesMapControllerLoadingStateDelegate, PXPlacesMapControllerSelectionDelegate;

@interface PXPlacesMapController : NSObject

{
    NSObject<OS_dispatch_queue> *_pipelinesQueue;
    NSObject<OS_dispatch_queue> *_dataSourcesQueue;
    NSObject<OS_dispatch_queue> *_executionContextQueue;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    NSMapTable *_dataSourceExecutionContexts;
    NSMapTable *_pendingDataSourceChanges;
    _Bool _pipelineExecutionAllowed;
    _Bool _mapViewIsVisible;
    _Bool _signalFocusWhenMapViewBecomesVisible;
    int _currentLocationAuthorizationStatus;
    id <PXPlacesMapControllerSelectionDelegate> _selectionDelegate;
    id <PXPlacesMapControllerChangeDelegate> _changeDelegate;
    id <PXPlacesMapControllerFocusDelegate> _focusDelegate;
    id <PXPlacesMapControllerLoadingStateDelegate> _stateDelegate;
    id <MKAnnotation> _currentSelection;
    NSSet *_dataSources;
    NSMapTable *_dataSourceToPipelineMap;
    PXPlacesMapView *_mapView;
    PXPlacesMapPipelineExecutionContext *_currentExecutionContext;
    PXPlacesImageCache *_cache;
    CLLocationManager *_locationManager;
    NSMutableDictionary *_showDebugMapRectColors;
    struct CLLocationCoordinate2D _initialCenterCoordinate;
    struct UIEdgeInsets _initialEdgePadding;
    CDStruct_02837cd9 _signalFocusMapRect;
}

@property (retain) NSSet *dataSources;
@property (retain) NSMapTable *dataSourceToPipelineMap;
@property (retain, nonatomic) PXPlacesMapView *mapView;
@property (retain) PXPlacesMapPipelineExecutionContext *currentExecutionContext;
@property _Bool pipelineExecutionAllowed;
@property _Bool mapViewIsVisible;
@property (nonatomic) _Bool signalFocusWhenMapViewBecomesVisible;
@property (nonatomic) CDStruct_02837cd9 signalFocusMapRect;
@property (retain) PXPlacesImageCache *cache;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSMutableDictionary *showDebugMapRectColors;
@property (weak) id <PXPlacesMapControllerSelectionDelegate> selectionDelegate;
@property (weak) id <PXPlacesMapControllerChangeDelegate> changeDelegate;
@property (weak) id <PXPlacesMapControllerFocusDelegate> focusDelegate;
@property (weak) id <PXPlacesMapControllerLoadingStateDelegate> stateDelegate;
@property (nonatomic) struct CLLocationCoordinate2D initialCenterCoordinate;
@property (nonatomic) struct UIEdgeInsets initialEdgePadding;
@property (nonatomic) int currentLocationAuthorizationStatus;
@property (retain, nonatomic) id <MKAnnotation> currentSelection;
@property (nonatomic, readonly) NSOrderedSet *currentSelectedGeotaggables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)launchMapsAtCoordinate:(struct CLLocationCoordinate2D)arg1 withTitle:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)loadView;
- (void)removeDataSource:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)createTrackingBarButtonItem;
- (void)mapContainerViewDidDisappear;
- (void)mapContainerViewWillDisappear;
- (void)mapContainerViewDidAppear;
- (void)mapContainerViewWillAppear;
- (void)setVisibleMapRelativeToViewPort:(id)arg1 andViewSize:(struct CGSize)arg2 forRenderer:(id)arg3;
- (double)_defaultAnimationDuration;
- (void)dataSource:(id)arg1 didChange:(id)arg2;
- (void)addPipeline:(id)arg1;
- (void)removePipeline:(id)arg1;
- (void)suspendPipelines;
- (void)resumePipelines:(CDUnknownBlockType)arg1;
- (void)runPipelines;
- (id)visibleGeotaggableFromDataSource:(id)arg1;
- (void)focusOnGeotaggablesFromPipeline:(id)arg1 animated:(_Bool)arg2;
- (void)focusOnGeotaggablesFromPipelineImmediately:(id)arg1;
- (CDStruct_02837cd9)_mapRectForGeotaggablesFromPipeline:(id)arg1 fitAdjusted:(_Bool *)arg2;
- (CDStruct_02837cd9)mapRectForGeotaggablesFromDataSource:(id)arg1 renderer:(id)arg2 mapViewSize:(struct CGSize)arg3 fitAdjusted:(_Bool *)arg4;
- (CDStruct_02837cd9)mapRectForNearbyQueriesFromRect:(CDStruct_02837cd9)arg1 atScale:(double)arg2 targetViewSize:(struct CGSize)arg3;
- (void)_showDebugMapRect:(CDStruct_02837cd9)arg1 color:(id)arg2;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forPipeline:(id)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forRenderer:(id)arg2 animated:(_Bool)arg3;
- (void)_setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (CDStruct_02837cd9)_ensureMinimumSize:(CDStruct_02837cd9)arg1;
- (void)_updateMapWithAllDataSources:(CDUnknownBlockType)arg1;
- (void)_updateMapWithDataSources:(id)arg1 dataSourceChangeTable:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)executePipeline:(id)arg1 dataSourceChange:(id)arg2 context:(id)arg3;
- (void)_updateMapWithDataSource:(id)arg1 dataSourceChange:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)_fadeInAnimationDuration;
- (double)_fadeOutAnimationDuration;
- (void)_executeUpdatePlanResults:(id)arg1;
- (double)_zPositionForAnnotationIndex:(long long)arg1;

@end
