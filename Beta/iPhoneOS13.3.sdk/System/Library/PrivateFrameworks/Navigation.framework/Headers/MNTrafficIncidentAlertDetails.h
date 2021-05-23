/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOETARoute, GEORoute, MNRouteCoordinate, NSData;

@interface MNTrafficIncidentAlertDetails : PBCodable

{
    double _alertTimestamp;
    double _distanceToIncident;
    double _etaTimestamp;
    NSData *_alertID;
    unsigned int _alertType;
    GEORoute *_alternateRoute;
    NSData *_alternateRouteTrafficData;
    MNRouteCoordinate *_endValidCoordinateRange;
    NSData *_etaResponseID;
    GEOETARoute *_etaRoute;
    MNRouteCoordinate *_incidentCoordinate;
    GEORoute *_originalRoute;
    NSData *_originalRouteTrafficData;
    MNRouteCoordinate *_startValidCoordinateRange;
    _Bool _isAutomaticReroute;
    struct {
        unsigned int alertTimestamp:1;
        unsigned int distanceToIncident:1;
        unsigned int etaTimestamp:1;
        unsigned int alertType:1;
        unsigned int isAutomaticReroute:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasAlertID;
@property (retain, nonatomic) NSData *alertID;
@property (nonatomic, readonly) _Bool hasEtaResponseID;
@property (retain, nonatomic) NSData *etaResponseID;
@property (nonatomic) _Bool hasAlertType;
@property (nonatomic) unsigned int alertType;
@property (nonatomic, readonly) _Bool hasEtaRoute;
@property (retain, nonatomic) GEOETARoute *etaRoute;
@property (nonatomic, readonly) _Bool hasOriginalRoute;
@property (retain, nonatomic) GEORoute *originalRoute;
@property (nonatomic, readonly) _Bool hasOriginalRouteTrafficData;
@property (retain, nonatomic) NSData *originalRouteTrafficData;
@property (nonatomic, readonly) _Bool hasAlternateRoute;
@property (retain, nonatomic) GEORoute *alternateRoute;
@property (nonatomic, readonly) _Bool hasAlternateRouteTrafficData;
@property (retain, nonatomic) NSData *alternateRouteTrafficData;
@property (nonatomic, readonly) _Bool hasStartValidCoordinateRange;
@property (retain, nonatomic) MNRouteCoordinate *startValidCoordinateRange;
@property (nonatomic, readonly) _Bool hasEndValidCoordinateRange;
@property (retain, nonatomic) MNRouteCoordinate *endValidCoordinateRange;
@property (nonatomic, readonly) _Bool hasIncidentCoordinate;
@property (retain, nonatomic) MNRouteCoordinate *incidentCoordinate;
@property (nonatomic) _Bool hasAlertTimestamp;
@property (nonatomic) double alertTimestamp;
@property (nonatomic) _Bool hasEtaTimestamp;
@property (nonatomic) double etaTimestamp;
@property (nonatomic) _Bool hasDistanceToIncident;
@property (nonatomic) double distanceToIncident;
@property (nonatomic) _Bool hasIsAutomaticReroute;
@property (nonatomic) _Bool isAutomaticReroute;

+ (id)detailsForTrafficIncidentAlert:(id)arg1;

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
