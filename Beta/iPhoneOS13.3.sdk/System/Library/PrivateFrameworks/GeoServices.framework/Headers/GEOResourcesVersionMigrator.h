/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResourceManifestConfiguration, NSMutableArray, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOResourcesVersionMigrator : NSObject

{
    GEOResourceManifestConfiguration *_manifestConfiguration;
    geo_isolater *_isolater;
    NSMutableArray *_runningTasks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7;
- (void)_addRunningTask:(id)arg1;
- (void)_removeRunningTask:(id)arg1;

@end
