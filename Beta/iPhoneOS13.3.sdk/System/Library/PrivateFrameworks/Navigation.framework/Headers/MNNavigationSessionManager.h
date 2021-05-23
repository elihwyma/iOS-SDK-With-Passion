/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOApplicationAuditToken, MNAudioOutputSettingsManager, MNNavigationProxyUpdater, MNNavigationSession, MNNavigationTraceManager, MNRouteManager, MNSessionUpdateManager, NSMutableDictionary, NSString;

@protocol MNNavigationSessionManagerDelegate;

@interface MNNavigationSessionManager : NSObject

{
    id <MNNavigationSessionManagerDelegate> _delegate;
    MNSessionUpdateManager *_updateManager;
    MNNavigationSession *_navigationSession;
    MNRouteManager *_routeManager;
    MNNavigationProxyUpdater *_proxyUpdater;
    MNNavigationTraceManager *_traceManager;
    MNAudioOutputSettingsManager *_audioOutputSettingsManager;
    NSMutableDictionary *_trafficIncidentAlertCallbacks;
    GEOApplicationAuditToken *_auditToken;
}

@property (weak, nonatomic) id <MNNavigationSessionManagerDelegate> delegate;
@property (nonatomic, readonly) MNSessionUpdateManager *updateManager;
@property (nonatomic, readonly) MNNavigationSession *navigationSession;
@property (nonatomic, readonly) MNRouteManager *routeManager;
@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithAuditToken:(id)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)navigationSession:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSessionDidEnterPreArrivalState:(id)arg1;
- (void)navigationSessionDidArrive:(id)arg1;
- (void)navigationSessionDidTimeoutInArrivalRegion:(id)arg1;
- (void)navigationSessionWillPause:(id)arg1;
- (void)navigationSessionWillResumeFromPause:(id)arg1;
- (void)navigationSession:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationSession:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSession:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSession:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)navigationSessionDidCancelReroute:(id)arg1;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSession:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSession:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSession:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSession:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSession:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationSession:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSessionBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionEndGuidanceUpdate:(id)arg1;
- (void)navigationSession:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSession:(id)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationSession:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSession:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSession:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationSession:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationSession:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationSession:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationSession:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)navigationSession:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSession:(id)arg1 didActivateAudioSession:(_Bool)arg2;
- (void)navigationSession:(id)arg1 didStartSpeakingPrompt:(id)arg2;
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
- (void)setVoiceGuidanceLevel:(unsigned long long)arg1;
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;
- (unsigned long long)voiceGuidanceLevel;
- (void)stopNavigation;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)updateDestination:(id)arg1;
- (void)resumeOriginalDestination;
- (void)switchToRoute:(id)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)setHFPPreference:(_Bool)arg1 forSetting:(id)arg2;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;
- (void)setTraceIsPlaying:(_Bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)recordPedestrianTracePath:(id)arg1;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateSettings:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateCurrentSetting:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateCurrentSettingForVoicePrompt:(id)arg2;
- (void)audioOutputSettingsManager:(id)arg1 didUpdateRouteSelection:(unsigned long long)arg2;
- (id)_traceManager;
- (void)navigationTraceManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)settingsManager:(id)arg1 didUpdateSettings:(id)arg2 previousSettings:(id)arg3;
- (void)addInjectedEvent:(id)arg1;
- (void)startNavigationWithDetails:(id)arg1;
- (void)updateForStartNavigation:(id)arg1;
- (_Bool)repeatCurrentGuidance;
- (_Bool)repeatCurrentTrafficAlert;
- (id)_routeManager;
- (id)_proxyUpdater;
- (void)navigationTraceManagerDidFailToRecordTrace:(id)arg1;

@end
