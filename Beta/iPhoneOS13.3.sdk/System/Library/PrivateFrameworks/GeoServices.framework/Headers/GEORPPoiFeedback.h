/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPPoiCorrections, PBDataReader, PBUnknownFields;

@interface GEORPPoiFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPPoiCorrections *_corrections;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _correctionType;
    _Bool _addOtherPoi;
    struct {
        unsigned int has_correctionType:1;
        unsigned int has_addOtherPoi:1;
        unsigned int read_unknownFields:1;
        unsigned int read_corrections:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_corrections:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_place:1;
        unsigned int wrote_correctionType:1;
        unsigned int wrote_addOtherPoi:1;
    } _flags;
}

@property (nonatomic) _Bool hasCorrectionType;
@property (nonatomic) int correctionType;
@property (nonatomic, readonly) _Bool hasCorrections;
@property (retain, nonatomic) GEORPPoiCorrections *corrections;
@property (nonatomic, readonly) _Bool hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic, readonly) _Bool hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (nonatomic) _Bool hasAddOtherPoi;
@property (nonatomic) _Bool addOtherPoi;
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
- (void)_readPlace;
- (void)_readPlaceRequest;
- (void)_readCorrections;
- (id)correctionTypeAsString:(int)arg1;
- (int)StringAsCorrectionType:(id)arg1;

@end
