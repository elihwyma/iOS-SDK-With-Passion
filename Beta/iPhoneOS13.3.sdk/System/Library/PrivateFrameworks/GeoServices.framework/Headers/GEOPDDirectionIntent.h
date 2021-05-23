/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDResolvedItem, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDirectionIntent : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDResolvedItem *_destination;
    GEOPDResolvedItem *_origin;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _transportType;
    struct {
        unsigned int has_transportType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_destination:1;
        unsigned int read_origin:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_destination:1;
        unsigned int wrote_origin:1;
        unsigned int wrote_transportType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOrigin;
@property (retain, nonatomic) GEOPDResolvedItem *origin;
@property (nonatomic, readonly) _Bool hasDestination;
@property (retain, nonatomic) GEOPDResolvedItem *destination;
@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
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
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)_readDestination;
- (void)_readOrigin;

@end
