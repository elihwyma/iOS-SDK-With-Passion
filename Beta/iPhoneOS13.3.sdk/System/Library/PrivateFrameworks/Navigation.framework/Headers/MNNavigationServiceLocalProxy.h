/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

#import <Navigation/Swift-Protocol.h>

@class NSString;

@protocol MNNavigationServiceClientInterface;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceLocalProxy : NSObject <Swift>

{
    id <MNNavigationServiceClientInterface> _delegate;
    unsigned long long _navigationServiceState;
    CDUnknownBlockType _navigationServiceActiveBlock;
    CDUnknownBlockType _navigationServiceActivePredictingBlock;
}

@property (weak, nonatomic) id <MNNavigationServiceClientInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)start;
- (void)reset;
- (void)setHeadingOrientation:(int)arg1;
- (void)setGuidancePromptsEnabled:(_Bool)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setIsConnectedToCarplay:(_Bool)arg1;
- (void)stopNavigation;
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;
- (void)startPredictingDestinationsWithHandler:(CDUnknownBlockType)arg1;
- (void)stopPredictingDestinations;
- (void)updateDestination:(id)arg1;
- (void)resumeOriginalDestination;
- (void)switchToRoute:(id)arg1;
- (void)setFullGuidanceMode:(_Bool)arg1;
- (void)changeSettings:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;
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
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;
- (void)updateGuidanceWithData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;
- (unsigned long long)_serviceStateForStateType:(unsigned long long)arg1;
- (void)stateManager:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManager:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
- (void)stateManagerPredictingDidArrive:(id)arg1;
- (void)navigationSessionManager:(id)arg1 willStartNavigationWithRoute:(id)arg2 navigationType:(int)arg3 request:(id)arg4 response:(id)arg5;
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSessionManagerDidEnterPreArrivalState:(id)arg1;
- (void)navigationSessionManagerDidArrive:(id)arg1;
- (void)navigationSessionManagerDidTimeoutInArrivalRegion:(id)arg1;
- (void)navigationSessionManagerWillPause:(id)arg1;
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationSessionManager:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateMotionType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdatePreviewRoutes:(id)arg2 withSelectedRouteIndex:(unsigned long long)arg3;
- (void)navigationSessionManagerWillReroute:(id)arg1;
- (void)navigationSessionManager:(id)arg1 didRerouteWithRoute:(id)arg2 locationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;
- (void)navigationSessionManager:(id)arg1 didUpdateRouteWithNewRideSelection:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSessionManager:(id)arg1 didFailRerouteWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 showJunctionView:(id)arg2;
- (void)navigationSessionManager:(id)arg1 hideJunctionViewForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioSettings:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSetting:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSettingForVoicePrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioRouteSelection:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didChangeVolume:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 triggerHaptics:(int)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationSessionManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;

@end
