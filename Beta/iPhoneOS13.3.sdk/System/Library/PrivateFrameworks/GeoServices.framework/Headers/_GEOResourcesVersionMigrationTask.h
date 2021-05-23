/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEODataSetDescription, GEOReportedProgress, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResources, GEOResourcesVersionMigrator, GEOTileGroup, NSArray, NSProgress, NSSet, NSString;

@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourcesVersionMigrationTask : NSObject

{
    GEOResourcesVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _running;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEODataSetDescription *_preferredDataSet;
    GEOActiveTileGroup *_oldTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOResourceLoader *_immediateResourceLoader;
    GEOResourceLoader *_wifiOnlyResourceLoader;
    NSArray *_loadedResources;
    NSArray *_unloadedConditionalResources;
    GEOReportedProgress *_progress;
    id <NSObject> _transaction;
    GEOActiveTileGroupMigrationTaskOptions *_options;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) long long estimatedWeight;
@property (retain, nonatomic) id <NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;

+ (id)_resourcesDirectory:(id)arg1;
+ (Class)_resourceLoaderClass;

- (id)init;
- (void)cancel;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 dataSet:(id)arg5 oldTileGroup:(id)arg6 activeScales:(id)arg7 activeScenarios:(id)arg8;
- (id)_staleResourceForResource:(id)arg1;
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_resourcesDirectory;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)populateTileGroup:(id)arg1;
- (void)removeOldData:(id)arg1;

@end
