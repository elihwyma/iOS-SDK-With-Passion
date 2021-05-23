/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOCommonOptions, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsRequestFeedback, GEOETARoute, GEOETAUpdater, GEOLocation, GEOMapRegion, GEOMapServiceTraits, GEORouteAttributes, GEORouteHypothesis, GEORouteHypothesizerAnalyticsStore, GEORouteMatch, NSDate, NSMutableArray, NSString, geo_isolater;

@interface GEORouteHypothesisMonitor : NSObject <Swift>

{
    CDUnknownBlockType _handler;
    GEODirectionsRequestFeedback *_feedback;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    GEOLocation *_originLocation;
    int _transportType;
    NSDate *_arrivalDate;
    GEORouteHypothesis *_hypothesis;
    GEOLocation *_lastLocation;
    GEOETAUpdater *_etaUpdater;
    GEOETARoute *_liveETARoute;
    GEOETARoute *_baselineETARoute;
    GEORouteAttributes *_routeAttributes;
    GEOCommonOptions *_commonOptions;
    GEOMapServiceTraits *_traits;
    GEORouteHypothesizerAnalyticsStore *_analyticsStore;
    GEOComposedRoute *_route;
    geo_isolater *_requestIsolater;
    GEODirectionsRequest *_currentRequest;
    _Bool _needReroute;
    NSMutableArray *_rerouteEntries;
    GEORouteMatch *_routeMatch;
    GEOLocation *_lastMatchedLocation;
    _Bool _hasArrived;
    _Bool _isTraveling;
    double _travelScore;
    GEOMapRegion *_arrivalMapRegion;
    NSString *_traceName;
}

@property (nonatomic, readonly) NSString *routeName;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (nonatomic, readonly) _Bool supportsLiveTraffic;
@property (nonatomic, readonly) _Bool supportsDirections;
@property (nonatomic, readonly) GEOComposedWaypoint *source;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) NSDate *arrivalDate;
@property (nonatomic, readonly) GEORouteHypothesis *hypothesis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)userPreferencesProvider;
+ (void)setUserPreferencesProvider:(id)arg1;
+ (id)serverFormattedStringFormatter;
+ (void)setServerFormattedStringFormatter:(id)arg1;
+ (id)monitorWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)stopMonitoring;
- (void)_commonInit;
- (void)cancelCurrentRequest;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (void)etaUpdaterRequestCompleted:(id)arg1;
- (id)routeMatchForLocation:(id)arg1;
- (void)_requestNewRouteFromLocation:(id)arg1 usualRouteData:(id)arg2;
- (void)_updateScoreForLocation:(id)arg1;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 arrivalDate:(id)arg4 traceName:(id)arg5 traits:(id)arg6;
- (void)_finishEtaUpdaterInit;
- (void)callHandlerIvar;
- (void)_updateLocation:(id)arg1 allowServer:(_Bool)arg2;
- (void)_fetchETAWithRouteMatch:(id)arg1;
- (_Bool)_hasInitialRoute;
- (void)checkRouteForLocation:(id)arg1;
- (_Bool)_isNavigating;
- (_Bool)_isNavigatingToDestination;
- (void)recordETAUpdatesAfterEventStart;
- (void)_recalculateETAWithRouteMatch:(id)arg1;
- (void)_updateRouteMatchETAAndTravelState;
- (void)_showDebugAlert;
- (void)_recievedRouteResponse:(id)arg1 forLocation:(id)arg2 isReroute:(_Bool)arg3;
- (void)_executeBlockAccessingCurrentRequest:(CDUnknownBlockType)arg1;
- (void)_routeRequestFailed:(id)arg1;
- (id)navDestination;
- (void)updateLocation:(id)arg1 allowServer:(_Bool)arg2 hypothesisHandler:(CDUnknownBlockType)arg3;
- (void)clientDisplayedUINotification:(unsigned long long)arg1;
- (void)travelStateChanged;

@end
