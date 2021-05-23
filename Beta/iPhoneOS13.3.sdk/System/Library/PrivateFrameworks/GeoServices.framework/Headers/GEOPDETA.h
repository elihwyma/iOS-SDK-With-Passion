/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORouteTrafficDetail, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDETA : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEORouteTrafficDetail *_routeTrafficDetail;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _time;
    int _transportType;
    struct {
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_time:1;
        unsigned int has_transportType:1;
    } _flags;
}

@property (nonatomic) _Bool hasTime;
@property (nonatomic) unsigned int time;
@property (nonatomic) _Bool hasDistance;
@property (nonatomic) unsigned int distance;
@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic) _Bool hasHistoricTravelTime;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) _Bool hasRouteTrafficDetail;
@property (retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;

@end
