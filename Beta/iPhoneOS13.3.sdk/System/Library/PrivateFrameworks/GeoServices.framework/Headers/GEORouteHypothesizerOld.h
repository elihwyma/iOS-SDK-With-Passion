/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequestFeedback, GEOETARoute, GEOETAUpdater, GEOLocation, GEOLocationShifter, GEORouteAttributes, GEORouteHypothesisOld, GEORouteHypothesizerUpdater, NSData, NSDate, NSString;

@protocol GEORouteHypothesizerDelegate;

@interface GEORouteHypothesizerOld : NSObject

{
    id <GEORouteHypothesizerDelegate> _delegate;
    CDUnknownBlockType _handler;
    GEODirectionsRequestFeedback *_feedback;
    GEOLocationShifter *_locationShifter;
    GEOComposedWaypoint *_source;
    GEOComposedWaypoint *_destination;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    GEORouteHypothesisOld *_hypothesis;
    GEOLocation *_lastLocation;
    NSDate *_suggestedNextUpdateDate;
    NSDate *_lastETARequestDate;
    double _etaUpdateInterval;
    unsigned long long _etaUpdateFrequency;
    GEOETAUpdater *_etaUpdater;
    GEOETARoute *_liveETARoute;
    GEOETARoute *_baselineETARoute;
    GEORouteAttributes *_routeAttributes;
    GEORouteHypothesizerUpdater *_updater;
    NSData *_usualRouteData;
}

@property (weak, nonatomic) id <GEORouteHypothesizerDelegate> delegate;
@property (nonatomic) unsigned long long etaUpdateFrequency;
@property (retain, nonatomic) GEODirectionsRequestFeedback *feedback;
@property (nonatomic, readonly) _Bool supportsLiveTraffic;
@property (nonatomic, readonly) _Bool supportsDirections;
@property (nonatomic, readonly) GEOComposedWaypoint *source;
@property (nonatomic, readonly) GEOComposedWaypoint *destination;
@property (nonatomic, readonly) NSDate *departureDate;
@property (nonatomic, readonly) NSDate *arrivalDate;
@property (nonatomic, readonly) NSDate *suggestedNextUpdateDate;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_commonInit;
- (void)_updateLocation:(id)arg1 hypothesisHandler:(CDUnknownBlockType)arg2;
- (void)_createUpdaterWithStartingLocation:(id)arg1;
- (void)_updateETAWithRouteMatch:(id)arg1;
- (void)_updateLocationAndETAUpdateInterval;
- (void)_refreshETAWithRouteMatch:(id)arg1;
- (void)routeHypothesizerUpdater:(id)arg1 willRequestNewRoute:(id)arg2;
- (void)routeHypothesizerUpdater:(id)arg1 receivedNewRoute:(id)arg2 request:(id)arg3 response:(id)arg4;
- (id)etaUpdaterRoutesForETATrafficUpdateRequest:(id)arg1;
- (void)etaUpdater:(id)arg1 willSendETATrafficUpdateRequest:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedETATrafficUpdateResponse:(id)arg2;
- (void)etaUpdater:(id)arg1 receivedError:(id)arg2;
- (void)etaUpdaterUpdatedETA:(id)arg1;
- (void)etaUpdaterReceivedInvalidRoute:(id)arg1 newRoute:(id)arg2 incidentsOnRoute:(id)arg3 incidentsOffRoute:(id)arg4;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 usualRouteData:(id)arg4;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 usualRouteData:(id)arg4;
- (void)addRouteAttributes:(id)arg1;
- (void)updateLocation:(id)arg1 hypothesisHandler:(CDUnknownBlockType)arg2;

@end
