/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveTileGroupMigrationTaskOptions, GEORegionalResourcesVersionMigrator, GEOReportedProgress, GEOResourceManifestConfiguration, GEOResources, GEOTileGroup, NSProgress, NSSet, NSString;

@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesVersionMigrationTask : NSObject

{
    GEORegionalResourcesVersionMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
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

- (id)init;
- (void)cancel;
- (id)_resourcesDirectory;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)populateTileGroup:(id)arg1;
- (void)removeOldData:(id)arg1;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 activeScales:(id)arg5 activeScenarios:(id)arg6;

@end
