/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOLocation, NSDate, NSString;

@interface GEORouteHypothesisOld : NSObject

{
    GEOLocation *_lastLocation;
    NSDate *_suggestedDepartureDate;
    NSDate *_estimatedArrivalDate;
    unsigned long long _currentTrafficDensity;
    unsigned long long _historicTrafficDensity;
    _Bool _hasTrafficIncidentOnRoute;
    int _routeIncidentType;
    int _routeIncidentSignificance;
    NSString *_routeIncidentStreetName;
    unsigned long long _travelState;
    double _travelStateScore;
}

@property (retain, nonatomic) GEOLocation *lastLocation;
@property (nonatomic, readonly) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) NSDate *estimatedArrivalDate;
@property (nonatomic, readonly) unsigned long long currentTrafficDensity;
@property (nonatomic, readonly) unsigned long long historicTrafficDensity;
@property (nonatomic, readonly) _Bool hasTrafficIncidentOnRoute;
@property (nonatomic, readonly) int routeIncidentType;
@property (nonatomic, readonly) int routeIncidentSignificance;
@property (nonatomic, readonly) NSString *routeIncidentStreetName;
@property (nonatomic, readonly) unsigned long long travelState;
@property (nonatomic, readonly) double travelStateScore;

- (id)description;
- (void)updateDepartureAndArrivalSuggestions:(id)arg1 arrivalDate:(id)arg2 travelTimeWithTraffic:(double)arg3;
- (void)updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)updateTrafficIncidents:(id)arg1;
- (void)updateTravelState:(id)arg1;

@end
