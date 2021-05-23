/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class GEOSharedNavState, MSPSharedTripGroupSession, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface MSPSenderStrategy : NSObject

{
    MSPSharedTripGroupSession *_groupSession;
    NSMutableSet *_participants;
    GEOSharedNavState *_state;
    NSMutableDictionary *_destinationSentStates;
    NSMutableDictionary *_etaSentStates;
    NSMutableDictionary *_lastEtaUpdateDates;
    NSMutableDictionary *_routeSentStates;
    NSMutableDictionary *_trafficSentStates;
}

@property (retain, nonatomic) NSMutableDictionary *destinationSentStates;
@property (retain, nonatomic) NSMutableDictionary *etaSentStates;
@property (retain, nonatomic) NSMutableDictionary *lastEtaUpdateDates;
@property (retain, nonatomic) NSMutableDictionary *routeSentStates;
@property (retain, nonatomic) NSMutableDictionary *trafficSentStates;
@property (retain, nonatomic) NSMutableSet *participants;
@property (copy, nonatomic) GEOSharedNavState *state;

- (_Bool)removeParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)sessionStopped:(id)arg1;
- (void)_sendDestinationReachedUpdate:(id)arg1 to:(id)arg2;
- (void)_sendStoppedUpdate:(id)arg1 to:(id)arg2;
- (id)initWithGroupSession:(id)arg1;
- (void)restoreState:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)_sendDestinationUpdate:(id)arg1 to:(id)arg2;
- (void)_sendETAUpdate:(id)arg1 to:(id)arg2;
- (void)_sendRouteUpdate:(id)arg1 to:(id)arg2;
- (void)_sendTrafficUpdate:(id)arg1 to:(id)arg2;
- (void)etaUpdated:(id)arg1;
- (void)destinationUpdated:(id)arg1;
- (void)routeUpdated:(id)arg1;
- (void)trafficUpdated:(id)arg1;
- (void)stateUpdated:(id)arg1;
- (void)destinationReached:(id)arg1;

@end
