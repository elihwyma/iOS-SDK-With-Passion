/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOLocation, MNRouteCoordinate, NSData, NSString;

@interface MNLocationDetails : PBCodable

{
    double _courseAccuracy;
    double _distanceFromRoute;
    double _horizontalAccuracy;
    double _roadMatchCourse;
    double _routeMatchCourse;
    long long _shieldType;
    long long _speedLimitShieldType;
    double _timestamp;
    unsigned long long _transitID;
    GEOLocation *_location;
    unsigned int _locationState;
    int _rampType;
    int _rawReferenceFrame;
    GEOLatLng *_roadCoordinate;
    unsigned int _roadLineType;
    NSString *_roadName;
    MNRouteCoordinate *_routeCoordinate;
    NSData *_routeIDData;
    NSString *_shieldText;
    unsigned int _speedLimit;
    unsigned int _stepIndex;
    _Bool _isGoodMatch;
    _Bool _isTunnelProjection;
    _Bool _speedLimitIsMPH;
    struct {
        unsigned int courseAccuracy:1;
        unsigned int distanceFromRoute:1;
        unsigned int horizontalAccuracy:1;
        unsigned int roadMatchCourse:1;
        unsigned int routeMatchCourse:1;
        unsigned int shieldType:1;
        unsigned int speedLimitShieldType:1;
        unsigned int timestamp:1;
        unsigned int transitID:1;
        unsigned int locationState:1;
        unsigned int rampType:1;
        unsigned int rawReferenceFrame:1;
        unsigned int roadLineType:1;
        unsigned int speedLimit:1;
        unsigned int stepIndex:1;
        unsigned int isGoodMatch:1;
        unsigned int isTunnelProjection:1;
        unsigned int speedLimitIsMPH:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic, readonly) _Bool hasRouteIDData;
@property (retain, nonatomic) NSData *routeIDData;
@property (nonatomic) _Bool hasStepIndex;
@property (nonatomic) unsigned int stepIndex;
@property (nonatomic) _Bool hasLocationState;
@property (nonatomic) unsigned int locationState;
@property (nonatomic, readonly) _Bool hasRouteCoordinate;
@property (retain, nonatomic) MNRouteCoordinate *routeCoordinate;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasRoadCoordinate;
@property (retain, nonatomic) GEOLatLng *roadCoordinate;
@property (nonatomic) _Bool hasRouteMatchCourse;
@property (nonatomic) double routeMatchCourse;
@property (nonatomic) _Bool hasRoadMatchCourse;
@property (nonatomic) double roadMatchCourse;
@property (nonatomic, readonly) _Bool hasRoadName;
@property (retain, nonatomic) NSString *roadName;
@property (nonatomic, readonly) _Bool hasShieldText;
@property (retain, nonatomic) NSString *shieldText;
@property (nonatomic) _Bool hasShieldType;
@property (nonatomic) long long shieldType;
@property (nonatomic) _Bool hasRoadLineType;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic) _Bool hasRampType;
@property (nonatomic) int rampType;
@property (nonatomic) _Bool hasSpeedLimit;
@property (nonatomic) unsigned int speedLimit;
@property (nonatomic) _Bool hasSpeedLimitIsMPH;
@property (nonatomic) _Bool speedLimitIsMPH;
@property (nonatomic) _Bool hasIsGoodMatch;
@property (nonatomic) _Bool isGoodMatch;
@property (nonatomic) _Bool hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) _Bool hasCourseAccuracy;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) _Bool hasDistanceFromRoute;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) _Bool hasTransitID;
@property (nonatomic) unsigned long long transitID;
@property (nonatomic) _Bool hasIsTunnelProjection;
@property (nonatomic) _Bool isTunnelProjection;
@property (nonatomic) _Bool hasSpeedLimitShieldType;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) _Bool hasRawReferenceFrame;
@property (nonatomic) int rawReferenceFrame;

+ (id)locationDetailsWithLocation:(id)arg1;
+ (id)locationWithLocationDetails:(id)arg1;
+ (id)locationWithLocationDetails:(id)arg1 route:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)rampTypeAsString:(int)arg1;
- (int)StringAsRampType:(id)arg1;
- (id)rawReferenceFrameAsString:(int)arg1;
- (int)StringAsRawReferenceFrame:(id)arg1;

@end
