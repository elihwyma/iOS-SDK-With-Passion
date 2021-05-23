/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNLocationTracker.h>

@class GEONavigationMapMatcher, MNArrivalUpdater, MNLocation, NSData, NSDate, NSMutableArray, NSString, NSTimer;

@protocol GEODirectionServiceTicket;

@interface MNTurnByTurnLocationTracker : MNLocationTracker

{
    GEONavigationMapMatcher *_mapMatcher;
    MNArrivalUpdater *_arrivalUpdater;
    NSDate *_startDate;
    CDStruct_2c43369c _originCoordinate;
    id <GEODirectionServiceTicket> _rerouteTicket;
    NSData *_serverSessionState;
    unsigned long long _rerouteReason;
    long long _responseErrorCode;
    unsigned long long _responseErrorCount;
    unsigned long long _recalculationNetworkUnreachableCount;
    NSTimer *_recalculationRetryTimer;
    MNLocation *_previousRerouteLocation;
    NSMutableArray *_rerouteDates;
    unsigned long long _consecutiveOffRouteCount;
    MNLocation *_lastKnownGoodLocationOnRoute;
    _Bool _isNavigatingInLowGuidance;
}

@property (copy, nonatomic) NSData *serverSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stopTracking;
- (void)updateLocation:(id)arg1;
- (void)startTracking;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (_Bool)isRerouting;
- (void)updateDestination:(id)arg1 finishedHandler:(CDUnknownBlockType)arg2;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (void)_setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)traceJumpedInTime;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;
- (void)_updateForArrival;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (int)_detectedMotionForLocation:(id)arg1;
- (_Bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (id)_alternateRouteForOffRouteLocation:(id)arg1;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (void)arrivalUpdaterDidArrive:(id)arg1;
- (void)arrivalUpdaterDidEnterPreArrivalState:(id)arg1;
- (void)arrivalUpdaterDidTimeoutInArrivalRegion:(id)arg1;
- (void)_reroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_requestDirectionsForLocation:(id)arg1 destination:(id)arg2 transportType:(int)arg3 handler:(CDUnknownBlockType)arg4;
- (_Bool)_allowRerouteForLocation:(id)arg1 outError:(out id *)arg2;
- (_Bool)_isRoadFeatureInOppositeDirection:(CDStruct_123780e2 *)arg1 ofCoordinate:(CDStruct_c3b9c2ee)arg2 course:(double)arg3;
- (_Bool)_shouldAdvanceGuidanceToRouteMatch:(id)arg1;
- (_Bool)_isCameraTestMode;
- (void)_failedToRecalculateRouteWithError:(id)arg1;
- (id)_rerouteTicketForLocation:(id)arg1 transportType:(int)arg2 stepIndex:(unsigned long long)arg3;
- (id)_ticketForNewDestination:(id)arg1 fromLocation:(id)arg2 transportType:(int)arg3;
- (void)_submitRerouteTicketWithHandler:(CDUnknownBlockType)arg1;
- (void)_handleOffRouteForLocation:(id)arg1;
- (void)_retryLastRouteRecalculation;
- (void)_recalculationRetryTimerFired:(id)arg1;
- (void)_sendRouteHintForLocation:(id)arg1;
- (void)_updateStateForLocation:(id)arg1;
- (void)_updateSwitchTransportTypeForLocation:(id)arg1;
- (id)initForTestingWithRoute:(id)arg1;

@end
