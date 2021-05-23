/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapItemStorage, GEOPlace, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOURLItem : PBCodable

{
    PBDataReader *_reader;
    GEOMapItemStorage *_mapItemStorage;
    GEOPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    _Bool _currentLocation;
    struct {
        unsigned int has_currentLocation:1;
        unsigned int read_mapItemStorage:1;
        unsigned int read_place:1;
        unsigned int wrote_mapItemStorage:1;
        unsigned int wrote_place:1;
        unsigned int wrote_currentLocation:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPlace;
@property (retain, nonatomic) GEOPlace *place;
@property (nonatomic) _Bool hasCurrentLocation;
@property (nonatomic) _Bool currentLocation;
@property (nonatomic, readonly) _Bool hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;

+ (_Bool)isValid:(id)arg1;

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
- (void)_readPlace;
- (void)setMapItem:(id)arg1;
- (id)mapItem;
- (void)_readMapItemStorage;

@end
