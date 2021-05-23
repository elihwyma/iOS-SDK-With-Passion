/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOApplicationAuditToken, GEOCommonOptions, GEOComposedRoute, GEOComposedRouteStep, GEOComposedWaypoint, GEOETATrafficUpdateRequest, GEOLocation, GEORouteAttributes, GEORouteMatch, NSData, NSString, NSTimer;

@protocol GEOETAUpdaterDelegate;

@interface GEOETAUpdater : NSObject

{
    id <GEOETAUpdaterDelegate> _delegate;
    NSString *_requestingAppIdentifier;
    GEOETATrafficUpdateRequest *_currentETARequest;
    GEOLocation *_userLocation;
    GEORouteMatch *_routeMatch;
    GEOComposedRoute *_route;
    GEOComposedWaypoint *_destination;
    GEORouteAttributes *_routeAttributes;
    long long _etaState;
    _Bool _allowRequests;
    _Bool _shouldUseConditionalRequest;
    _Bool _shouldUpdateTrafficOnRoute;
    double _requestInterval;
    NSTimer *_etaIdleTimer;
    double _lastETARequestTime;
    double _debugTimeWindowDuration;
    unsigned long long _maxAlternateRoutesCount;
    NSData *_directionsResponseID;
    GEOCommonOptions *_commonOptions;
    GEOApplicationAuditToken *_auditToken;
    GEOComposedRouteStep *_currentStepAtRequestStart;
    double _percentageOfCurrentStepRemainingAtRequestStart;
}

@property (nonatomic, readonly) _Bool requestInProgress;
@property (weak, nonatomic) id <GEOETAUpdaterDelegate> delegate;
@property (retain, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOComposedRoute *route;
@property (retain, nonatomic) GEORouteMatch *routeMatch;
@property (retain, nonatomic) GEOLocation *userLocation;
@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (retain, nonatomic) GEORouteAttributes *routeAttributes;
@property (retain, nonatomic) NSData *directionsResponseID;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (nonatomic) _Bool allowRequests;
@property (nonatomic) _Bool shouldUseConditionalRequest;
@property (nonatomic) _Bool shouldUpdateTrafficOnRoute;
@property (nonatomic) double requestInterval;
@property (nonatomic) double debugTimeWindowDuration;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;

- (id)init;
- (void)dealloc;
- (void)reset;
- (double)_currentTime;
- (void)cancelRequest;
- (void)requestUpdate;
- (void)_clearTimer;
- (void)_continueUpdateRequests;
- (id)_updateOrCreateRequest:(id)arg1;
- (void)_sendRequest:(id)arg1;
- (id)routesForETAUpdateRequest;
- (_Bool)_shouldStartConditionalETARequest;
- (void)_startConditionalConnectionETARequest;
- (void)_updateRequest:(id)arg1;
- (void)_trafficRequest:(id)arg1 finished:(id)arg2;
- (id)currentStep;
- (double)percentageOfCurrentStepRemaining;
- (_Bool)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (_Bool)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3;
- (double)_calculateNextTransitionTime;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (_Bool)_updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (void)startUpdateRequests;
- (void)stopUpdateRequests;

@end
