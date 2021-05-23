/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOLocation, GEORouteHypothesisIncident, NSDate, NSError, NSString;

@interface GEORouteHypothesis : NSObject <Swift>

{
    NSDate *_generationDate;
    GEOLocation *_lastLocation;
    int _transportType;
    NSDate *_suggestedDepartureDate;
    double _estimatedTravelTime;
    unsigned long long _currentTrafficDensity;
    unsigned long long _historicTrafficDensity;
    GEORouteHypothesisIncident *_mostRelevantIncident;
    long long _travelState;
    _Bool _supportsLiveTraffic;
    NSError *_error;
    NSDate *_conservativeDepartureDate;
    NSDate *_aggressiveDepartureDate;
    double _conservativeTravelTime;
    double _aggressiveTravelTime;
    NSString *_routeName;
    NSString *_trafficDensityDescription;
}

@property (nonatomic, readonly) NSDate *generationDate;
@property (nonatomic, readonly) GEOLocation *lastLocation;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) NSDate *suggestedDepartureDate;
@property (nonatomic, readonly) double estimatedTravelTime;
@property (nonatomic, readonly) unsigned long long currentTrafficDensity;
@property (nonatomic, readonly) unsigned long long historicTrafficDensity;
@property (nonatomic, readonly) NSString *trafficDensityDescription;
@property (copy, nonatomic, readonly) NSString *routeName;
@property (nonatomic, readonly) GEORouteHypothesisIncident *mostRelevantIncident;
@property (nonatomic, readonly) long long travelState;
@property (nonatomic, readonly) _Bool supportsLiveTraffic;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDate *conservativeDepartureDate;
@property (nonatomic, readonly) NSDate *aggressiveDepartureDate;
@property (nonatomic, readonly) double conservativeTravelTime;
@property (nonatomic, readonly) double aggressiveTravelTime;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsTravelState:(long long)arg1 forTransportType:(int)arg2;
+ (id)_routeHypothesisErrorWithUnderlyingError:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setError:(id)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setSupportsLiveTraffic:(_Bool)arg1;
- (void)_clearHypothesisAndSetErrorWithCode:(long long)arg1;
- (void)_updateTravelStateHasArrived:(_Bool)arg1 isTraveling:(_Bool)arg2 travelScore:(double)arg3 isNavigating:(_Bool)arg4 isNavigatingToDestination:(_Bool)arg5;
- (void)_updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateTrafficIncidents:(id)arg1;
- (void)setRouteName:(id)arg1;
- (void)_updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateTrafficDensityDescription:(id)arg1;
- (void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)arg1 travelTimeWithTraffic:(double)arg2 conservativeTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4 transportType:(int)arg5;

@end
