/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOVoltaireSimpleTileRequester.h>

@interface GEOFeatureSpecificSimpleTileRequester : GEOVoltaireSimpleTileRequester

+ (unsigned char)tileProviderIdentifier;

- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (struct _GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const struct _GEOTileKey *)arg1 muid:(unsigned long long *)arg2;

@end
