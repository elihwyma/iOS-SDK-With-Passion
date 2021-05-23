/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOComposedTransitStationRouteStep, GEOComposedTransitTripRouteStep, GEONavigationMatchInfo, NSArray, NSDate;

@interface GEORouteMatch : NSObject

{
    GEOComposedRoute *_route;
    struct PolylineCoordinate _routeCoordinate;
    CDStruct_2c43369c _locationCoordinate;
    unsigned long long _stepIndex;
    NSArray *_candidateSteps;
    double _matchedCourse;
    double _distanceFromRoute;
    double _modifiedHorizontalAccuracy;
    double _modifiedCourseAccuracy;
    unsigned long long _consecutiveProgressionsOffRoute;
    double _distanceTraveledOffRoute;
    _Bool _isGoodMatch;
    CDStruct_c8b5ad3f *_road;
    double _roadWidth;
    GEORouteMatch *_projectedFrom;
    NSDate *_timestamp;
    unsigned long long _transitID;
    _Bool _isTunnelProjection;
    GEONavigationMatchInfo *_detailedMatchInfo;
}

@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic) CDStruct_c3b9c2ee locationCoordinate;
@property (nonatomic, readonly) struct PolylineCoordinate routeCoordinate;
@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic, readonly) GEOComposedRouteStep *step;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *transitTripStep;
@property (nonatomic, readonly) GEOComposedTransitStationRouteStep *transitStationStep;
@property (retain, nonatomic) NSArray *candidateSteps;
@property (nonatomic, readonly) double matchedCourse;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) CDStruct_c8b5ad3f *road;
@property (nonatomic, readonly) double roadWidth;
@property (nonatomic, readonly) _Bool isOnParkingLotRoad;
@property (nonatomic, readonly) _Bool routeMatchedToEnd;
@property (retain, nonatomic) GEORouteMatch *projectedFrom;
@property (nonatomic) _Bool isTunnelProjection;
@property (nonatomic) _Bool isGoodMatch;
@property (nonatomic) unsigned long long consecutiveProgressionsOffRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic) double modifiedCourseAccuracy;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic) unsigned long long transitID;
@property (retain, nonatomic) GEONavigationMatchInfo *detailedMatchInfo;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id).cxx_construct;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 locationCoordinate:(CDStruct_c3b9c2ee)arg3 stepIndex:(unsigned long long)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (void)setRouteCoordinate:(struct PolylineCoordinate)arg1;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;
- (id)initWithComposedRoute:(id)arg1 routeStatus:(id)arg2;
- (_Bool)isEqualIgnoringScore:(id)arg1;
- (_Bool)routeMatchBehind:(id)arg1;
- (double)fractionOfCurrentStepTraveled;

@end
