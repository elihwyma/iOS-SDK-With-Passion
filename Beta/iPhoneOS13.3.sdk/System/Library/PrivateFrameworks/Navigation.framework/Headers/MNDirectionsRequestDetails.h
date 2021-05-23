/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOComposedWaypoint, GEODirectionsRequestFeedback, GEOLocation, GEOMapRegion, GEORouteAttributes, NSString;

@interface MNDirectionsRequestDetails : PBCodable

{
    GEOMapRegion *_currentMapRegion;
    GEOLocation *_currentUserLocation;
    GEOComposedWaypoint *_destination;
    GEODirectionsRequestFeedback *_directionsRequestFeedback;
    unsigned int _maxRouteCount;
    GEOComposedWaypoint *_origin;
    GEORouteAttributes *_routeAttributes;
    NSString *_tracePath;
    struct {
        unsigned int maxRouteCount:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *origin;
@property (nonatomic, readonly) _Bool hasDestination;
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) _Bool hasRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (nonatomic) _Bool hasMaxRouteCount;
@property (nonatomic) unsigned int maxRouteCount;
@property (nonatomic, readonly) _Bool hasCurrentUserLocation;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (nonatomic, readonly) _Bool hasCurrentMapRegion;
@property (retain, nonatomic) GEOMapRegion *currentMapRegion;
@property (nonatomic, readonly) _Bool hasDirectionsRequestFeedback;
@property (retain, nonatomic) GEODirectionsRequestFeedback *directionsRequestFeedback;
@property (nonatomic, readonly) _Bool hasTracePath;
@property (retain, nonatomic) NSString *tracePath;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
