/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEONavigationGuidanceState, MNActiveRouteInfo, MNLocation, MNStartNavigationDetails, NSArray, NSMapTable, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationDetails : NSObject

{
    MNStartNavigationDetails *_startNavigationDetails;
    unsigned long long _state;
    int _navigationType;
    int _desiredNavigationType;
    int _desiredTransportType;
    MNLocation *_location;
    unsigned long long _routeIndex;
    _Bool _isDetour;
    GEONavigationGuidanceState *_guidanceState;
    MNActiveRouteInfo *_currentRoute;
    NSArray *_previewRoutes;
    NSArray *_alternateRoutes;
    GEOComposedWaypoint *_originalOrigin;
    GEOComposedWaypoint *_originalDestination;
    NSArray *_possibleCommuteDestinations;
    NSMapTable *_routeIDLookup;
    NSMutableDictionary *_routeLookup;
    NSMutableDictionary *_trafficIncidentAlerts;
    _Bool _guidancePromptsEnabled;
    _Bool _isInPreArrivalState;
    _Bool _traceIsPlaying;
    int _headingOrientation;
    int _navigationState;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    unsigned long long _reconnectionRouteIndex;
    unsigned long long _selectedPreviewRouteIndex;
    double _proceedToRouteDistance;
    NSString *_displayString;
    double _remainingTime;
    double _remainingDistance;
    unsigned long long _closestStepIndex;
    double _distanceUntilSign;
    double _timeUntilSign;
    double _distanceUntilManeuver;
    double _timeUntilManeuver;
    NSString *_currentVoiceLanguage;
    NSString *_tracePath;
    double _traceDuration;
    double _tracePosition;
    NSArray *_traceBookmarks;
    NSMutableDictionary *_trackedCommuteDestinations;
}

@property (retain, nonatomic) NSMutableDictionary *trackedCommuteDestinations;
@property (nonatomic, readonly) NSMapTable *routeIDLookup;
@property (nonatomic, readonly) NSMutableDictionary *routeLookup;
@property (nonatomic) unsigned long long state;
@property (nonatomic) int navigationType;
@property (nonatomic) int desiredNavigationType;
@property (nonatomic) int desiredTransportType;
@property (retain, nonatomic) GEODirectionsRequest *directionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *directionsResponse;
@property (retain, nonatomic) MNLocation *location;
@property (nonatomic) _Bool guidancePromptsEnabled;
@property (nonatomic) _Bool isDetour;
@property (nonatomic) int headingOrientation;
@property (nonatomic) int navigationState;
@property (retain, nonatomic) GEONavigationGuidanceState *guidanceState;
@property (nonatomic) _Bool isInPreArrivalState;
@property (nonatomic, readonly) GEOComposedRoute *currentRoute;
@property (nonatomic, readonly) unsigned long long routeIndex;
@property (nonatomic, readonly) unsigned long long reconnectionRouteIndex;
@property (nonatomic, readonly) unsigned long long selectedPreviewRouteIndex;
@property (nonatomic, readonly) NSArray *previewRoutes;
@property (nonatomic, readonly) NSArray *alternateRoutes;
@property (retain, nonatomic) GEOComposedWaypoint *originalOrigin;
@property (retain, nonatomic) GEOComposedWaypoint *originalDestination;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) unsigned long long legIndex;
@property (nonatomic) double proceedToRouteDistance;
@property (retain, nonatomic) NSString *displayString;
@property (nonatomic) double remainingTime;
@property (nonatomic) double remainingDistance;
@property (nonatomic) unsigned long long closestStepIndex;
@property (nonatomic) double distanceUntilSign;
@property (nonatomic) double timeUntilSign;
@property (nonatomic) double distanceUntilManeuver;
@property (nonatomic) double timeUntilManeuver;
@property (retain, nonatomic) NSString *currentVoiceLanguage;
@property (nonatomic, readonly) NSArray *possibleCommuteDestinations;
@property (copy, nonatomic) NSString *tracePath;
@property (nonatomic) _Bool traceIsPlaying;
@property (nonatomic) double traceDuration;
@property (nonatomic) double tracePosition;
@property (retain, nonatomic) NSArray *traceBookmarks;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlternateRoutes:(id)arg1;
- (void)setCurrentRoute:(id)arg1 withAlternateRoutes:(id)arg2;
- (void)updateLocationFromDetails:(id)arg1;
- (void)updateETATrafficForRoute:(id)arg1;
- (void)setPreviewRoutes:(id)arg1 withSelectedRouteIndex:(unsigned long long)arg2;
- (id)updateWithTrafficIncidentAlert:(id)arg1;
- (id)removeTrafficIncidentAlert:(id)arg1;
- (void)updatePossibleCommuteDestinations:(id)arg1;
- (id)routeInfoForRoute:(id)arg1;
- (id)routeLookupIDs;
- (void)copySerializableValuesFrom:(id)arg1;
- (id)routeInfoForID:(id)arg1;
- (void)_updateRouteIDLookup;

@end
