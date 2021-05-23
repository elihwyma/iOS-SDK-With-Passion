/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSDictionary, NSHashTable, NSMutableArray, NSSet, NSString, geo_isolater;

@protocol GEOResourceManifestServerProxy, OS_dispatch_source;

@interface GEOResourceManifestManager : NSObject

{
    id <GEOResourceManifestServerProxy> _serverProxy;
    NSHashTable *_serverProxyObservers;
    GEOActiveTileGroup *_activeTileGroup;
    struct os_unfair_lock_s _activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    NSSet *_allResourceNames;
    NSSet *_allRegionalResourceNames;
    _Bool _needsToLoadTileGroupFromDisk;
    NSMutableArray *_tileGroupObservers;
    struct os_unfair_recursive_lock_s _tileGroupObserversLock;
    struct os_unfair_lock_s _closedCountLock;
    long long _closedCount;
    _Bool _constantlyChangeTileGroup;
    double _constantlyChangeTileGroupInterval;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_networkActivityHandlers;
    geo_isolater *_networkActivityHandlersIsolation;
    _Bool _isUpdatingManifest;
    _Bool _isLoadingResources;
    struct os_unfair_lock_s _resourceNamesToPathsLock;
    GEOResourceManifestConfiguration *_configuration;
    NSObject<OS_dispatch_source> *_cachedResourceInfoPurgeTimer;
    unsigned long long _stateCaptureHandle;
}

@property (nonatomic, readonly) id <GEOResourceManifestServerProxy> serverProxy;
@property (nonatomic, readonly) _Bool hasActiveTileGroup;
@property (nonatomic, readonly) GEOActiveTileGroup *activeTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (void)setServerProxyClass:(Class)arg1;
+ (id)modernManagerForConfiguration:(id)arg1;
+ (id)modernManager;
+ (void)useRemoteProxy;
+ (void)useLocalProxy;
+ (void)disableServerConnection;
+ (void)configureInProcessSingletonWithConfiguration:(id)arg1;
+ (void)setHiDPI:(_Bool)arg1;
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (void)forceUpdate;
- (id)authToken;
- (id)updateProgress;
- (void)_localeChanged:(id)arg1;
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;
- (void)removeTileGroupObserver:(id)arg1;
- (id)captureStatePlistWithHints:(struct os_state_hints_s *)arg1;
- (void)updateManifest:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closeServerConnection;
- (void)openServerConnection;
- (_Bool)isMuninEnabled;
- (_Bool)isDisputedBordersWhitelistedForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (id)pathForResourceWithName:(id)arg1;
- (id)allResourceNames;
- (void)startObservingDevResources;
- (void)stopObservingDevResources;
- (void)_scheduleCachedResourceInfoPurgeTimer;
- (id)_loadActiveTileGroupIfNecessary:(_Bool)arg1;
- (void)closeServerConnection:(_Bool)arg1;
- (void)_purgeCachedResourceInfo;
- (int)mapMatchingTileSetStyle;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey *)arg1;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (_Bool)useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (void)_buildResourceNamesToPaths;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;
- (void)fakeTileGroupChange;
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelCurrentManifestUpdate;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (id)muninBucketURLForId:(unsigned short)arg1 lod:(unsigned char)arg2;
- (_Bool)hasResourceManifest;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1 updateType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)resetActiveTileGroup;
- (void)updateManifest:(CDUnknownBlockType)arg1;
- (void)_notifyObserversOfResourcesChange;
- (void)devResourcesFolderDidChange;
- (void)addServerProxyObserver:(id)arg1;
- (void)removeServerProxyObserver:(id)arg1;
- (unsigned int)mapMatchingZoomLevel;
- (id)_activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringIfNecessaryForActiveTileSet:(id)arg1 tileKey:(const struct _GEOTileKey *)arg2 overrideLocale:(id)arg3;
- (id)disputedBordersQueryItemsForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (unsigned long long)_fromgeod_maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (id)allRegionalResourceNames;
- (id)allResourcePaths;
- (void)addNetworkActivityHandler:(CDUnknownBlockType)arg1;
- (id)bestLocalizedStringForDisplayStringAtIndex:(unsigned long long)arg1;
- (void)setConstantlyChangeTileGroup:(_Bool)arg1;
- (void)setConstantlyChangeTileGroupInterval:(double)arg1;
- (void)updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (id)detailedDescription;
- (unsigned int)activeTileGroupIdentifier;
- (void)removeDevResources;

@end
