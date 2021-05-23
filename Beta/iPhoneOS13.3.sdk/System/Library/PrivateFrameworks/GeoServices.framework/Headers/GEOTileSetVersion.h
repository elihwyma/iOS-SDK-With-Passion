/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTileSetVersion : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    struct GEOGenericTile *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    CDStruct_40288aee _flags;
}

@property (nonatomic) unsigned int identifier;
@property (nonatomic, readonly) unsigned long long availableTilesCount;
@property (nonatomic, readonly) struct GEOTileSetRegion *availableTiles;
@property (nonatomic) _Bool hasTimeToLiveSeconds;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (nonatomic, readonly) unsigned long long genericTilesCount;
@property (nonatomic, readonly) struct GEOGenericTile *genericTiles;
@property (nonatomic) _Bool hasSupportedLanguagesVersion;
@property (nonatomic) unsigned int supportedLanguagesVersion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearAvailableTiles;
- (void)clearGenericTiles;
- (void)_readAvailableTiles;
- (void)_addNoFlagsAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)_readGenericTiles;
- (void)_addNoFlagsGenericTile:(struct GEOGenericTile)arg1;
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1;
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;
- (struct GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1;
- (void)addGenericTile:(struct GEOGenericTile)arg1;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (void)setGenericTiles:(struct GEOGenericTile *)arg1 count:(unsigned long long)arg2;

@end
