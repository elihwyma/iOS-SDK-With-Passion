/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteTraffic, GEOComposedWaypoint, GEODirectionsRequest, GEOETARoute, GEOETATrafficUpdateResponse, MNCommuteDestinationSuggestion, MNLocation, MNObserverHashTable, NSDictionary, NSString;

@interface MNCommuteDestination : NSObject

{
    GEOComposedRoute *_nonRecommendedRoute;
    _Bool _invalid;
    _Bool _rerouting;
    MNCommuteDestinationSuggestion *_suggestion;
    GEOComposedRoute *_route;
    GEOComposedRouteTraffic *_traffic;
    GEODirectionsRequest *_directionsRequest;
    MNLocation *_lastMatchedLocation;
    GEOETARoute *_etaRoute;
    GEOETATrafficUpdateResponse *_etaResponse;
    double _remainingTime;
    double _remainingDistance;
    MNLocation *_lastLocation;
    long long _score;
    NSDictionary *_scores;
    MNObserverHashTable *_observers;
}

@property (retain, nonatomic) GEOComposedRoute *nonRecommendedRoute;
@property (retain, nonatomic) MNObserverHashTable *observers;
@property (nonatomic) _Bool invalid;
@property (retain, nonatomic) MNCommuteDestinationSuggestion *suggestion;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) GEOComposedWaypoint *waypoint;
@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEOComposedRouteTraffic *traffic;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) MNLocation *lastMatchedLocation;
@property (readonly) _Bool canGetETARoute;
@property (retain, nonatomic) GEOETARoute *etaRoute;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *etaResponse;
@property (readonly) _Bool canCalculateETA;
@property (nonatomic) double remainingTime;
@property (nonatomic) double remainingDistance;
@property (nonatomic) _Bool rerouting;
@property (retain, nonatomic) MNLocation *lastLocation;
@property (nonatomic, readonly) double geodesicDistance;
@property (nonatomic) long long score;
@property (copy, nonatomic) NSDictionary *scores;
@property (nonatomic, readonly) NSString *shortDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)updateFrom:(id)arg1;

@end
