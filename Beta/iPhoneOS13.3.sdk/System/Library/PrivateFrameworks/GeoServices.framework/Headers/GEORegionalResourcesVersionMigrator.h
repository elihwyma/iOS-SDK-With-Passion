/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOResourceManifestConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesVersionMigrator : NSObject

{
    GEOResourceManifestConfiguration *_manifestConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 dataSet:(id)arg6 updateType:(long long)arg7;

@end
