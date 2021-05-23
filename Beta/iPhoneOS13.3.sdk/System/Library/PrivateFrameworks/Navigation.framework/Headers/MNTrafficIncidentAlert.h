/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteTraffic, GEOETARoute, GEORouteIncident, NSArray, NSData, NSDate;

@interface MNTrafficIncidentAlert : NSObject

{
    NSData *_alertID;
    NSData *_etaResponseID;
    unsigned long long _alertType;
    GEOETARoute *_oldETARoute;
    GEOComposedRoute *_originalRoute;
    GEOComposedRouteTraffic *_originalRouteTraffic;
    GEOComposedRoute *_alternateRoute;
    GEOComposedRouteTraffic *_alternateRouteTraffic;
    CDStruct_3f2a7a20 _startValidCoordinateRange;
    CDStruct_3f2a7a20 _endValidCoordinateRange;
    CDStruct_3f2a7a20 _incidentCoordinate;
    CDStruct_3f2a7a20 _alternateEndValidCoordinateRange;
    NSDate *_alertDate;
    double _distanceToIncident;
    NSDate *_eta;
    _Bool _isAutomaticReroute;
}

@property (nonatomic, readonly) NSData *alertID;
@property (nonatomic, readonly) NSData *etaResponseID;
@property (nonatomic, readonly) unsigned long long alertType;
@property (nonatomic) double distanceToIncident;
@property (retain, nonatomic) NSDate *eta;
@property (nonatomic, readonly) NSArray *alertTitles;
@property (nonatomic, readonly) NSArray *alertDescriptions;
@property (nonatomic, readonly) NSArray *spokenTexts;
@property (nonatomic, readonly) GEOETARoute *oldETARoute;
@property (nonatomic, readonly) GEORouteIncident *oldETARouteIncident;
@property (nonatomic, readonly) GEOComposedRoute *originalRoute;
@property (nonatomic, readonly) GEOComposedRouteTraffic *originalRouteTraffic;
@property (nonatomic, readonly) GEOComposedRoute *alternateRoute;
@property (nonatomic, readonly) GEOComposedRouteTraffic *alternateRouteTraffic;
@property (nonatomic, readonly) double oldEstimatedTime;
@property (nonatomic, readonly) double newEstimatedTime;
@property (nonatomic, readonly) CDStruct_3f2a7a20 startValidCoordinateRange;
@property (nonatomic, readonly) CDStruct_3f2a7a20 endValidCoordinateRange;
@property (nonatomic, readonly) CDStruct_3f2a7a20 incidentCoordinate;
@property (nonatomic, readonly) CDStruct_3f2a7a20 alternateEndValidCoordinateRange;
@property (nonatomic, readonly) NSDate *alertDate;
@property (nonatomic, readonly) double alertDisplayDuration;
@property (nonatomic, readonly) _Bool isAutomaticReroute;
@property (nonatomic, readonly) unsigned long long secondsSaved;

+ (_Bool)supportsSecureCoding;
+ (id)trafficIncidentAlertForDetails:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isSimilarTo:(id)arg1;
- (CDStruct_c3b9c2ee)_divergenceCoordinate;
- (void)updateLocation:(id)arg1;
- (id)initWithRoute:(id)arg1 traffic:(id)arg2 etaRoute:(id)arg3 etaResponse:(id)arg4;
- (void)updateAlertIDWithAlert:(id)arg1;
- (id)initWithTrafficIncidentAlertDetails:(id)arg1;
- (void)_findRouteDivergence;
- (id)_dynamicStringValues;
- (CDStruct_3f2a7a20)_routeCoordinateAtDuration:(double)arg1 beforeRouteCoordinate:(CDStruct_3f2a7a20)arg2;

@end
