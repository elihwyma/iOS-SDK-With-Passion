/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityLocationSearchResult : PBCodable

{
    PBDataReader *_reader;
    NSMutableArray *_ess;
    GEOLocation *_location;
    unsigned long long _tileKey;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _status;
    struct {
        unsigned int has_tileKey:1;
        unsigned int has_status:1;
        unsigned int read_ess:1;
        unsigned int read_location:1;
        unsigned int read_tiles:1;
        unsigned int wrote_ess:1;
        unsigned int wrote_location:1;
        unsigned int wrote_tileKey:1;
        unsigned int wrote_tiles:1;
        unsigned int wrote_status:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) _Bool hasTileKey;
@property (nonatomic) unsigned long long tileKey;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *ess;
@property (retain, nonatomic) NSMutableArray *tiles;

+ (_Bool)isValid:(id)arg1;
+ (Class)essType;
+ (Class)tileType;

- (id)init;
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
- (id)statusAsString:(int)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)_readLocation;
- (void)_readEss;
- (void)_addNoFlagsEss:(id)arg1;
- (unsigned long long)essCount;
- (void)clearEss;
- (id)essAtIndex:(unsigned long long)arg1;
- (void)addEss:(id)arg1;
- (void)addTile:(id)arg1;
- (unsigned long long)tilesCount;
- (void)clearTiles;
- (id)tileAtIndex:(unsigned long long)arg1;
- (void)_readTiles;
- (void)_addNoFlagsTile:(id)arg1;

@end
