/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEODataSetDescription, GEOReportedProgress, GEOResourceManifestConfiguration, GEOResources, GEOServiceURLsActiveTileGroupMigrator, GEOTileGroup, NSProgress, NSString;

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface _GEOServiceURLsActiveTileGroupMigrationTask : NSObject

{
    GEOServiceURLsActiveTileGroupMigrator *_migrator;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    GEODataSetDescription *_dataSetDescription;
    GEOReportedProgress *_progress;
    GEOActiveTileGroupMigrationTaskOptions *_options;
    id <NSObject> _transaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSProgress *progress;
@property (nonatomic, readonly) long long estimatedWeight;
@property (retain, nonatomic) id <NSObject> transaction;
@property (retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options;

- (id)init;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)populateTileGroup:(id)arg1;
- (void)removeOldData:(id)arg1;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6;

@end
