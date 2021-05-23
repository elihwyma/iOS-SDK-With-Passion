/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPerRouteInfo : PBCodable

{
    struct GEOSessionID _routeUuid;
    unsigned long long _etaServiceTravelTime;
    unsigned long long _originalTravelTime;
    struct {
        unsigned int has_routeUuid:1;
        unsigned int has_etaServiceTravelTime:1;
        unsigned int has_originalTravelTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasOriginalTravelTime;
@property (nonatomic) unsigned long long originalTravelTime;
@property (nonatomic) _Bool hasEtaServiceTravelTime;
@property (nonatomic) unsigned long long etaServiceTravelTime;
@property (nonatomic) _Bool hasRouteUuid;
@property (nonatomic) struct GEOSessionID routeUuid;

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

@end
