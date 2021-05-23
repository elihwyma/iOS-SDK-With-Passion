/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNNavigationSessionManagerDelegate <Swift>

- (unsigned short)navigationSessionManager:willStartNavigationWithRoute:navigationType:request:response: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didFailWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didChangeNavigationState: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateStepIndex:legIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerDidEnterPreArrivalState: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerDidArrive: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerDidTimeoutInArrivalRegion: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerWillPause: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerWillResumeFromPause: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateDisplayETA:displayRemainingMinutes:forRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateRemainingTime:remainingDistance: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateETAResponseForRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateHeading:accuracy: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateMotionType:confidence: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdatePreviewRoutes:withSelectedRouteIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerWillReroute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didRerouteWithRoute:locationDetails:withAlternateRoutes: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerDidCancelReroute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateRouteWithNewRideSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didSwitchToNewTransportType:newRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didFailRerouteWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateAlternateRoutes: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:proceedToRouteDistance:displayString:closestStepIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:currentStepIndex:didUpdateDistanceUntilSign:timeUntilSign: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:currentStepIndex:didUpdateDistanceUntilManeuver:timeUntilManeuver: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:willAnnounce:inSeconds: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:displayPrimaryStep:instructions:shieldType:shieldText:drivingSide:maneuverStepIndex:isSynthetic: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:displayManeuverAlertForAnnouncementStage: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:displaySecondaryStep:instructions:shieldType:shieldText:drivingSide: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerHideSecondaryStep: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerBeginGuidanceUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManagerEndGuidanceUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:updateSignsWithInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:usePersistentDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:showLaneDirections: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:hideLaneDirectionsForId: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:showJunctionView: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:hideJunctionViewForId: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didEnableGuidancePrompts: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:newGuidanceEventFeedback: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:updatedGuidanceEventFeedback: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didReceiveTrafficIncidentAlert: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateTrafficIncidentAlert: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didInvalidateTrafficIncidentAlert: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didStartSpeakingPrompt: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateAudioSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateCurrentAudioSetting: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateCurrentAudioSettingForVoicePrompt: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateAudioRouteSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didStartUsingVoiceLanguage: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didChangeVolume: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:triggerHaptics: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didUpdateTracePlaybackDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:willSendTransitUpdateRequestForRouteIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationSessionManager:didReceiveTransitUpdates: /* Error: Ran out of types for this method. */;

@end
