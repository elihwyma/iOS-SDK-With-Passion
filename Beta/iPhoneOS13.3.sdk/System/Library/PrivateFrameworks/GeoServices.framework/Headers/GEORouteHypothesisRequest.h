/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBCodable

{
    double _arrivalDate;
    GEOMapItemStorage *_destinationLocation;
    double _expirationDate;
    int _transportType;
    struct {
        unsigned int has_arrivalDate:1;
        unsigned int has_expirationDate:1;
        unsigned int has_transportType:1;
    } _flags;
}

@property (nonatomic) _Bool hasArrivalDate;
@property (nonatomic) double arrivalDate;
@property (nonatomic, readonly) _Bool hasDestinationLocation;
@property (retain, nonatomic) GEOMapItemStorage *destinationLocation;
@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) _Bool hasExpirationDate;
@property (nonatomic) double expirationDate;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;

@end
