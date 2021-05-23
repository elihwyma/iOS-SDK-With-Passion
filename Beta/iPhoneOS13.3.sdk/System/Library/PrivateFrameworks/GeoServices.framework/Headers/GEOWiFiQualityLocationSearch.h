/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, NSMutableArray, PBDataReader;

@interface GEOWiFiQualityLocationSearch : PBCodable

{
    PBDataReader *_reader;
    GEOLocation *_location;
    unsigned long long _radius;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_radius:1;
        unsigned int read_location:1;
        unsigned int read_tiles:1;
        unsigned int wrote_location:1;
        unsigned int wrote_radius:1;
        unsigned int wrote_tiles:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSMutableArray *tiles;
@property (nonatomic) _Bool hasRadius;
@property (nonatomic) unsigned long long radius;

+ (_Bool)isValid:(id)arg1;
+ (Class)tilesType;

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
- (void)readAll:(_Bool)arg1;
- (void)_readLocation;
- (unsigned long long)tilesCount;
- (void)clearTiles;
- (void)_readTiles;
- (void)_addNoFlagsTiles:(id)arg1;
- (id)tilesAtIndex:(unsigned long long)arg1;
- (void)addTiles:(id)arg1;

@end
