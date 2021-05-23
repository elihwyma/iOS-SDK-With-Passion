/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol MNNavigationServiceClientInterface <Swift>

- (unsigned short)navigationServiceProxy:didUpdateNavigationDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:willChangeFromState:toState: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didChangeFromState:toState: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:willStartNavigationWithRoute:navigationType:request:response: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyWillPauseNavigation: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyWillResumeFromPauseNavigation: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didFailWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didChangeNavigationState: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateMatchedLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateStepIndex:legIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateProceedToRouteDistance:displayString:closestStepIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateDistanceUntilSign:timeUntilSign:forStepIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateDistanceUntilManeuver:timeUntilManeuver:forStepIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:willAnnounce:inSeconds: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:displayPrimaryStep:instructions:shieldType:shieldText:drivingSide:maneuverStepIndex:isSynthetic: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:displayManeuverAlertForAnnouncementStage: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:displaySecondaryStep:instructions:shieldType:shieldText:drivingSide: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyHideSecondaryStep: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyBeginGuidanceUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyEndGuidanceUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:updateSignsWithInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:usePersistentDisplay: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:showLaneDirections: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:hideLaneDirectionsForId: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:showJunctionView: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:hideJunctionViewForId: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyDidEnterPreArrivalState: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyDidArrive: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyPredictingDidArrive: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didEnableGuidancePrompts: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:newGuidanceEventFeedback: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:updatedGuidanceEventFeedback: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateDisplayETA:displayRemainingMinutes:forRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateRemainingTime:remainingDistance: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateETAResponseForRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateHeading:accuracy: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateMotionType:confidence: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdatePreviewRoutes:withSelectedRouteIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyWillReroute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didRerouteWithRoute:withLocationDetails:withAlternateRoutes: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxyDidCancelReroute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateRouteWithNewRideSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didSwitchToNewTransportType:newRoute: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didFailRerouteWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateAlternateRoutes: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didReceiveTrafficIncidentAlert: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateTrafficIncidentAlert: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didInvalidateTrafficIncidentAlert: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdatePossibleCommuteDestinations: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateTracePlaybackDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didActivateAudioSession: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didStartSpeakingPrompt: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didStartUsingVoiceLanguage: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateAudioOutputSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateAudioOutputCurrentSetting: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateAudioOutputCurrentSettingForVoicePrompt: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didUpdateAudioOutputRouteSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didChangeVolume: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:triggerHaptics: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:willRequestRealtimeUpdatesForRouteIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)navigationServiceProxy:didReceiveRealtimeUpdates: /* Error: Ran out of types for this method. */;

@end
