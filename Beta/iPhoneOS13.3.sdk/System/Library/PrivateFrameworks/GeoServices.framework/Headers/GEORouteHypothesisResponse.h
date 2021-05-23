/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEODirectionsResponse, GEOETAResponse, PBDataReader;

@interface GEORouteHypothesisResponse : PBCodable

{
    PBDataReader *_reader;
    GEODirectionsResponse *_directionsResponse;
    GEOETAResponse *_etaResponse;
    double _updatedTimeStamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_updatedTimeStamp:1;
        unsigned int read_directionsResponse:1;
        unsigned int read_etaResponse:1;
        unsigned int wrote_directionsResponse:1;
        unsigned int wrote_etaResponse:1;
        unsigned int wrote_updatedTimeStamp:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasDirectionsResponse;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) _Bool hasEtaResponse;
@property (retain, nonatomic) GEOETAResponse *etaResponse;
@property (nonatomic) _Bool hasUpdatedTimeStamp;
@property (nonatomic) double updatedTimeStamp;

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
- (void)_readDirectionsResponse;
- (void)_readEtaResponse;

@end
