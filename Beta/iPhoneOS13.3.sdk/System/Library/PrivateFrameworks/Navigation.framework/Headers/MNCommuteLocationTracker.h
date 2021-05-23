/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNLocationTracker.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEOETAUpdater, GEONavigationMapMatcher, MNActiveRouteInfo, MNCommuteDestinationSuggestion, MNLocation, MNNavigationTraceManager, NSString;

@protocol GEODirectionServiceTicket, GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface MNCommuteLocationTracker : MNLocationTracker

{
    GEOComposedWaypoint *_lastOrigin;
    MNLocation *_lastLocation;
    MNActiveRouteInfo *_routeInfo;
    id <GEOMapServiceTicket> _currentLocationTicket;
    id <GEODirectionServiceTicket> _directionsRequestTicket;
    GEONavigationMapMatcher *_mapMatcher;
    GEOETAUpdater *_etaUpdater;
    MNNavigationTraceManager *_traceManager;
    _Bool _routingInProgress;
    unsigned long long _destinationID;
    MNCommuteDestinationSuggestion *_suggestion;
}

@property (nonatomic) _Bool routingInProgress;
@property (nonatomic, readonly) MNCommuteDestinationSuggestion *suggestion;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic) unsigned long long destinationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (int)transportType;
- (id)_routeAttributes;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)updateETA;
- (void)stopTracking;
- (void)updateLocation:(id)arg1;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)_setAuditToken:(id)arg1;
- (void)_handleWaypoint:(id)arg1 fromLocation:(id)arg2 error:(id)arg3;
- (void)_requestRouteFromWaypoint:(id)arg1 location:(id)arg2;
- (id)_directionsRequestFeedback;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)_requestRouteFromLocation:(id)arg1;
- (_Bool)_checkArrivalForLocation:(id)arg1 route:(id)arg2 destination:(id)arg3;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (id)initWithSuggestion:(id)arg1 traceManager:(id)arg2;

@end
