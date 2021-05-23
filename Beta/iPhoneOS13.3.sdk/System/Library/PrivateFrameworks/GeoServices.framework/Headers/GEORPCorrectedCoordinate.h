/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBDataReader;

@interface GEORPCorrectedCoordinate : PBCodable

{
    PBDataReader *_reader;
    GEOLatLng *_correctedCoordinate;
    GEOLatLng *_originalCoordinate;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_correctedCoordinate:1;
        unsigned int read_originalCoordinate:1;
        unsigned int wrote_correctedCoordinate:1;
        unsigned int wrote_originalCoordinate:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasOriginalCoordinate;
@property (retain, nonatomic) GEOLatLng *originalCoordinate;
@property (nonatomic, readonly) _Bool hasCorrectedCoordinate;
@property (retain, nonatomic) GEOLatLng *correctedCoordinate;

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
- (void)_readCorrectedCoordinate;
- (void)_readOriginalCoordinate;

@end
