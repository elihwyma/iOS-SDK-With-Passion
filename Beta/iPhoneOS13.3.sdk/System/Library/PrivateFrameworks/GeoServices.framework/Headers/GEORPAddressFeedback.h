/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPAddressCorrections, GEORPPersonalizedMapsContext, PBDataReader, PBUnknownFields;

@interface GEORPAddressFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPPersonalizedMapsContext *_personalizedMaps;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _type;
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_personalizedMaps:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_personalizedMaps:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_place:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) GEORPAddressCorrections *address;
@property (nonatomic, readonly) _Bool hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasPersonalizedMaps;
@property (retain, nonatomic) GEORPPersonalizedMapsContext *personalizedMaps;
@property (nonatomic, readonly) _Bool hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
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
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readAddress;
- (void)_readPlace;
- (void)_readPlaceRequest;
- (void)_readPersonalizedMaps;

@end
