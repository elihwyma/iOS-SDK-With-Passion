/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBounds : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapRegion *_displayMapRegion;
    GEOMapRegion *_mapRegion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    float _maxZoom;
    float _minZoom;
    struct {
        unsigned int has_maxZoom:1;
        unsigned int has_minZoom:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_mapRegion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayMapRegion:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_maxZoom:1;
        unsigned int wrote_minZoom:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) _Bool hasDisplayMapRegion;
@property (retain, nonatomic) GEOMapRegion *displayMapRegion;
@property (nonatomic) _Bool hasMinZoom;
@property (nonatomic) float minZoom;
@property (nonatomic) _Bool hasMaxZoom;
@property (nonatomic) float maxZoom;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)boundsInfoForPlaceData:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readMapRegion;
- (void)_readDisplayMapRegion;

@end
