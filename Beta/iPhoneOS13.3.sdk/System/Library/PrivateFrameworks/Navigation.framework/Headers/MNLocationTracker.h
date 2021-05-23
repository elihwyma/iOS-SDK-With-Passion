/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOApplicationAuditToken, MNLocation, MNNavigationSession, MNObserverHashTable, NSString;

@interface MNLocationTracker : NSObject

{
    MNObserverHashTable *_safeDelegate;
    int _state;
    GEOApplicationAuditToken *_auditToken;
    MNLocation *_lastMatchedLocation;
    MNNavigationSession *_navigationSession;
    _Bool _localizeRoadNames;
}

@property (nonatomic, readonly) MNObserverHashTable *safeDelegate;
@property (weak, nonatomic, readonly) MNNavigationSession *navigationSession;
@property (nonatomic, setter=_setState:) int state;
@property (retain, nonatomic, getter=_auditToken, setter=_setAuditToken:) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) MNLocation *lastMatchedLocation;
@property (nonatomic, readonly) _Bool isRerouting;
@property (nonatomic, readonly) _Bool hasArrived;
@property (nonatomic, readonly) _Bool shouldProjectAlongRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)pause;
- (void)resume;
- (void)_defaultsDidChange;
- (_Bool)paused;
- (void)stopTracking;
- (void)updateLocation:(id)arg1;
- (void)startTracking;
- (void)_updateShouldLocalizeRoadNames;
- (id)_matchedLocationForLocation:(id)arg1;
- (void)_switchedToStepAtIndex:(unsigned long long)arg1;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2 toRequest:(id)arg3;
- (void)updateManager:(id)arg1 didUpdateETAForRouteInfo:(id)arg2;
- (void)updateManager:(id)arg1 didReceiveETAError:(id)arg2;
- (_Bool)wantsETAUpdates;
- (id)routeInfoForUpdateManager:(id)arg1;
- (id)userLocationForUpdateManager:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (void)updateDestination:(id)arg1 finishedHandler:(CDUnknownBlockType)arg2;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (id)matchedLocationForLocation:(id)arg1;
- (void)updateVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)updateVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (_Bool)shouldAllowPause;
- (void)_setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)_updateMatchedLocation:(id)arg1;
- (void)_roadFeaturesForFeature:(CDStruct_123780e2 *)arg1 outRoadName:(id *)arg2 outShieldText:(id *)arg3 outShieldType:(long long *)arg4;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)traceForcedRerouteWithResponse:(id)arg1 request:(id)arg2;
- (void)traceForcedActiveTransportTypeChange:(int)arg1;
- (void)tracePaused;
- (void)traceJumpedInTime;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;

@end
