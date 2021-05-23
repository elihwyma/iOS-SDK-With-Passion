/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEORoutePreloader.h>

@class GEOMapServiceTraits, GEOTransitSuggestedRoute, NSObject, NSTimer, _GEOTransitRoutePreloaderData;

@protocol OS_os_log;

@interface GEOTransitRoutePreloader : GEORoutePreloader

{
    GEOTransitSuggestedRoute *_suggestedRoute;
    _GEOTransitRoutePreloaderData *_reserved;
    GEOMapServiceTraits *_traits;
    double _endRoutePosition;
    unsigned long long _indexOfLastStepWithPreparedBatch;
    NSTimer *_geodCrashTimer;
    double _radialDistanceToImplicateTilesMeters;
    long long _tilesRequested;
    _Bool _shouldPreloadEntireRoute;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;

- (void)stopLoading;
- (void)setTraits:(id)arg1;
- (void)performTearDown;
- (void)_cancelPreloadTasks;
- (void)beginLoading;
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;
- (_Bool)isSufficientlyLoaded;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)fullDebuggingEnabled;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (void)updateWithRouteMatch:(id)arg1;
- (id)route;
- (id)initWithRoute:(id)arg1 loggingEnabled:(_Bool)arg2 minimalDebugging:(_Bool)arg3 fullDebugging:(_Bool)arg4 batteryHandler:(CDUnknownBlockType)arg5;
- (void)_resetErrorCounts;
- (void)_performNextRequests;
- (void)_cancelAllBatches;
- (struct PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1;
- (void)_makeBatchesForSteps:(id)arg1;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)arg1;
- (void)_processBatches;
- (void)_makePreloadBatchForSteps:(id)arg1;
- (void)_makePreloadBatchForGraph;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned int)arg2;
- (void)_loadPlacecardsForBatch:(id)arg1;
- (void)_loadTilesForBatch:(id)arg1;
- (void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2;
- (void)_geodCrashed:(id)arg1;
- (long long)tilesRequested;
- (void)setShouldPreloadEntireRoute:(_Bool)arg1;

@end
