/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEORoutePreloader.h>

@class GEOTileKeyList, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject, NSTimer;

@protocol GEORoutePreloadCamera, OS_os_log;

@interface GEONavRoutePreloader : GEORoutePreloader

{
    id <GEORoutePreloadCamera> _camera;
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    GEOTileKeyList *_tilesMissed;
    NSMutableArray *_steps;
    NSMutableArray *_failedSubscriptions;
    NSMutableDictionary *_subscriptions;
    unsigned int _stepGeneration;
    _Bool _tooFarFromRoute;
    long long _currentLoadingSteps;
    NSMapTable *_stepErrors;
    NSMapTable *_stepLifetimeErrors;
    _Bool _anyErrors;
    _Bool _finished;
    double _beginTime;
    double _mostRecentErrorTime;
    _Bool _hadEnoughTilesToDisableNetworking;
    NSTimer *_geodCrashTimer;
    double _maneuverSizeInMeters;
}

@property (retain, nonatomic) id <GEORoutePreloadCamera> camera;
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
- (_Bool)loggingEnabled;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (void)updateWithRouteMatch:(id)arg1;
- (void)setNetworkQuality:(unsigned long long)arg1;
- (id)initWithRoute:(id)arg1 loggingEnabled:(_Bool)arg2 minimalDebugging:(_Bool)arg3 fullDebugging:(_Bool)arg4 batteryHandler:(CDUnknownBlockType)arg5;
- (void)_performNextRequests;
- (void)_geodCrashed:(id)arg1;
- (void)_resetErrCounts;
- (void)_cancelAllSteps;
- (void)_cancelStep:(id)arg1;
- (id)_descriptionForStep:(id)arg1;
- (void)_incrementErrorForStep:(id)arg1;
- (void)_evaluateNetworkPerformance:(id)arg1;
- (_Bool)_loadStep:(id)arg1 requireWiFi:(_Bool)arg2;
- (void)_performTileRequestsPreemptedStepIndex:(long long)arg1 currentRoutePositionStepIndex:(long long)arg2 firstErrorStepIndex:(long long)arg3 firstLoadStepIndex:(long long)arg4 loadStepsAhead:(long long)arg5 loadStepsAheadIfNoWiFi:(long long)arg6;
- (void)_accumulateSteps;
- (void)_cancelRequestsInPast;

@end
