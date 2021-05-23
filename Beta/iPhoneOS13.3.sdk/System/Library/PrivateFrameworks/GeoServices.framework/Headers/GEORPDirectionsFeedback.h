/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPDirectionsCorrections, GEORPDirectionsFeedbackContext, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPDirectionsFeedbackContext *_directionsContext;
    GEORPDirectionsCorrections *_directionsCorrections;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _correctionType;
    struct {
        unsigned int has_correctionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_directionsContext:1;
        unsigned int read_directionsCorrections:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_directionsContext:1;
        unsigned int wrote_directionsCorrections:1;
        unsigned int wrote_correctionType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDirectionsContext;
@property (retain, nonatomic) GEORPDirectionsFeedbackContext *directionsContext;
@property (nonatomic, readonly) _Bool hasDirectionsCorrections;
@property (retain, nonatomic) GEORPDirectionsCorrections *directionsCorrections;
@property (nonatomic) _Bool hasCorrectionType;
@property (nonatomic) int correctionType;
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
- (id)correctionTypeAsString:(int)arg1;
- (int)StringAsCorrectionType:(id)arg1;
- (void)_readDirectionsContext;
- (void)_readDirectionsCorrections;

@end
