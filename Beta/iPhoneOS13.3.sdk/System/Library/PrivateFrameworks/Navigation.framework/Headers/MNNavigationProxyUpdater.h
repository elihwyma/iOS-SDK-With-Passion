/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEONavigationProxy, MNCompanionNavigationAdapter, NSString;

@interface MNNavigationProxyUpdater : NSObject

{
    GEONavigationProxy *_navigationProxy;
    MNCompanionNavigationAdapter *_companionNavigationAdapter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)setVoiceVolume:(unsigned long long)arg1;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didUpdateStepNameInfo:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateDestination:(id)arg2;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)enteredRoutePreviewWithTransportType:(int)arg1;
- (void)navigationSessionStopped:(id)arg1;
- (void)navigationSessionStarted:(id)arg1;
- (void)updateClusteredSectionSelectedRideForNavigationSession:(id)arg1;

@end
