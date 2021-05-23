/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOApplicationAuditToken, GEODataRequestThrottlerToken, GEOETATrafficUpdateRequest, GEOTransitRouteUpdater, NSMutableDictionary, NSString, NSTimer;

@protocol MNSessionUpdateManagerDelegate;

@interface MNSessionUpdateManager : NSObject

{
    id <MNSessionUpdateManagerDelegate> _delegate;
    NSString *_requestingAppIdentifier;
    GEOApplicationAuditToken *_auditToken;
    GEODataRequestThrottlerToken *_throttleToken;
    GEOTransitRouteUpdater *_transitUpdater;
    NSMutableDictionary *_subscribers;
    NSTimer *_etaTimer;
    double _etaRequestInterval;
    double _initialRequestDelay;
    double _opportunisticRequestTimeWindow;
    unsigned long long _maxAlternateRoutesCount;
    _Bool _isPaused;
    GEOETATrafficUpdateRequest *_pendingETARequest;
}

@property (weak, nonatomic) id <MNSessionUpdateManagerDelegate> delegate;
@property (copy, nonatomic) NSString *requestingAppIdentifier;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic) double etaRequestInterval;
@property (nonatomic) double initialRequestDelay;
@property (nonatomic) double opportunisticRequestTimeWindow;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)transitRouteUpdater:(id)arg1 willSendRequests:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 willUpdateTransitForRouteIDs:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 didFailUpdateForRouteIDs:(id)arg2 withError:(id)arg3;
- (void)transitRouteUpdater:(id)arg1 didReceiveResponse:(id)arg2;
- (void)transitRouteUpdater:(id)arg1 didUpdateTransitRoutes:(id)arg2;
- (void)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (void)stopUpdateRequests;
- (void)_handleETAResponse:(id)arg1 forRouteInfo:(id)arg2 request:(id)arg3 error:(id)arg4;
- (void)startUpdateRequestsForRoutes:(id)arg1 andNavigationType:(int)arg2;
- (void)_scheduleETATimerWithInterval:(double)arg1;
- (void)_terminateETARequests;
- (void)_continueETARequests;
- (_Bool)_hasAtLeastOneActiveSubscriber;
- (void)_sendETARequest;
- (id)_baseETARequest;
- (_Bool)_updateETARequest:(id)arg1 withRouteInfo:(id)arg2 andUserLocation:(id)arg3;
- (void)restartUpdateTimer;
- (void)pauseUpdateRequestsForSubscriber:(id)arg1;
- (void)resumeUpdateRequestsForSubscriber:(id)arg1;

@end
