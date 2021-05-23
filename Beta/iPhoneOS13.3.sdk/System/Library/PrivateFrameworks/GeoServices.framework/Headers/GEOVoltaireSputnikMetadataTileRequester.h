/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOSimpleTileRequester.h>

@interface GEOVoltaireSputnikMetadataTileRequester : GEOSimpleTileRequester

+ (unsigned char)tileProviderIdentifier;

- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end
