/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEOComposedRoute, NSMutableDictionary, NSString;

@protocol GEORoutePreloadSessionDelegate, OS_os_log;

@interface GEORoutePreloader : NSObject

{
    GEOComposedRoute *_route;
    NSMutableDictionary *_tileSetStyles;
    _Bool _loggingEnabled;
    _Bool _minimalDebuggingEnabled;
    _Bool _fullDebuggingEnabled;
    _Bool _enabled;
    _Bool _paused;
    double _currentRoutePosition;
    int _downloadState;
    CDUnknownBlockType _batteryHandler;
    unsigned long long _networkQuality;
    id <GEORoutePreloadSessionDelegate> _delegate;
    CDUnknownBlockType _tileKeyIsDownloadedPredicate;
    double _stepSizeInMeters;
    struct GEOOnce_s _didTearDown;
    GEOApplicationAuditToken *_auditToken;
}

@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic) unsigned long long networkQuality;
@property (copy, nonatomic) CDUnknownBlockType batteryHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType tileKeyIsDownloadedPredicate;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <GEORoutePreloadSessionDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_os_log> *preloaderLog;

+ (id)preloaderForRoute:(id)arg1 auditToken:(id)arg2;
+ (id)preloaderForRoute:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_start;
- (void)stopLoading;
- (void)setTraits:(id)arg1;
- (void)tearDown;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2 loggingEnabled:(_Bool)arg3 minimalDebugging:(_Bool)arg4 fullDebugging:(_Bool)arg5 batteryHandler:(CDUnknownBlockType)arg6;
- (void)reachabilityChanged:(id)arg1;
- (void)performTearDown;
- (void)_cancelPreloadTasks;
- (void)beginLoading;
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;
- (void)tilesChanged;
- (_Bool)isSufficientlyLoaded;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)fullDebuggingEnabled;
- (_Bool)loggingEnabled;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (void)updateWithRouteMatch:(id)arg1;
- (id)initWithRoute:(id)arg1 loggingEnabled:(_Bool)arg2 minimalDebugging:(_Bool)arg3 fullDebugging:(_Bool)arg4 batteryHandler:(CDUnknownBlockType)arg5;

@end
