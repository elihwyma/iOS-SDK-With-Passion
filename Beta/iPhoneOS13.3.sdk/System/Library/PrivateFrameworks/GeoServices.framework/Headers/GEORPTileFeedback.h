/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, PBDataReader, PBUnknownFields;

@interface GEORPTileFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPCorrectedLabel *_label;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _type;
    struct {
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_coordinate:1;
        unsigned int read_label:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_coordinate:1;
        unsigned int wrote_label:1;
        unsigned int wrote_type:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLabel;
@property (retain, nonatomic) GEORPCorrectedLabel *label;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
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
- (void)_readCoordinate;
- (void)_readLabel;

@end
