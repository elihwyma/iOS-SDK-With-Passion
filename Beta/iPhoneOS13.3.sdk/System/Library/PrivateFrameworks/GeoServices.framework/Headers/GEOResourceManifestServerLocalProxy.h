/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveTileGroup, GEOResourceFiltersManager, GEOResourceManifestConfiguration, GEOResourceManifestDownload, GEOResourceManifestDownloadTask, NSArray, NSError, NSMutableArray, NSOperationQueue, NSProgress, NSString, _GEOResourceManifestServerLocalProxyMigrationState;

@protocol GEOResourceManifestServerProxyDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source;

@interface GEOResourceManifestServerLocalProxy : NSObject

{
    id <GEOResourceManifestServerProxyDelegate> _delegate;
    GEOResourceManifestDownloadTask *_manifestDownloadTask;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *_workOperationQueue;
    GEOResourceManifestConfiguration *_configuration;
    _Bool _wantsManifestUpdateOnReachabilityChange;
    NSObject<OS_dispatch_source> *_manifestUpdateTimer;
    _Bool _wantsTileGroupUpdateOnReachabilityChange;
    NSObject<OS_dispatch_source> *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    id <NSObject> _newActiveTileGroupTransaction;
    _Bool _started;
    unsigned long long _manifestRetryCount;
    double _lastManifestRetryTimestamp;
    unsigned long long _tileGroupRetryCount;
    double _lastTileGroupRetryTimestamp;
    NSString *_authToken;
    struct os_unfair_lock_s _authTokenLock;
    NSError *_lastResourceManifestLoadError;
    NSMutableArray *_manifestUpdateCompletionHandlers;
    NSMutableArray *_opportunisticManifestUpdateCompletionHandlers;
    long long _currentManifestUpdateType;
    GEOResourceFiltersManager *_filtersManager;
    NSArray *_tileGroupMigrators;
    unsigned long long _stateCaptureHandle;
    _GEOResourceManifestServerLocalProxyMigrationState *_tileGroupMigrationState;
    NSProgress *_updateProgress;
    NSProgress *_currentUpdateProgress;
}

@property (retain, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <GEOResourceManifestServerProxyDelegate> delegate;

- (void)dealloc;
- (id)configuration;
- (id)authToken;
- (id)updateProgress;
- (void)_reachabilityChanged:(id)arg1;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)filtersManagerDidChangeActiveFilters:(id)arg1;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)openConnection;
- (void)closeConnection;
- (unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (id)serverQueue;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (void)forceUpdate:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCurrentManifestUpdate;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setActiveTileGroupIdentifier:(id)arg1 updateType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)resetActiveTileGroup;
- (void)_createMigrators;
- (void)_loadFromDisk;
- (void)_cancelManifestUpdate;
- (void)_cancelMigrationTasks;
- (void)_startServer;
- (void)_networkDefaultsDidChange:(id)arg1;
- (void)_terminationRequested:(id)arg1;
- (_Bool)_updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)_considerChangingActiveTileGroup;
- (void)_manifestURLDidChange:(id)arg1;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (_Bool)_writeActiveTileGroupToDisk:(id)arg1 error:(id *)arg2;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (id)_idealTileGroupToUse;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(_Bool)arg2;
- (void)_tileGroupTimerFired;
- (id)migrationTaskOptions;
- (void)_notifyImmediateManifestUpdateCompletionHandlers:(id)arg1;
- (void)_startOpportunisticMigrationToTileGroup:(id)arg1 inResourceManifest:(id)arg2 activeScales:(id)arg3 activeScenarios:(id)arg4 dataSet:(id)arg5;
- (void)_notifyOpportunisticManifestUpdateCompletionHandlers:(id)arg1;
- (void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 dataSet:(id)arg4 migrationTasks:(id)arg5 flushTileCache:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_addOpportunisticManifestUpdateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setCurrentUpdateType:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateManifest;
- (id)_manifestURL;
- (void)_updateManifest:(CDUnknownBlockType)arg1;
- (void)_addManifestUpdateCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleManifestUpdateError:(id)arg1;
- (_Bool)_writeManifestToDiskWithUpdatedMetadataForURL:(id)arg1 eTag:(id)arg2 error:(id *)arg3;
- (void)_changeActiveTileGroupIfNeededForManifestURL:(id)arg1 oldURL:(id)arg2;
- (void)_updateTimerFired;
- (_Bool)_writeManifestToDisk:(id)arg1 error:(id *)arg2;
- (void)_resetCurrentUpdateState;
- (id)captureStateDataWithHints:(struct os_state_hints_s *)arg1;
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;
- (void)performOpportunisticResourceLoading;
- (id)serverOperationQueue;

@end
