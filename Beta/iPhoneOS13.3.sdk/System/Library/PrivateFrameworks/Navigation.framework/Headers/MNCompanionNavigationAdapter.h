/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOComposedRoute, GEOLocation, GEONavigationGuidanceState, GEORouteMatch, MNCompanionNavigationXPCConnection, NSArray, NSString, NSTimer;

@protocol GEOServerFormattedStepStringFormatter, MNCompanionNavigationDelegate;

@interface MNCompanionNavigationAdapter : NSObject

{
    NSString *_destinationName;
    GEOComposedRoute *_route;
    GEOLocation *_lastLocation;
    _Bool _locationUnreliable;
    GEORouteMatch *_routeMatch;
    NSString *_currentRoadName;
    _Bool _guidancePromptsEnabled;
    unsigned long long _displayedStepIndex;
    CDStruct_a70066d4 _positionFromManeuver;
    CDStruct_a70066d4 _positionFromDestination;
    unsigned long long _announcementStage;
    unsigned long long _nextAnnouncementStage;
    double _timeUntilNextAnnouncement;
    GEONavigationGuidanceState *_guidanceState;
    _Bool _isNavigatingInLowGuidance;
    _Bool _isConnectedToCarplay;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
    NSArray *_companionRouteUpdates;
    _Bool _shouldSendRouteWithStatus;
    NSTimer *_coalescedRouteStatusTimer;
    NSTimer *_coalescedRouteUpdatesTimer;
    MNCompanionNavigationXPCConnection *_connection;
    id <GEOServerFormattedStepStringFormatter> _formatter;
    id <MNCompanionNavigationDelegate> _delegate;
}

@property (weak, nonatomic) id <MNCompanionNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_reset;
- (id)initWithDelegate:(id)arg1;
- (_Bool)_isInvalidated;
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setVoiceVolume:(unsigned long long)arg1;
- (void)_setRouteMatch:(id)arg1;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationServiceDidSynchronize:(id)arg1;
- (void)navigationService:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateDistanceUntilManeuver:(double)arg2 timeUntilManeuver:(double)arg3 forStepIndex:(unsigned long long)arg4;
- (void)navigationService:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationServiceWillReroute:(id)arg1;
- (void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3;
- (void)navigationServiceDidCancelReroute:(id)arg1;
- (void)navigationService:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (id)initWithNavigationSession:(id)arg1;
- (void)_setRoute:(id)arg1 traffic:(id)arg2 isTrace:(_Bool)arg3;
- (void)_cancelScheduledRouteStatus;
- (void)_cancelScheduledRouteUpdates;
- (void)_scheduleCoalescedRouteStatusUpdate;
- (void)_updateCompanionRouteStatus;
- (void)_scheduleCoalescedRouteUpdates;
- (void)_sendRouteStatus;
- (void)_sendRouteUpdates;
- (void)_sendRouteDetailsAndStatus;
- (void)_markCurrentHapticsAsTriggered;
- (void)_setNavigationState:(int)arg1;
- (void)_setLastLocation:(id)arg1;
- (void)_setDisplayedStepIndex:(unsigned long long)arg1;
- (void)_setPositionFromDestination:(CDStruct_c3b9c2ee)arg1;
- (void)_setDestinationName:(id)arg1;
- (void)_setPositionFromManeuver:(CDStruct_c3b9c2ee)arg1;
- (void)_setNextAnnouncementStage:(unsigned long long)arg1 timeUntilNextAnnouncement:(double)arg2;
- (void)_triggerHaptics:(int)arg1;
- (void)_setAnnouncementStage:(unsigned long long)arg1;
- (void)_setGuidancePromptsEnabled:(_Bool)arg1;
- (void)_handleNavigationServiceStopped;
- (void)_reloadRouteFromNavigationService:(id)arg1;
- (void)_setRealtimeUpdates:(id)arg1;
- (void)_setLocationUnreliable:(_Bool)arg1;

@end
