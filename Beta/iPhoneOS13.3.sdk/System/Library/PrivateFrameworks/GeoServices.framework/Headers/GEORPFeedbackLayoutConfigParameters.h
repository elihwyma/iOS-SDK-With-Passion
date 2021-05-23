/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_coordinate;
    GEOMapRegion *_mapRegion;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _formType;
    struct {
        unsigned int has_formType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_coordinate:1;
        unsigned int read_mapRegion:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_formType:1;
    } _flags;
}

@property (nonatomic) _Bool hasFormType;
@property (nonatomic) int formType;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic, readonly) _Bool hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readMapRegion;
- (void)_readMapsId;
- (void)_readCoordinate;
- (id)formTypeAsString:(int)arg1;
- (int)StringAsFormType:(id)arg1;

@end
