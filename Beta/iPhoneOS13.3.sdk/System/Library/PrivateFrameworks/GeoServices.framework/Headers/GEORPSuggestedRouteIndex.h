/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORPSuggestedRouteIndex : PBCodable

{
    CDStruct_9f2792e4 _clusteredRouteRideSelections;
    unsigned int _directionsResponseIndex;
    unsigned int _directionsResponseSuggestedRoutesIndex;
    struct {
        unsigned int has_directionsResponseIndex:1;
        unsigned int has_directionsResponseSuggestedRoutesIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasDirectionsResponseIndex;
@property (nonatomic) unsigned int directionsResponseIndex;
@property (nonatomic) _Bool hasDirectionsResponseSuggestedRoutesIndex;
@property (nonatomic) unsigned int directionsResponseSuggestedRoutesIndex;
@property (nonatomic, readonly) unsigned long long clusteredRouteRideSelectionsCount;
@property (nonatomic, readonly) unsigned int *clusteredRouteRideSelections;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (void)clearClusteredRouteRideSelections;
- (unsigned int)clusteredRouteRideSelectionsAtIndex:(unsigned long long)arg1;
- (void)addClusteredRouteRideSelections:(unsigned int)arg1;
- (void)setClusteredRouteRideSelections:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
