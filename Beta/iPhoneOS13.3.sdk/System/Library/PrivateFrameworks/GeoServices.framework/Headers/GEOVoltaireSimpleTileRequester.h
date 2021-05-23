/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOSimpleTileRequester.h>

@class NSString;

@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester

{
    _Bool _hasUpdatedManifestForHTTP410;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)expiringTilesetsCount;
+ (CDStruct_e4886f83 *)newExpiringTilesets;

- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_deviceRegionSKUQueryItemForTileSet:(id)arg1;

@end
